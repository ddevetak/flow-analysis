// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__ALICEReducedEvent

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseEvent.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedCaloClusterInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventPlaneInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedPairInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrack.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedFMDInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarManager.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrackCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedInfoCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackInfo.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_AliReducedBaseEvent(void *p = 0);
   static void *newArray_AliReducedBaseEvent(Long_t size, void *p);
   static void delete_AliReducedBaseEvent(void *p);
   static void deleteArray_AliReducedBaseEvent(void *p);
   static void destruct_AliReducedBaseEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedBaseEvent*)
   {
      ::AliReducedBaseEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedBaseEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedBaseEvent", ::AliReducedBaseEvent::Class_Version(), "", 15,
                  typeid(::AliReducedBaseEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedBaseEvent::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedBaseEvent) );
      instance.SetNew(&new_AliReducedBaseEvent);
      instance.SetNewArray(&newArray_AliReducedBaseEvent);
      instance.SetDelete(&delete_AliReducedBaseEvent);
      instance.SetDeleteArray(&deleteArray_AliReducedBaseEvent);
      instance.SetDestructor(&destruct_AliReducedBaseEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedBaseEvent*)
   {
      return GenerateInitInstanceLocal((::AliReducedBaseEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedBaseEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedCaloClusterInfo(void *p = 0);
   static void *newArray_AliReducedCaloClusterInfo(Long_t size, void *p);
   static void delete_AliReducedCaloClusterInfo(void *p);
   static void deleteArray_AliReducedCaloClusterInfo(void *p);
   static void destruct_AliReducedCaloClusterInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedCaloClusterInfo*)
   {
      ::AliReducedCaloClusterInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedCaloClusterInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedCaloClusterInfo", ::AliReducedCaloClusterInfo::Class_Version(), "", 11,
                  typeid(::AliReducedCaloClusterInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedCaloClusterInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedCaloClusterInfo) );
      instance.SetNew(&new_AliReducedCaloClusterInfo);
      instance.SetNewArray(&newArray_AliReducedCaloClusterInfo);
      instance.SetDelete(&delete_AliReducedCaloClusterInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedCaloClusterInfo);
      instance.SetDestructor(&destruct_AliReducedCaloClusterInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedCaloClusterInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedCaloClusterInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedCaloClusterInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedEventPlaneInfo(void *p = 0);
   static void *newArray_AliReducedEventPlaneInfo(Long_t size, void *p);
   static void delete_AliReducedEventPlaneInfo(void *p);
   static void deleteArray_AliReducedEventPlaneInfo(void *p);
   static void destruct_AliReducedEventPlaneInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedEventPlaneInfo*)
   {
      ::AliReducedEventPlaneInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedEventPlaneInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedEventPlaneInfo", ::AliReducedEventPlaneInfo::Class_Version(), "", 12,
                  typeid(::AliReducedEventPlaneInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedEventPlaneInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedEventPlaneInfo) );
      instance.SetNew(&new_AliReducedEventPlaneInfo);
      instance.SetNewArray(&newArray_AliReducedEventPlaneInfo);
      instance.SetDelete(&delete_AliReducedEventPlaneInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedEventPlaneInfo);
      instance.SetDestructor(&destruct_AliReducedEventPlaneInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedEventPlaneInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedEventPlaneInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedEventPlaneInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedBaseTrack(void *p = 0);
   static void *newArray_AliReducedBaseTrack(Long_t size, void *p);
   static void delete_AliReducedBaseTrack(void *p);
   static void deleteArray_AliReducedBaseTrack(void *p);
   static void destruct_AliReducedBaseTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedBaseTrack*)
   {
      ::AliReducedBaseTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedBaseTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedBaseTrack", ::AliReducedBaseTrack::Class_Version(), "", 12,
                  typeid(::AliReducedBaseTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedBaseTrack::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedBaseTrack) );
      instance.SetNew(&new_AliReducedBaseTrack);
      instance.SetNewArray(&newArray_AliReducedBaseTrack);
      instance.SetDelete(&delete_AliReducedBaseTrack);
      instance.SetDeleteArray(&deleteArray_AliReducedBaseTrack);
      instance.SetDestructor(&destruct_AliReducedBaseTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedBaseTrack*)
   {
      return GenerateInitInstanceLocal((::AliReducedBaseTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedBaseTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedPairInfo(void *p = 0);
   static void *newArray_AliReducedPairInfo(Long_t size, void *p);
   static void delete_AliReducedPairInfo(void *p);
   static void deleteArray_AliReducedPairInfo(void *p);
   static void destruct_AliReducedPairInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedPairInfo*)
   {
      ::AliReducedPairInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedPairInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedPairInfo", ::AliReducedPairInfo::Class_Version(), "", 13,
                  typeid(::AliReducedPairInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedPairInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedPairInfo) );
      instance.SetNew(&new_AliReducedPairInfo);
      instance.SetNewArray(&newArray_AliReducedPairInfo);
      instance.SetDelete(&delete_AliReducedPairInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedPairInfo);
      instance.SetDestructor(&destruct_AliReducedPairInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedPairInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedPairInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedPairInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedInfoCut(void *p = 0);
   static void *newArray_AliReducedInfoCut(Long_t size, void *p);
   static void delete_AliReducedInfoCut(void *p);
   static void deleteArray_AliReducedInfoCut(void *p);
   static void destruct_AliReducedInfoCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedInfoCut*)
   {
      ::AliReducedInfoCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedInfoCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedInfoCut", ::AliReducedInfoCut::Class_Version(), "", 11,
                  typeid(::AliReducedInfoCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedInfoCut::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedInfoCut) );
      instance.SetNew(&new_AliReducedInfoCut);
      instance.SetNewArray(&newArray_AliReducedInfoCut);
      instance.SetDelete(&delete_AliReducedInfoCut);
      instance.SetDeleteArray(&deleteArray_AliReducedInfoCut);
      instance.SetDestructor(&destruct_AliReducedInfoCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedInfoCut*)
   {
      return GenerateInitInstanceLocal((::AliReducedInfoCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedInfoCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedFMDInfo(void *p = 0);
   static void *newArray_AliReducedFMDInfo(Long_t size, void *p);
   static void delete_AliReducedFMDInfo(void *p);
   static void deleteArray_AliReducedFMDInfo(void *p);
   static void destruct_AliReducedFMDInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedFMDInfo*)
   {
      ::AliReducedFMDInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedFMDInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedFMDInfo", ::AliReducedFMDInfo::Class_Version(), "", 13,
                  typeid(::AliReducedFMDInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedFMDInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedFMDInfo) );
      instance.SetNew(&new_AliReducedFMDInfo);
      instance.SetNewArray(&newArray_AliReducedFMDInfo);
      instance.SetDelete(&delete_AliReducedFMDInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedFMDInfo);
      instance.SetDestructor(&destruct_AliReducedFMDInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedFMDInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedFMDInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedFMDInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedVarManager(void *p = 0);
   static void *newArray_AliReducedVarManager(Long_t size, void *p);
   static void delete_AliReducedVarManager(void *p);
   static void deleteArray_AliReducedVarManager(void *p);
   static void destruct_AliReducedVarManager(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedVarManager*)
   {
      ::AliReducedVarManager *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedVarManager >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedVarManager", ::AliReducedVarManager::Class_Version(), "", 29,
                  typeid(::AliReducedVarManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedVarManager::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedVarManager) );
      instance.SetNew(&new_AliReducedVarManager);
      instance.SetNewArray(&newArray_AliReducedVarManager);
      instance.SetDelete(&delete_AliReducedVarManager);
      instance.SetDeleteArray(&deleteArray_AliReducedVarManager);
      instance.SetDestructor(&destruct_AliReducedVarManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedVarManager*)
   {
      return GenerateInitInstanceLocal((::AliReducedVarManager*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedVarManager*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedVarCut(void *p = 0);
   static void *newArray_AliReducedVarCut(Long_t size, void *p);
   static void delete_AliReducedVarCut(void *p);
   static void deleteArray_AliReducedVarCut(void *p);
   static void destruct_AliReducedVarCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedVarCut*)
   {
      ::AliReducedVarCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedVarCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedVarCut", ::AliReducedVarCut::Class_Version(), "", 13,
                  typeid(::AliReducedVarCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedVarCut::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedVarCut) );
      instance.SetNew(&new_AliReducedVarCut);
      instance.SetNewArray(&newArray_AliReducedVarCut);
      instance.SetDelete(&delete_AliReducedVarCut);
      instance.SetDeleteArray(&deleteArray_AliReducedVarCut);
      instance.SetDestructor(&destruct_AliReducedVarCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedVarCut*)
   {
      return GenerateInitInstanceLocal((::AliReducedVarCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedVarCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedEventCut(void *p = 0);
   static void *newArray_AliReducedEventCut(Long_t size, void *p);
   static void delete_AliReducedEventCut(void *p);
   static void deleteArray_AliReducedEventCut(void *p);
   static void destruct_AliReducedEventCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedEventCut*)
   {
      ::AliReducedEventCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedEventCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedEventCut", ::AliReducedEventCut::Class_Version(), "", 12,
                  typeid(::AliReducedEventCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedEventCut::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedEventCut) );
      instance.SetNew(&new_AliReducedEventCut);
      instance.SetNewArray(&newArray_AliReducedEventCut);
      instance.SetDelete(&delete_AliReducedEventCut);
      instance.SetDeleteArray(&deleteArray_AliReducedEventCut);
      instance.SetDestructor(&destruct_AliReducedEventCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedEventCut*)
   {
      return GenerateInitInstanceLocal((::AliReducedEventCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedEventCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedTrackCut(void *p = 0);
   static void *newArray_AliReducedTrackCut(Long_t size, void *p);
   static void delete_AliReducedTrackCut(void *p);
   static void deleteArray_AliReducedTrackCut(void *p);
   static void destruct_AliReducedTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedTrackCut*)
   {
      ::AliReducedTrackCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedTrackCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedTrackCut", ::AliReducedTrackCut::Class_Version(), "", 11,
                  typeid(::AliReducedTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedTrackCut::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedTrackCut) );
      instance.SetNew(&new_AliReducedTrackCut);
      instance.SetNewArray(&newArray_AliReducedTrackCut);
      instance.SetDelete(&delete_AliReducedTrackCut);
      instance.SetDeleteArray(&deleteArray_AliReducedTrackCut);
      instance.SetDestructor(&destruct_AliReducedTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedTrackCut*)
   {
      return GenerateInitInstanceLocal((::AliReducedTrackCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedTrackCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedBaseTrackCut(void *p = 0);
   static void *newArray_AliReducedBaseTrackCut(Long_t size, void *p);
   static void delete_AliReducedBaseTrackCut(void *p);
   static void deleteArray_AliReducedBaseTrackCut(void *p);
   static void destruct_AliReducedBaseTrackCut(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedBaseTrackCut*)
   {
      ::AliReducedBaseTrackCut *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedBaseTrackCut >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedBaseTrackCut", ::AliReducedBaseTrackCut::Class_Version(), "", 11,
                  typeid(::AliReducedBaseTrackCut), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedBaseTrackCut::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedBaseTrackCut) );
      instance.SetNew(&new_AliReducedBaseTrackCut);
      instance.SetNewArray(&newArray_AliReducedBaseTrackCut);
      instance.SetDelete(&delete_AliReducedBaseTrackCut);
      instance.SetDeleteArray(&deleteArray_AliReducedBaseTrackCut);
      instance.SetDestructor(&destruct_AliReducedBaseTrackCut);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedBaseTrackCut*)
   {
      return GenerateInitInstanceLocal((::AliReducedBaseTrackCut*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedBaseTrackCut*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedEventInfo(void *p = 0);
   static void *newArray_AliReducedEventInfo(Long_t size, void *p);
   static void delete_AliReducedEventInfo(void *p);
   static void deleteArray_AliReducedEventInfo(void *p);
   static void destruct_AliReducedEventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedEventInfo*)
   {
      ::AliReducedEventInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedEventInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedEventInfo", ::AliReducedEventInfo::Class_Version(), "", 16,
                  typeid(::AliReducedEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedEventInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedEventInfo) );
      instance.SetNew(&new_AliReducedEventInfo);
      instance.SetNewArray(&newArray_AliReducedEventInfo);
      instance.SetDelete(&delete_AliReducedEventInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedEventInfo);
      instance.SetDestructor(&destruct_AliReducedEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedEventInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedEventInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedEventInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AliReducedTrackInfo(void *p = 0);
   static void *newArray_AliReducedTrackInfo(Long_t size, void *p);
   static void delete_AliReducedTrackInfo(void *p);
   static void deleteArray_AliReducedTrackInfo(void *p);
   static void destruct_AliReducedTrackInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AliReducedTrackInfo*)
   {
      ::AliReducedTrackInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AliReducedTrackInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("AliReducedTrackInfo", ::AliReducedTrackInfo::Class_Version(), "", 12,
                  typeid(::AliReducedTrackInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AliReducedTrackInfo::Dictionary, isa_proxy, 4,
                  sizeof(::AliReducedTrackInfo) );
      instance.SetNew(&new_AliReducedTrackInfo);
      instance.SetNewArray(&newArray_AliReducedTrackInfo);
      instance.SetDelete(&delete_AliReducedTrackInfo);
      instance.SetDeleteArray(&deleteArray_AliReducedTrackInfo);
      instance.SetDestructor(&destruct_AliReducedTrackInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AliReducedTrackInfo*)
   {
      return GenerateInitInstanceLocal((::AliReducedTrackInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::AliReducedTrackInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AliReducedBaseEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedBaseEvent::Class_Name()
{
   return "AliReducedBaseEvent";
}

//______________________________________________________________________________
const char *AliReducedBaseEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedBaseEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedBaseEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedBaseEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedCaloClusterInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedCaloClusterInfo::Class_Name()
{
   return "AliReducedCaloClusterInfo";
}

//______________________________________________________________________________
const char *AliReducedCaloClusterInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedCaloClusterInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedCaloClusterInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedCaloClusterInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedCaloClusterInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedCaloClusterInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedCaloClusterInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedCaloClusterInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedEventPlaneInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedEventPlaneInfo::Class_Name()
{
   return "AliReducedEventPlaneInfo";
}

//______________________________________________________________________________
const char *AliReducedEventPlaneInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventPlaneInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedEventPlaneInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventPlaneInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedEventPlaneInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventPlaneInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedEventPlaneInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventPlaneInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedBaseTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedBaseTrack::Class_Name()
{
   return "AliReducedBaseTrack";
}

//______________________________________________________________________________
const char *AliReducedBaseTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedBaseTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedBaseTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedBaseTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedPairInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedPairInfo::Class_Name()
{
   return "AliReducedPairInfo";
}

//______________________________________________________________________________
const char *AliReducedPairInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedPairInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedPairInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedPairInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedPairInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedPairInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedPairInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedPairInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedInfoCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedInfoCut::Class_Name()
{
   return "AliReducedInfoCut";
}

//______________________________________________________________________________
const char *AliReducedInfoCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedInfoCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedInfoCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedInfoCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedInfoCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedInfoCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedInfoCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedInfoCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedFMDInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedFMDInfo::Class_Name()
{
   return "AliReducedFMDInfo";
}

//______________________________________________________________________________
const char *AliReducedFMDInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedFMDInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedFMDInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedFMDInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedFMDInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedFMDInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedFMDInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedFMDInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedVarManager::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedVarManager::Class_Name()
{
   return "AliReducedVarManager";
}

//______________________________________________________________________________
const char *AliReducedVarManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarManager*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedVarManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarManager*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedVarManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarManager*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedVarManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarManager*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedVarCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedVarCut::Class_Name()
{
   return "AliReducedVarCut";
}

//______________________________________________________________________________
const char *AliReducedVarCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedVarCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedVarCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedVarCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedVarCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedEventCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedEventCut::Class_Name()
{
   return "AliReducedEventCut";
}

//______________________________________________________________________________
const char *AliReducedEventCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedEventCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedEventCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedEventCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedTrackCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedTrackCut::Class_Name()
{
   return "AliReducedTrackCut";
}

//______________________________________________________________________________
const char *AliReducedTrackCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedTrackCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedTrackCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedTrackCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedBaseTrackCut::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedBaseTrackCut::Class_Name()
{
   return "AliReducedBaseTrackCut";
}

//______________________________________________________________________________
const char *AliReducedBaseTrackCut::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrackCut*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedBaseTrackCut::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrackCut*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedBaseTrackCut::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrackCut*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedBaseTrackCut::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedBaseTrackCut*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedEventInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedEventInfo::Class_Name()
{
   return "AliReducedEventInfo";
}

//______________________________________________________________________________
const char *AliReducedEventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedEventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedEventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedEventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedEventInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AliReducedTrackInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *AliReducedTrackInfo::Class_Name()
{
   return "AliReducedTrackInfo";
}

//______________________________________________________________________________
const char *AliReducedTrackInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int AliReducedTrackInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AliReducedTrackInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AliReducedTrackInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AliReducedTrackInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AliReducedBaseEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedBaseEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedBaseEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedBaseEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedBaseEvent(void *p) {
      return  p ? new(p) ::AliReducedBaseEvent : new ::AliReducedBaseEvent;
   }
   static void *newArray_AliReducedBaseEvent(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedBaseEvent[nElements] : new ::AliReducedBaseEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedBaseEvent(void *p) {
      delete ((::AliReducedBaseEvent*)p);
   }
   static void deleteArray_AliReducedBaseEvent(void *p) {
      delete [] ((::AliReducedBaseEvent*)p);
   }
   static void destruct_AliReducedBaseEvent(void *p) {
      typedef ::AliReducedBaseEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedBaseEvent

//______________________________________________________________________________
void AliReducedCaloClusterInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedCaloClusterInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedCaloClusterInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedCaloClusterInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedCaloClusterInfo(void *p) {
      return  p ? new(p) ::AliReducedCaloClusterInfo : new ::AliReducedCaloClusterInfo;
   }
   static void *newArray_AliReducedCaloClusterInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedCaloClusterInfo[nElements] : new ::AliReducedCaloClusterInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedCaloClusterInfo(void *p) {
      delete ((::AliReducedCaloClusterInfo*)p);
   }
   static void deleteArray_AliReducedCaloClusterInfo(void *p) {
      delete [] ((::AliReducedCaloClusterInfo*)p);
   }
   static void destruct_AliReducedCaloClusterInfo(void *p) {
      typedef ::AliReducedCaloClusterInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedCaloClusterInfo

//______________________________________________________________________________
void AliReducedEventPlaneInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedEventPlaneInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedEventPlaneInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedEventPlaneInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedEventPlaneInfo(void *p) {
      return  p ? new(p) ::AliReducedEventPlaneInfo : new ::AliReducedEventPlaneInfo;
   }
   static void *newArray_AliReducedEventPlaneInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedEventPlaneInfo[nElements] : new ::AliReducedEventPlaneInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedEventPlaneInfo(void *p) {
      delete ((::AliReducedEventPlaneInfo*)p);
   }
   static void deleteArray_AliReducedEventPlaneInfo(void *p) {
      delete [] ((::AliReducedEventPlaneInfo*)p);
   }
   static void destruct_AliReducedEventPlaneInfo(void *p) {
      typedef ::AliReducedEventPlaneInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedEventPlaneInfo

//______________________________________________________________________________
void AliReducedBaseTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedBaseTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedBaseTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedBaseTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedBaseTrack(void *p) {
      return  p ? new(p) ::AliReducedBaseTrack : new ::AliReducedBaseTrack;
   }
   static void *newArray_AliReducedBaseTrack(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedBaseTrack[nElements] : new ::AliReducedBaseTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedBaseTrack(void *p) {
      delete ((::AliReducedBaseTrack*)p);
   }
   static void deleteArray_AliReducedBaseTrack(void *p) {
      delete [] ((::AliReducedBaseTrack*)p);
   }
   static void destruct_AliReducedBaseTrack(void *p) {
      typedef ::AliReducedBaseTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedBaseTrack

//______________________________________________________________________________
void AliReducedPairInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedPairInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedPairInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedPairInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedPairInfo(void *p) {
      return  p ? new(p) ::AliReducedPairInfo : new ::AliReducedPairInfo;
   }
   static void *newArray_AliReducedPairInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedPairInfo[nElements] : new ::AliReducedPairInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedPairInfo(void *p) {
      delete ((::AliReducedPairInfo*)p);
   }
   static void deleteArray_AliReducedPairInfo(void *p) {
      delete [] ((::AliReducedPairInfo*)p);
   }
   static void destruct_AliReducedPairInfo(void *p) {
      typedef ::AliReducedPairInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedPairInfo

//______________________________________________________________________________
void AliReducedInfoCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedInfoCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedInfoCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedInfoCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedInfoCut(void *p) {
      return  p ? new(p) ::AliReducedInfoCut : new ::AliReducedInfoCut;
   }
   static void *newArray_AliReducedInfoCut(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedInfoCut[nElements] : new ::AliReducedInfoCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedInfoCut(void *p) {
      delete ((::AliReducedInfoCut*)p);
   }
   static void deleteArray_AliReducedInfoCut(void *p) {
      delete [] ((::AliReducedInfoCut*)p);
   }
   static void destruct_AliReducedInfoCut(void *p) {
      typedef ::AliReducedInfoCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedInfoCut

//______________________________________________________________________________
void AliReducedFMDInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedFMDInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedFMDInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedFMDInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedFMDInfo(void *p) {
      return  p ? new(p) ::AliReducedFMDInfo : new ::AliReducedFMDInfo;
   }
   static void *newArray_AliReducedFMDInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedFMDInfo[nElements] : new ::AliReducedFMDInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedFMDInfo(void *p) {
      delete ((::AliReducedFMDInfo*)p);
   }
   static void deleteArray_AliReducedFMDInfo(void *p) {
      delete [] ((::AliReducedFMDInfo*)p);
   }
   static void destruct_AliReducedFMDInfo(void *p) {
      typedef ::AliReducedFMDInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedFMDInfo

//______________________________________________________________________________
void AliReducedVarManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedVarManager.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedVarManager::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedVarManager::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedVarManager(void *p) {
      return  p ? new(p) ::AliReducedVarManager : new ::AliReducedVarManager;
   }
   static void *newArray_AliReducedVarManager(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedVarManager[nElements] : new ::AliReducedVarManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedVarManager(void *p) {
      delete ((::AliReducedVarManager*)p);
   }
   static void deleteArray_AliReducedVarManager(void *p) {
      delete [] ((::AliReducedVarManager*)p);
   }
   static void destruct_AliReducedVarManager(void *p) {
      typedef ::AliReducedVarManager current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedVarManager

//______________________________________________________________________________
void AliReducedVarCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedVarCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedVarCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedVarCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedVarCut(void *p) {
      return  p ? new(p) ::AliReducedVarCut : new ::AliReducedVarCut;
   }
   static void *newArray_AliReducedVarCut(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedVarCut[nElements] : new ::AliReducedVarCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedVarCut(void *p) {
      delete ((::AliReducedVarCut*)p);
   }
   static void deleteArray_AliReducedVarCut(void *p) {
      delete [] ((::AliReducedVarCut*)p);
   }
   static void destruct_AliReducedVarCut(void *p) {
      typedef ::AliReducedVarCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedVarCut

//______________________________________________________________________________
void AliReducedEventCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedEventCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedEventCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedEventCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedEventCut(void *p) {
      return  p ? new(p) ::AliReducedEventCut : new ::AliReducedEventCut;
   }
   static void *newArray_AliReducedEventCut(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedEventCut[nElements] : new ::AliReducedEventCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedEventCut(void *p) {
      delete ((::AliReducedEventCut*)p);
   }
   static void deleteArray_AliReducedEventCut(void *p) {
      delete [] ((::AliReducedEventCut*)p);
   }
   static void destruct_AliReducedEventCut(void *p) {
      typedef ::AliReducedEventCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedEventCut

//______________________________________________________________________________
void AliReducedTrackCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedTrackCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedTrackCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedTrackCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedTrackCut(void *p) {
      return  p ? new(p) ::AliReducedTrackCut : new ::AliReducedTrackCut;
   }
   static void *newArray_AliReducedTrackCut(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedTrackCut[nElements] : new ::AliReducedTrackCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedTrackCut(void *p) {
      delete ((::AliReducedTrackCut*)p);
   }
   static void deleteArray_AliReducedTrackCut(void *p) {
      delete [] ((::AliReducedTrackCut*)p);
   }
   static void destruct_AliReducedTrackCut(void *p) {
      typedef ::AliReducedTrackCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedTrackCut

//______________________________________________________________________________
void AliReducedBaseTrackCut::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedBaseTrackCut.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedBaseTrackCut::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedBaseTrackCut::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedBaseTrackCut(void *p) {
      return  p ? new(p) ::AliReducedBaseTrackCut : new ::AliReducedBaseTrackCut;
   }
   static void *newArray_AliReducedBaseTrackCut(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedBaseTrackCut[nElements] : new ::AliReducedBaseTrackCut[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedBaseTrackCut(void *p) {
      delete ((::AliReducedBaseTrackCut*)p);
   }
   static void deleteArray_AliReducedBaseTrackCut(void *p) {
      delete [] ((::AliReducedBaseTrackCut*)p);
   }
   static void destruct_AliReducedBaseTrackCut(void *p) {
      typedef ::AliReducedBaseTrackCut current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedBaseTrackCut

//______________________________________________________________________________
void AliReducedEventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedEventInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedEventInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedEventInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedEventInfo(void *p) {
      return  p ? new(p) ::AliReducedEventInfo : new ::AliReducedEventInfo;
   }
   static void *newArray_AliReducedEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedEventInfo[nElements] : new ::AliReducedEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedEventInfo(void *p) {
      delete ((::AliReducedEventInfo*)p);
   }
   static void deleteArray_AliReducedEventInfo(void *p) {
      delete [] ((::AliReducedEventInfo*)p);
   }
   static void destruct_AliReducedEventInfo(void *p) {
      typedef ::AliReducedEventInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedEventInfo

//______________________________________________________________________________
void AliReducedTrackInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class AliReducedTrackInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AliReducedTrackInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(AliReducedTrackInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AliReducedTrackInfo(void *p) {
      return  p ? new(p) ::AliReducedTrackInfo : new ::AliReducedTrackInfo;
   }
   static void *newArray_AliReducedTrackInfo(Long_t nElements, void *p) {
      return p ? new(p) ::AliReducedTrackInfo[nElements] : new ::AliReducedTrackInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_AliReducedTrackInfo(void *p) {
      delete ((::AliReducedTrackInfo*)p);
   }
   static void deleteArray_AliReducedTrackInfo(void *p) {
      delete [] ((::AliReducedTrackInfo*)p);
   }
   static void destruct_AliReducedTrackInfo(void *p) {
      typedef ::AliReducedTrackInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::AliReducedTrackInfo

namespace {
  void TriggerDictionaryInitialization_libALICEReducedEvent_Impl() {
    static const char* headers[] = {
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseEvent.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedCaloClusterInfo.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventPlaneInfo.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedPairInfo.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrack.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventCut.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedFMDInfo.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackCut.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarManager.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrackCut.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventInfo.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedInfoCut.h",
"/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackInfo.h",
0
    };
    static const char* includePaths[] = {
"/Users/lukas/bin/root/include",
"/Users/lukas/bin/root/include",
"/Users/lukas/phd/analysis/flow-analysis/cmake-build-debug/Interface/ALICEReducedEvent/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libALICEReducedEvent dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseEvent.h")))  AliReducedBaseEvent;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedCaloClusterInfo.h")))  AliReducedCaloClusterInfo;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventPlaneInfo.h")))  AliReducedEventPlaneInfo;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedPairInfo.h")))  AliReducedBaseTrack;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedPairInfo.h")))  AliReducedPairInfo;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h")))  AliReducedInfoCut;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h")))  AliReducedFMDInfo;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h")))  AliReducedVarManager;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h")))  AliReducedVarCut;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventCut.h")))  AliReducedEventCut;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackCut.h")))  AliReducedTrackCut;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrackCut.h")))  AliReducedBaseTrackCut;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventInfo.h")))  AliReducedEventInfo;
class __attribute__((annotate("$clingAutoload$/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackInfo.h")))  AliReducedTrackInfo;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libALICEReducedEvent dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseEvent.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedCaloClusterInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventPlaneInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedPairInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrack.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedFMDInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedVarManager.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedBaseTrackCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedEventInfo.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedInfoCut.h"
#include "/Users/lukas/phd/analysis/flow-analysis/Interface/ALICEReducedEvent/AliReducedTrackInfo.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"AliReducedBaseEvent", payloadCode, "@",
"AliReducedBaseTrack", payloadCode, "@",
"AliReducedBaseTrackCut", payloadCode, "@",
"AliReducedCaloClusterInfo", payloadCode, "@",
"AliReducedEventCut", payloadCode, "@",
"AliReducedEventInfo", payloadCode, "@",
"AliReducedEventPlaneInfo", payloadCode, "@",
"AliReducedFMDInfo", payloadCode, "@",
"AliReducedInfoCut", payloadCode, "@",
"AliReducedPairInfo", payloadCode, "@",
"AliReducedTrackCut", payloadCode, "@",
"AliReducedTrackInfo", payloadCode, "@",
"AliReducedVarCut", payloadCode, "@",
"AliReducedVarManager", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libALICEReducedEvent",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libALICEReducedEvent_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libALICEReducedEvent_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libALICEReducedEvent() {
  TriggerDictionaryInitialization_libALICEReducedEvent_Impl();
}
