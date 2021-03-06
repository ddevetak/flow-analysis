/*
***********************************************************
  Implementation of AliReducedTrackCut class.
  Contact: iarsene@cern.ch
  2016/09/07
  *********************************************************
*/

#ifndef ALIREDUCEDTRACKCUT_H
#include "AliReducedTrackCut.h"
#endif

#include "AliReducedBaseTrack.h"
#include "AliReducedTrackInfo.h"
#include "AliReducedVarManager.h"

ClassImp(AliReducedTrackCut)

//____________________________________________________________________________
AliReducedTrackCut::AliReducedTrackCut() :
  AliReducedVarCut(),
  fRejectKinks(kFALSE),
  fRejectTaggedGamma(kFALSE),
  fRejectTaggedPureGamma(kFALSE),
  fCutOnTrackFilterMap(0),
  fUseANDonTrackFilterMap(kTRUE),
  fRejectPureMC(kFALSE),
  fCutOnMCFilterMap(0),
  fUseANDonMCFilterMap(kTRUE),
  fRequestITSrefit(kFALSE),
  fCutOnITShitMap(0),
  fUseANDonITShitMap(kFALSE),
  fRequestCutOnITShitMap(kFALSE),  
  fRequestTPCrefit(kFALSE),
  fRequestTOFout(kFALSE),
  fRequestTRDonlineMatch(kFALSE)
{
  //
  // default constructor
  //
}

//____________________________________________________________________________
AliReducedTrackCut::AliReducedTrackCut(const Char_t* name, const Char_t* title) :
  AliReducedVarCut(name, title),
  fRejectKinks(kFALSE),
  fRejectTaggedGamma(kFALSE),
  fRejectTaggedPureGamma(kFALSE),
  fCutOnTrackFilterMap(0),
  fUseANDonTrackFilterMap(kTRUE),
  fRejectPureMC(kFALSE),
  fCutOnMCFilterMap(0),
  fUseANDonMCFilterMap(kTRUE),
  fRequestITSrefit(kFALSE),
  fCutOnITShitMap(0),
  fUseANDonITShitMap(kFALSE),
  fRequestCutOnITShitMap(kFALSE),  
  fRequestTPCrefit(kFALSE),
  fRequestTOFout(kFALSE),
  fRequestTRDonlineMatch(kFALSE)
{
  //
  // named constructor
  //
}

//____________________________________________________________________________
AliReducedTrackCut::~AliReducedTrackCut() {
  //
  // destructor
  //
}

//____________________________________________________________________________
Bool_t AliReducedTrackCut::IsSelected(TObject* obj) {
  //
  // apply cuts
  //
  if(!obj->InheritsFrom(AliReducedBaseTrack::Class())) return kFALSE;
  
  //Fill values
  double values[AliReducedVarManager::kNVars];
  AliReducedVarManager::FillTrackInfo((AliReducedBaseTrack*)obj, values);
  
  return IsSelected(obj, values);
}


//____________________________________________________________________________
Bool_t AliReducedTrackCut::IsSelected(TObject* obj, double* values) {
   //
   // apply cuts
   //      
   if(!obj->InheritsFrom(AliReducedBaseTrack::Class())) return kFALSE;

   // reject pure MC tracks
   if(fRejectPureMC && ((AliReducedBaseTrack*)obj)->GetMCFlags()) return kFALSE;
   
   // apply cut on the filter map
   // NOTE: the track filter map is stored in the AliReducedBaseTrack::fQualityFlags starting with bit 32
   if(fCutOnTrackFilterMap) {
      UInt_t filterMap = 0;
      for(UShort_t i=0;i<32;++i)  
         if(((AliReducedBaseTrack*)obj)->TestQualityFlag(32+i)) 
             filterMap |= (UInt_t(1)<<i);
      UInt_t eval = filterMap & fCutOnTrackFilterMap;
      if(fUseANDonTrackFilterMap && (eval!=fCutOnTrackFilterMap)) return kFALSE;
      if(!fUseANDonTrackFilterMap && (eval==0)) return kFALSE;
   }

   // apply cut on the MC filter map
   if(fCutOnMCFilterMap) {
      UInt_t filterMap = 0;
      for(UShort_t i=0;i<32;++i)  
         if(((AliReducedBaseTrack*)obj)->TestMCFlag(i)) 
            filterMap |= (UInt_t(1)<<i);
         UInt_t eval = filterMap & fCutOnMCFilterMap;
      if(fUseANDonMCFilterMap && (eval!=fCutOnMCFilterMap)) return kFALSE;
      if(!fUseANDonMCFilterMap && (eval==0)) return kFALSE;
   }

   // apply cuts on the full track info quantities
   if(obj->InheritsFrom(AliReducedTrackInfo::Class())) {
      AliReducedTrackInfo* track = (AliReducedTrackInfo*)obj;
      if(fRequestITSrefit && !track->CheckTrackStatus(AliReducedVarManager::kITSrefit)) return kFALSE;
      if(fRequestTPCrefit && !track->CheckTrackStatus(AliReducedVarManager::kTPCrefit)) return kFALSE;
      if(fRequestTOFout && !track->CheckTrackStatus(AliReducedVarManager::kTOFout)) return kFALSE;
      if(fRequestCutOnITShitMap) {
         UChar_t itsHitMap = track->ITSclusterMap();
         UChar_t eval = itsHitMap & fCutOnITShitMap;
         if(fUseANDonITShitMap && (eval!=fCutOnITShitMap)) return kFALSE;
         if(!fUseANDonITShitMap && (eval==0)) return kFALSE;
      }
   }

   // selections on kinks, tagged gamma, TRD online matching
   if(fRejectKinks && (((AliReducedBaseTrack*)obj)->IsKink(0))) return kFALSE;
   if(fRejectTaggedGamma && ((AliReducedBaseTrack*)obj)->IsGammaLeg()) return kFALSE;
   if(fRejectTaggedPureGamma && ((AliReducedBaseTrack*)obj)->IsPureGammaLeg()) return kFALSE;
   if(fRequestTRDonlineMatch && !((AliReducedBaseTrack*)obj)->IsTRDmatch()) return kFALSE;
   
   return AliReducedVarCut::IsSelected(values);   
}
