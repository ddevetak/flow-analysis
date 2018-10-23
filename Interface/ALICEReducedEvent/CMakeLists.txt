cmake_minimum_required(VERSION 3.8)
cmake_policy(SET CMP0048 NEW)
project(ALICEReducedEvent)
set(CMAKE_MACOSX_RPATH 1)

find_package(ROOT REQUIRED)
include(${ROOT_USE_FILE})

set(REDUCEDEVENT_SOURCES AliReducedBaseEvent.cpp
        AliReducedCaloClusterInfo.cpp
        AliReducedEventPlaneInfo.cpp
        AliReducedPairInfo.cpp
        AliReducedVarCut.cpp
        AliReducedBaseTrack.cpp
        AliReducedEventCut.cpp
        AliReducedFMDInfo.cpp
        AliReducedTrackCut.cpp
        AliReducedVarManager.cpp
        AliReducedBaseTrackCut.cpp
        AliReducedEventInfo.cpp
        AliReducedInfoCut.cpp
        AliReducedTrackInfo.cpp)

string(REPLACE ".cpp" ".h" REDUCEDEVENT_HEADERS "${REDUCEDEVENT_SOURCES}")

ROOT_GENERATE_DICTIONARY(G__ALICEReducedEvent ${REDUCEDEVENT_HEADERS} LINKDEF ReducedEventLinkDef.h)
add_library(${PROJECT_NAME} SHARED ${REDUCEDEVENT_SOURCES} G__ALICEReducedEvent)
target_compile_definitions(${PROJECT_NAME} PUBLIC "-DUSE_ROOT")
target_include_directories(${PROJECT_NAME} PRIVATE ${ROOT_INCLUDE_DIRS})
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
target_link_libraries(${PROJECT_NAME} ${ROOT_LIBRARIES})
