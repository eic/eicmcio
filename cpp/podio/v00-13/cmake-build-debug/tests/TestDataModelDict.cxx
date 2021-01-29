// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TestDataModelDict
#define R__NO_DEPRECATION

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

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/EventInfo.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/EventInfoCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/EventInfoConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/EventInfoData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/EventInfoObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleCluster.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleClusterCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleClusterConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleClusterData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleClusterObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency1.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency1Collection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency1Const.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency1Data.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency1Obj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency2.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency2Collection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency2Const.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency2Data.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleForCyclicDependency2Obj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleHit.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleHitCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleHitConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleHitData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleHitObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleMC.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleMCCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleMCConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleMCData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleMCObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleReferencingType.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleReferencingTypeCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleReferencingTypeConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleReferencingTypeData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleReferencingTypeObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithARelation.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithARelationCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithARelationConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithARelationData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithARelationObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithArray.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithArrayCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithArrayConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithArrayData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithArrayObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithComponent.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithComponentCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithComponentConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithComponentData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithComponentObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithNamespace.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithNamespaceCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithNamespaceConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithNamespaceData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithNamespaceObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithOneRelation.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithOneRelationCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithOneRelationConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithOneRelationData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithOneRelationObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithString.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithStringCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithStringConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithStringData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithStringObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithVectorMember.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithVectorMemberCollection.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithVectorMemberConst.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithVectorMemberData.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/ExampleWithVectorMemberObj.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/NamespaceInNamespaceStruct.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/NamespaceStruct.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/NotSoSimpleStruct.h"
#include "/home/romanov/eic/soft/podio/src/v00-13/tests/datamodel/SimpleStruct.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *EventInfoData_Dictionary();
   static void EventInfoData_TClassManip(TClass*);
   static void *new_EventInfoData(void *p = 0);
   static void *newArray_EventInfoData(Long_t size, void *p);
   static void delete_EventInfoData(void *p);
   static void deleteArray_EventInfoData(void *p);
   static void destruct_EventInfoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoData*)
   {
      ::EventInfoData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoData));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoData", "datamodel/EventInfoData.h", 13,
                  typeid(::EventInfoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoData_Dictionary, isa_proxy, 4,
                  sizeof(::EventInfoData) );
      instance.SetNew(&new_EventInfoData);
      instance.SetNewArray(&newArray_EventInfoData);
      instance.SetDelete(&delete_EventInfoData);
      instance.SetDeleteArray(&deleteArray_EventInfoData);
      instance.SetDestructor(&destruct_EventInfoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoData*)
   {
      return GenerateInitInstanceLocal((::EventInfoData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EventInfoData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EventInfoData*)0x0)->GetClass();
      EventInfoData_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoObj_Dictionary();
   static void EventInfoObj_TClassManip(TClass*);
   static void *new_EventInfoObj(void *p = 0);
   static void *newArray_EventInfoObj(Long_t size, void *p);
   static void delete_EventInfoObj(void *p);
   static void deleteArray_EventInfoObj(void *p);
   static void destruct_EventInfoObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoObj*)
   {
      ::EventInfoObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoObj));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoObj", "datamodel/EventInfoObj.h", 17,
                  typeid(::EventInfoObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoObj_Dictionary, isa_proxy, 4,
                  sizeof(::EventInfoObj) );
      instance.SetNew(&new_EventInfoObj);
      instance.SetNewArray(&newArray_EventInfoObj);
      instance.SetDelete(&delete_EventInfoObj);
      instance.SetDeleteArray(&deleteArray_EventInfoObj);
      instance.SetDestructor(&destruct_EventInfoObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoObj*)
   {
      return GenerateInitInstanceLocal((::EventInfoObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EventInfoObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EventInfoObj*)0x0)->GetClass();
      EventInfoObj_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstEventInfo_Dictionary();
   static void ConstEventInfo_TClassManip(TClass*);
   static void *new_ConstEventInfo(void *p = 0);
   static void *newArray_ConstEventInfo(Long_t size, void *p);
   static void delete_ConstEventInfo(void *p);
   static void deleteArray_ConstEventInfo(void *p);
   static void destruct_ConstEventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstEventInfo*)
   {
      ::ConstEventInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstEventInfo));
      static ::ROOT::TGenericClassInfo 
         instance("ConstEventInfo", "datamodel/EventInfoConst.h", 22,
                  typeid(::ConstEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstEventInfo_Dictionary, isa_proxy, 4,
                  sizeof(::ConstEventInfo) );
      instance.SetNew(&new_ConstEventInfo);
      instance.SetNewArray(&newArray_ConstEventInfo);
      instance.SetDelete(&delete_ConstEventInfo);
      instance.SetDeleteArray(&deleteArray_ConstEventInfo);
      instance.SetDestructor(&destruct_ConstEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstEventInfo*)
   {
      return GenerateInitInstanceLocal((::ConstEventInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstEventInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstEventInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstEventInfo*)0x0)->GetClass();
      ConstEventInfo_TClassManip(theClass);
   return theClass;
   }

   static void ConstEventInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfo_Dictionary();
   static void EventInfo_TClassManip(TClass*);
   static void *new_EventInfo(void *p = 0);
   static void *newArray_EventInfo(Long_t size, void *p);
   static void delete_EventInfo(void *p);
   static void deleteArray_EventInfo(void *p);
   static void destruct_EventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfo*)
   {
      ::EventInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfo));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfo", "", 26,
                  typeid(::EventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfo_Dictionary, isa_proxy, 4,
                  sizeof(::EventInfo) );
      instance.SetNew(&new_EventInfo);
      instance.SetNewArray(&newArray_EventInfo);
      instance.SetDelete(&delete_EventInfo);
      instance.SetDeleteArray(&deleteArray_EventInfo);
      instance.SetDestructor(&destruct_EventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfo*)
   {
      return GenerateInitInstanceLocal((::EventInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EventInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)0x0)->GetClass();
      EventInfo_TClassManip(theClass);
   return theClass;
   }

   static void EventInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoCollection_Dictionary();
   static void EventInfoCollection_TClassManip(TClass*);
   static void *new_EventInfoCollection(void *p = 0);
   static void *newArray_EventInfoCollection(Long_t size, void *p);
   static void delete_EventInfoCollection(void *p);
   static void deleteArray_EventInfoCollection(void *p);
   static void destruct_EventInfoCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoCollection*)
   {
      ::EventInfoCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoCollection));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoCollection", "", 146,
                  typeid(::EventInfoCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoCollection_Dictionary, isa_proxy, 4,
                  sizeof(::EventInfoCollection) );
      instance.SetNew(&new_EventInfoCollection);
      instance.SetNewArray(&newArray_EventInfoCollection);
      instance.SetDelete(&delete_EventInfoCollection);
      instance.SetDeleteArray(&deleteArray_EventInfoCollection);
      instance.SetDestructor(&destruct_EventInfoCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoCollection*)
   {
      return GenerateInitInstanceLocal((::EventInfoCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EventInfoCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::EventInfoCollection*)0x0)->GetClass();
      EventInfoCollection_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleClusterData_Dictionary();
   static void ExampleClusterData_TClassManip(TClass*);
   static void *new_ExampleClusterData(void *p = 0);
   static void *newArray_ExampleClusterData(Long_t size, void *p);
   static void delete_ExampleClusterData(void *p);
   static void deleteArray_ExampleClusterData(void *p);
   static void destruct_ExampleClusterData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleClusterData*)
   {
      ::ExampleClusterData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleClusterData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleClusterData", "datamodel/ExampleClusterData.h", 13,
                  typeid(::ExampleClusterData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleClusterData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleClusterData) );
      instance.SetNew(&new_ExampleClusterData);
      instance.SetNewArray(&newArray_ExampleClusterData);
      instance.SetDelete(&delete_ExampleClusterData);
      instance.SetDeleteArray(&deleteArray_ExampleClusterData);
      instance.SetDestructor(&destruct_ExampleClusterData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleClusterData*)
   {
      return GenerateInitInstanceLocal((::ExampleClusterData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleClusterData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleClusterData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleClusterData*)0x0)->GetClass();
      ExampleClusterData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleClusterData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitData_Dictionary();
   static void ExampleHitData_TClassManip(TClass*);
   static void *new_ExampleHitData(void *p = 0);
   static void *newArray_ExampleHitData(Long_t size, void *p);
   static void delete_ExampleHitData(void *p);
   static void deleteArray_ExampleHitData(void *p);
   static void destruct_ExampleHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitData*)
   {
      ::ExampleHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitData", "datamodel/ExampleHitData.h", 13,
                  typeid(::ExampleHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitData) );
      instance.SetNew(&new_ExampleHitData);
      instance.SetNewArray(&newArray_ExampleHitData);
      instance.SetDelete(&delete_ExampleHitData);
      instance.SetDeleteArray(&deleteArray_ExampleHitData);
      instance.SetDestructor(&destruct_ExampleHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitData*)
   {
      return GenerateInitInstanceLocal((::ExampleHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleHitData*)0x0)->GetClass();
      ExampleHitData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitObj_Dictionary();
   static void ExampleHitObj_TClassManip(TClass*);
   static void *new_ExampleHitObj(void *p = 0);
   static void *newArray_ExampleHitObj(Long_t size, void *p);
   static void delete_ExampleHitObj(void *p);
   static void deleteArray_ExampleHitObj(void *p);
   static void destruct_ExampleHitObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitObj*)
   {
      ::ExampleHitObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitObj", "datamodel/ExampleHitObj.h", 17,
                  typeid(::ExampleHitObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitObj) );
      instance.SetNew(&new_ExampleHitObj);
      instance.SetNewArray(&newArray_ExampleHitObj);
      instance.SetDelete(&delete_ExampleHitObj);
      instance.SetDeleteArray(&deleteArray_ExampleHitObj);
      instance.SetDestructor(&destruct_ExampleHitObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitObj*)
   {
      return GenerateInitInstanceLocal((::ExampleHitObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleHitObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleHitObj*)0x0)->GetClass();
      ExampleHitObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleHit_Dictionary();
   static void ConstExampleHit_TClassManip(TClass*);
   static void *new_ConstExampleHit(void *p = 0);
   static void *newArray_ConstExampleHit(Long_t size, void *p);
   static void delete_ConstExampleHit(void *p);
   static void deleteArray_ConstExampleHit(void *p);
   static void destruct_ConstExampleHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleHit*)
   {
      ::ConstExampleHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleHit));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleHit", "datamodel/ExampleHitConst.h", 22,
                  typeid(::ConstExampleHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleHit_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleHit) );
      instance.SetNew(&new_ConstExampleHit);
      instance.SetNewArray(&newArray_ConstExampleHit);
      instance.SetDelete(&delete_ConstExampleHit);
      instance.SetDeleteArray(&deleteArray_ConstExampleHit);
      instance.SetDestructor(&destruct_ConstExampleHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleHit*)
   {
      return GenerateInitInstanceLocal((::ConstExampleHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleHit*)0x0)->GetClass();
      ConstExampleHit_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHit_Dictionary();
   static void ExampleHit_TClassManip(TClass*);
   static void *new_ExampleHit(void *p = 0);
   static void *newArray_ExampleHit(Long_t size, void *p);
   static void delete_ExampleHit(void *p);
   static void deleteArray_ExampleHit(void *p);
   static void destruct_ExampleHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHit*)
   {
      ::ExampleHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHit));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHit", "datamodel/ExampleHit.h", 24,
                  typeid(::ExampleHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHit_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHit) );
      instance.SetNew(&new_ExampleHit);
      instance.SetNewArray(&newArray_ExampleHit);
      instance.SetDelete(&delete_ExampleHit);
      instance.SetDeleteArray(&deleteArray_ExampleHit);
      instance.SetDestructor(&destruct_ExampleHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHit*)
   {
      return GenerateInitInstanceLocal((::ExampleHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleHit*)0x0)->GetClass();
      ExampleHit_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleClusterObj_Dictionary();
   static void ExampleClusterObj_TClassManip(TClass*);
   static void *new_ExampleClusterObj(void *p = 0);
   static void *newArray_ExampleClusterObj(Long_t size, void *p);
   static void delete_ExampleClusterObj(void *p);
   static void deleteArray_ExampleClusterObj(void *p);
   static void destruct_ExampleClusterObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleClusterObj*)
   {
      ::ExampleClusterObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleClusterObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleClusterObj", "datamodel/ExampleClusterObj.h", 20,
                  typeid(::ExampleClusterObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleClusterObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleClusterObj) );
      instance.SetNew(&new_ExampleClusterObj);
      instance.SetNewArray(&newArray_ExampleClusterObj);
      instance.SetDelete(&delete_ExampleClusterObj);
      instance.SetDeleteArray(&deleteArray_ExampleClusterObj);
      instance.SetDestructor(&destruct_ExampleClusterObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleClusterObj*)
   {
      return GenerateInitInstanceLocal((::ExampleClusterObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleClusterObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleClusterObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleClusterObj*)0x0)->GetClass();
      ExampleClusterObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleClusterObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleCluster_Dictionary();
   static void ConstExampleCluster_TClassManip(TClass*);
   static void *new_ConstExampleCluster(void *p = 0);
   static void *newArray_ConstExampleCluster(Long_t size, void *p);
   static void delete_ConstExampleCluster(void *p);
   static void deleteArray_ConstExampleCluster(void *p);
   static void destruct_ConstExampleCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleCluster*)
   {
      ::ConstExampleCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleCluster));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleCluster", "datamodel/ExampleClusterConst.h", 25,
                  typeid(::ConstExampleCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleCluster_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleCluster) );
      instance.SetNew(&new_ConstExampleCluster);
      instance.SetNewArray(&newArray_ConstExampleCluster);
      instance.SetDelete(&delete_ConstExampleCluster);
      instance.SetDeleteArray(&deleteArray_ConstExampleCluster);
      instance.SetDestructor(&destruct_ConstExampleCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleCluster*)
   {
      return GenerateInitInstanceLocal((::ConstExampleCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleCluster*)0x0)->GetClass();
      ConstExampleCluster_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleCluster_Dictionary();
   static void ExampleCluster_TClassManip(TClass*);
   static void *new_ExampleCluster(void *p = 0);
   static void *newArray_ExampleCluster(Long_t size, void *p);
   static void delete_ExampleCluster(void *p);
   static void deleteArray_ExampleCluster(void *p);
   static void destruct_ExampleCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleCluster*)
   {
      ::ExampleCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleCluster));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleCluster", "", 433,
                  typeid(::ExampleCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleCluster_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleCluster) );
      instance.SetNew(&new_ExampleCluster);
      instance.SetNewArray(&newArray_ExampleCluster);
      instance.SetDelete(&delete_ExampleCluster);
      instance.SetDeleteArray(&deleteArray_ExampleCluster);
      instance.SetDestructor(&destruct_ExampleCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleCluster*)
   {
      return GenerateInitInstanceLocal((::ExampleCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleCluster*)0x0)->GetClass();
      ExampleCluster_TClassManip(theClass);
   return theClass;
   }

   static void ExampleCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleClusterCollection_Dictionary();
   static void ExampleClusterCollection_TClassManip(TClass*);
   static void *new_ExampleClusterCollection(void *p = 0);
   static void *newArray_ExampleClusterCollection(Long_t size, void *p);
   static void delete_ExampleClusterCollection(void *p);
   static void deleteArray_ExampleClusterCollection(void *p);
   static void destruct_ExampleClusterCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleClusterCollection*)
   {
      ::ExampleClusterCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleClusterCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleClusterCollection", "", 563,
                  typeid(::ExampleClusterCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleClusterCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleClusterCollection) );
      instance.SetNew(&new_ExampleClusterCollection);
      instance.SetNewArray(&newArray_ExampleClusterCollection);
      instance.SetDelete(&delete_ExampleClusterCollection);
      instance.SetDeleteArray(&deleteArray_ExampleClusterCollection);
      instance.SetDestructor(&destruct_ExampleClusterCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleClusterCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleClusterCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleClusterCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleClusterCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleClusterCollection*)0x0)->GetClass();
      ExampleClusterCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleClusterCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1Data_Dictionary();
   static void ExampleForCyclicDependency1Data_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1Data(void *p = 0);
   static void *newArray_ExampleForCyclicDependency1Data(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1Data(void *p);
   static void deleteArray_ExampleForCyclicDependency1Data(void *p);
   static void destruct_ExampleForCyclicDependency1Data(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1Data*)
   {
      ::ExampleForCyclicDependency1Data *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1Data));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1Data", "datamodel/ExampleForCyclicDependency1Data.h", 13,
                  typeid(::ExampleForCyclicDependency1Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1Data_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency1Data) );
      instance.SetNew(&new_ExampleForCyclicDependency1Data);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1Data);
      instance.SetDelete(&delete_ExampleForCyclicDependency1Data);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1Data);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1Data);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1Data*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency1Data*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Data*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1Data_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Data*)0x0)->GetClass();
      ExampleForCyclicDependency1Data_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1Data_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1Obj_Dictionary();
   static void ExampleForCyclicDependency1Obj_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1Obj(void *p = 0);
   static void *newArray_ExampleForCyclicDependency1Obj(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1Obj(void *p);
   static void deleteArray_ExampleForCyclicDependency1Obj(void *p);
   static void destruct_ExampleForCyclicDependency1Obj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1Obj*)
   {
      ::ExampleForCyclicDependency1Obj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1Obj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1Obj", "datamodel/ExampleForCyclicDependency1Obj.h", 19,
                  typeid(::ExampleForCyclicDependency1Obj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1Obj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency1Obj) );
      instance.SetNew(&new_ExampleForCyclicDependency1Obj);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1Obj);
      instance.SetDelete(&delete_ExampleForCyclicDependency1Obj);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1Obj);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1Obj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1Obj*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency1Obj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Obj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1Obj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Obj*)0x0)->GetClass();
      ExampleForCyclicDependency1Obj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1Obj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleForCyclicDependency1_Dictionary();
   static void ConstExampleForCyclicDependency1_TClassManip(TClass*);
   static void *new_ConstExampleForCyclicDependency1(void *p = 0);
   static void *newArray_ConstExampleForCyclicDependency1(Long_t size, void *p);
   static void delete_ConstExampleForCyclicDependency1(void *p);
   static void deleteArray_ConstExampleForCyclicDependency1(void *p);
   static void destruct_ConstExampleForCyclicDependency1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleForCyclicDependency1*)
   {
      ::ConstExampleForCyclicDependency1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleForCyclicDependency1));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleForCyclicDependency1", "datamodel/ExampleForCyclicDependency1Const.h", 25,
                  typeid(::ConstExampleForCyclicDependency1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleForCyclicDependency1_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleForCyclicDependency1) );
      instance.SetNew(&new_ConstExampleForCyclicDependency1);
      instance.SetNewArray(&newArray_ConstExampleForCyclicDependency1);
      instance.SetDelete(&delete_ConstExampleForCyclicDependency1);
      instance.SetDeleteArray(&deleteArray_ConstExampleForCyclicDependency1);
      instance.SetDestructor(&destruct_ConstExampleForCyclicDependency1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleForCyclicDependency1*)
   {
      return GenerateInitInstanceLocal((::ConstExampleForCyclicDependency1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleForCyclicDependency1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleForCyclicDependency1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleForCyclicDependency1*)0x0)->GetClass();
      ConstExampleForCyclicDependency1_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleForCyclicDependency1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1_Dictionary();
   static void ExampleForCyclicDependency1_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1(void *p = 0);
   static void *newArray_ExampleForCyclicDependency1(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1(void *p);
   static void deleteArray_ExampleForCyclicDependency1(void *p);
   static void destruct_ExampleForCyclicDependency1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1*)
   {
      ::ExampleForCyclicDependency1 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1", "", 875,
                  typeid(::ExampleForCyclicDependency1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency1) );
      instance.SetNew(&new_ExampleForCyclicDependency1);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1);
      instance.SetDelete(&delete_ExampleForCyclicDependency1);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency1*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1*)0x0)->GetClass();
      ExampleForCyclicDependency1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1Collection_Dictionary();
   static void ExampleForCyclicDependency1Collection_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1Collection(void *p = 0);
   static void *newArray_ExampleForCyclicDependency1Collection(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1Collection(void *p);
   static void deleteArray_ExampleForCyclicDependency1Collection(void *p);
   static void destruct_ExampleForCyclicDependency1Collection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1Collection*)
   {
      ::ExampleForCyclicDependency1Collection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1Collection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1Collection", "", 990,
                  typeid(::ExampleForCyclicDependency1Collection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1Collection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency1Collection) );
      instance.SetNew(&new_ExampleForCyclicDependency1Collection);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1Collection);
      instance.SetDelete(&delete_ExampleForCyclicDependency1Collection);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1Collection);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1Collection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1Collection*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency1Collection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Collection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1Collection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency1Collection*)0x0)->GetClass();
      ExampleForCyclicDependency1Collection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1Collection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2Data_Dictionary();
   static void ExampleForCyclicDependency2Data_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2Data(void *p = 0);
   static void *newArray_ExampleForCyclicDependency2Data(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2Data(void *p);
   static void deleteArray_ExampleForCyclicDependency2Data(void *p);
   static void destruct_ExampleForCyclicDependency2Data(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2Data*)
   {
      ::ExampleForCyclicDependency2Data *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2Data));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2Data", "datamodel/ExampleForCyclicDependency2Data.h", 13,
                  typeid(::ExampleForCyclicDependency2Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2Data_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency2Data) );
      instance.SetNew(&new_ExampleForCyclicDependency2Data);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2Data);
      instance.SetDelete(&delete_ExampleForCyclicDependency2Data);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2Data);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2Data);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2Data*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency2Data*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Data*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2Data_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Data*)0x0)->GetClass();
      ExampleForCyclicDependency2Data_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2Data_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2Obj_Dictionary();
   static void ExampleForCyclicDependency2Obj_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2Obj(void *p = 0);
   static void *newArray_ExampleForCyclicDependency2Obj(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2Obj(void *p);
   static void deleteArray_ExampleForCyclicDependency2Obj(void *p);
   static void destruct_ExampleForCyclicDependency2Obj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2Obj*)
   {
      ::ExampleForCyclicDependency2Obj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2Obj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2Obj", "datamodel/ExampleForCyclicDependency2Obj.h", 19,
                  typeid(::ExampleForCyclicDependency2Obj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2Obj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency2Obj) );
      instance.SetNew(&new_ExampleForCyclicDependency2Obj);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2Obj);
      instance.SetDelete(&delete_ExampleForCyclicDependency2Obj);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2Obj);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2Obj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2Obj*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency2Obj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Obj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2Obj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Obj*)0x0)->GetClass();
      ExampleForCyclicDependency2Obj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2Obj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleForCyclicDependency2_Dictionary();
   static void ConstExampleForCyclicDependency2_TClassManip(TClass*);
   static void *new_ConstExampleForCyclicDependency2(void *p = 0);
   static void *newArray_ConstExampleForCyclicDependency2(Long_t size, void *p);
   static void delete_ConstExampleForCyclicDependency2(void *p);
   static void deleteArray_ConstExampleForCyclicDependency2(void *p);
   static void destruct_ConstExampleForCyclicDependency2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleForCyclicDependency2*)
   {
      ::ConstExampleForCyclicDependency2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleForCyclicDependency2));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleForCyclicDependency2", "datamodel/ExampleForCyclicDependency2Const.h", 25,
                  typeid(::ConstExampleForCyclicDependency2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleForCyclicDependency2_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleForCyclicDependency2) );
      instance.SetNew(&new_ConstExampleForCyclicDependency2);
      instance.SetNewArray(&newArray_ConstExampleForCyclicDependency2);
      instance.SetDelete(&delete_ConstExampleForCyclicDependency2);
      instance.SetDeleteArray(&deleteArray_ConstExampleForCyclicDependency2);
      instance.SetDestructor(&destruct_ConstExampleForCyclicDependency2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleForCyclicDependency2*)
   {
      return GenerateInitInstanceLocal((::ConstExampleForCyclicDependency2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleForCyclicDependency2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleForCyclicDependency2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleForCyclicDependency2*)0x0)->GetClass();
      ConstExampleForCyclicDependency2_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleForCyclicDependency2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2_Dictionary();
   static void ExampleForCyclicDependency2_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2(void *p = 0);
   static void *newArray_ExampleForCyclicDependency2(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2(void *p);
   static void deleteArray_ExampleForCyclicDependency2(void *p);
   static void destruct_ExampleForCyclicDependency2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2*)
   {
      ::ExampleForCyclicDependency2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2", "", 1268,
                  typeid(::ExampleForCyclicDependency2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency2) );
      instance.SetNew(&new_ExampleForCyclicDependency2);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2);
      instance.SetDelete(&delete_ExampleForCyclicDependency2);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2*)0x0)->GetClass();
      ExampleForCyclicDependency2_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2Collection_Dictionary();
   static void ExampleForCyclicDependency2Collection_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2Collection(void *p = 0);
   static void *newArray_ExampleForCyclicDependency2Collection(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2Collection(void *p);
   static void deleteArray_ExampleForCyclicDependency2Collection(void *p);
   static void destruct_ExampleForCyclicDependency2Collection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2Collection*)
   {
      ::ExampleForCyclicDependency2Collection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2Collection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2Collection", "", 1383,
                  typeid(::ExampleForCyclicDependency2Collection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2Collection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleForCyclicDependency2Collection) );
      instance.SetNew(&new_ExampleForCyclicDependency2Collection);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2Collection);
      instance.SetDelete(&delete_ExampleForCyclicDependency2Collection);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2Collection);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2Collection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2Collection*)
   {
      return GenerateInitInstanceLocal((::ExampleForCyclicDependency2Collection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Collection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2Collection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleForCyclicDependency2Collection*)0x0)->GetClass();
      ExampleForCyclicDependency2Collection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2Collection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitCollection_Dictionary();
   static void ExampleHitCollection_TClassManip(TClass*);
   static void *new_ExampleHitCollection(void *p = 0);
   static void *newArray_ExampleHitCollection(Long_t size, void *p);
   static void delete_ExampleHitCollection(void *p);
   static void deleteArray_ExampleHitCollection(void *p);
   static void destruct_ExampleHitCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitCollection*)
   {
      ::ExampleHitCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitCollection", "", 1800,
                  typeid(::ExampleHitCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleHitCollection) );
      instance.SetNew(&new_ExampleHitCollection);
      instance.SetNewArray(&newArray_ExampleHitCollection);
      instance.SetDelete(&delete_ExampleHitCollection);
      instance.SetDeleteArray(&deleteArray_ExampleHitCollection);
      instance.SetDestructor(&destruct_ExampleHitCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleHitCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleHitCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleHitCollection*)0x0)->GetClass();
      ExampleHitCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMCData_Dictionary();
   static void ExampleMCData_TClassManip(TClass*);
   static void *new_ExampleMCData(void *p = 0);
   static void *newArray_ExampleMCData(Long_t size, void *p);
   static void delete_ExampleMCData(void *p);
   static void deleteArray_ExampleMCData(void *p);
   static void destruct_ExampleMCData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMCData*)
   {
      ::ExampleMCData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMCData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMCData", "datamodel/ExampleMCData.h", 13,
                  typeid(::ExampleMCData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMCData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleMCData) );
      instance.SetNew(&new_ExampleMCData);
      instance.SetNewArray(&newArray_ExampleMCData);
      instance.SetDelete(&delete_ExampleMCData);
      instance.SetDeleteArray(&deleteArray_ExampleMCData);
      instance.SetDestructor(&destruct_ExampleMCData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMCData*)
   {
      return GenerateInitInstanceLocal((::ExampleMCData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleMCData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMCData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleMCData*)0x0)->GetClass();
      ExampleMCData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMCData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMCObj_Dictionary();
   static void ExampleMCObj_TClassManip(TClass*);
   static void *new_ExampleMCObj(void *p = 0);
   static void *newArray_ExampleMCObj(Long_t size, void *p);
   static void delete_ExampleMCObj(void *p);
   static void deleteArray_ExampleMCObj(void *p);
   static void destruct_ExampleMCObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMCObj*)
   {
      ::ExampleMCObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMCObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMCObj", "datamodel/ExampleMCObj.h", 19,
                  typeid(::ExampleMCObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMCObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleMCObj) );
      instance.SetNew(&new_ExampleMCObj);
      instance.SetNewArray(&newArray_ExampleMCObj);
      instance.SetDelete(&delete_ExampleMCObj);
      instance.SetDeleteArray(&deleteArray_ExampleMCObj);
      instance.SetDestructor(&destruct_ExampleMCObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMCObj*)
   {
      return GenerateInitInstanceLocal((::ExampleMCObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleMCObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMCObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleMCObj*)0x0)->GetClass();
      ExampleMCObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMCObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleMC_Dictionary();
   static void ConstExampleMC_TClassManip(TClass*);
   static void *new_ConstExampleMC(void *p = 0);
   static void *newArray_ConstExampleMC(Long_t size, void *p);
   static void delete_ConstExampleMC(void *p);
   static void deleteArray_ConstExampleMC(void *p);
   static void destruct_ConstExampleMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleMC*)
   {
      ::ConstExampleMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleMC));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleMC", "datamodel/ExampleMCConst.h", 24,
                  typeid(::ConstExampleMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleMC_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleMC) );
      instance.SetNew(&new_ConstExampleMC);
      instance.SetNewArray(&newArray_ConstExampleMC);
      instance.SetDelete(&delete_ConstExampleMC);
      instance.SetDeleteArray(&deleteArray_ConstExampleMC);
      instance.SetDestructor(&destruct_ConstExampleMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleMC*)
   {
      return GenerateInitInstanceLocal((::ConstExampleMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleMC*)0x0)->GetClass();
      ConstExampleMC_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMC_Dictionary();
   static void ExampleMC_TClassManip(TClass*);
   static void *new_ExampleMC(void *p = 0);
   static void *newArray_ExampleMC(Long_t size, void *p);
   static void delete_ExampleMC(void *p);
   static void deleteArray_ExampleMC(void *p);
   static void destruct_ExampleMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMC*)
   {
      ::ExampleMC *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMC));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMC", "", 2149,
                  typeid(::ExampleMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMC_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleMC) );
      instance.SetNew(&new_ExampleMC);
      instance.SetNewArray(&newArray_ExampleMC);
      instance.SetDelete(&delete_ExampleMC);
      instance.SetDeleteArray(&deleteArray_ExampleMC);
      instance.SetDestructor(&destruct_ExampleMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMC*)
   {
      return GenerateInitInstanceLocal((::ExampleMC*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleMC*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleMC*)0x0)->GetClass();
      ExampleMC_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMCCollection_Dictionary();
   static void ExampleMCCollection_TClassManip(TClass*);
   static void *new_ExampleMCCollection(void *p = 0);
   static void *newArray_ExampleMCCollection(Long_t size, void *p);
   static void delete_ExampleMCCollection(void *p);
   static void deleteArray_ExampleMCCollection(void *p);
   static void destruct_ExampleMCCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMCCollection*)
   {
      ::ExampleMCCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMCCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMCCollection", "", 2285,
                  typeid(::ExampleMCCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMCCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleMCCollection) );
      instance.SetNew(&new_ExampleMCCollection);
      instance.SetNewArray(&newArray_ExampleMCCollection);
      instance.SetDelete(&delete_ExampleMCCollection);
      instance.SetDeleteArray(&deleteArray_ExampleMCCollection);
      instance.SetDestructor(&destruct_ExampleMCCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMCCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleMCCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleMCCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMCCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleMCCollection*)0x0)->GetClass();
      ExampleMCCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMCCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingTypeData_Dictionary();
   static void ExampleReferencingTypeData_TClassManip(TClass*);
   static void *new_ExampleReferencingTypeData(void *p = 0);
   static void *newArray_ExampleReferencingTypeData(Long_t size, void *p);
   static void delete_ExampleReferencingTypeData(void *p);
   static void deleteArray_ExampleReferencingTypeData(void *p);
   static void destruct_ExampleReferencingTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingTypeData*)
   {
      ::ExampleReferencingTypeData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingTypeData", "datamodel/ExampleReferencingTypeData.h", 13,
                  typeid(::ExampleReferencingTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingTypeData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleReferencingTypeData) );
      instance.SetNew(&new_ExampleReferencingTypeData);
      instance.SetNewArray(&newArray_ExampleReferencingTypeData);
      instance.SetDelete(&delete_ExampleReferencingTypeData);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingTypeData);
      instance.SetDestructor(&destruct_ExampleReferencingTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingTypeData*)
   {
      return GenerateInitInstanceLocal((::ExampleReferencingTypeData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleReferencingTypeData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleReferencingTypeData*)0x0)->GetClass();
      ExampleReferencingTypeData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingTypeObj_Dictionary();
   static void ExampleReferencingTypeObj_TClassManip(TClass*);
   static void *new_ExampleReferencingTypeObj(void *p = 0);
   static void *newArray_ExampleReferencingTypeObj(Long_t size, void *p);
   static void delete_ExampleReferencingTypeObj(void *p);
   static void deleteArray_ExampleReferencingTypeObj(void *p);
   static void destruct_ExampleReferencingTypeObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingTypeObj*)
   {
      ::ExampleReferencingTypeObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingTypeObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingTypeObj", "datamodel/ExampleReferencingTypeObj.h", 20,
                  typeid(::ExampleReferencingTypeObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingTypeObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleReferencingTypeObj) );
      instance.SetNew(&new_ExampleReferencingTypeObj);
      instance.SetNewArray(&newArray_ExampleReferencingTypeObj);
      instance.SetDelete(&delete_ExampleReferencingTypeObj);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingTypeObj);
      instance.SetDestructor(&destruct_ExampleReferencingTypeObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingTypeObj*)
   {
      return GenerateInitInstanceLocal((::ExampleReferencingTypeObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleReferencingTypeObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingTypeObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleReferencingTypeObj*)0x0)->GetClass();
      ExampleReferencingTypeObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingTypeObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleReferencingType_Dictionary();
   static void ConstExampleReferencingType_TClassManip(TClass*);
   static void *new_ConstExampleReferencingType(void *p = 0);
   static void *newArray_ConstExampleReferencingType(Long_t size, void *p);
   static void delete_ConstExampleReferencingType(void *p);
   static void deleteArray_ConstExampleReferencingType(void *p);
   static void destruct_ConstExampleReferencingType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleReferencingType*)
   {
      ::ConstExampleReferencingType *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleReferencingType));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleReferencingType", "datamodel/ExampleReferencingTypeConst.h", 25,
                  typeid(::ConstExampleReferencingType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleReferencingType_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleReferencingType) );
      instance.SetNew(&new_ConstExampleReferencingType);
      instance.SetNewArray(&newArray_ConstExampleReferencingType);
      instance.SetDelete(&delete_ConstExampleReferencingType);
      instance.SetDeleteArray(&deleteArray_ConstExampleReferencingType);
      instance.SetDestructor(&destruct_ConstExampleReferencingType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleReferencingType*)
   {
      return GenerateInitInstanceLocal((::ConstExampleReferencingType*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleReferencingType*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleReferencingType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleReferencingType*)0x0)->GetClass();
      ConstExampleReferencingType_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleReferencingType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingType_Dictionary();
   static void ExampleReferencingType_TClassManip(TClass*);
   static void *new_ExampleReferencingType(void *p = 0);
   static void *newArray_ExampleReferencingType(Long_t size, void *p);
   static void delete_ExampleReferencingType(void *p);
   static void deleteArray_ExampleReferencingType(void *p);
   static void destruct_ExampleReferencingType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingType*)
   {
      ::ExampleReferencingType *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingType));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingType", "", 2611,
                  typeid(::ExampleReferencingType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingType_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleReferencingType) );
      instance.SetNew(&new_ExampleReferencingType);
      instance.SetNewArray(&newArray_ExampleReferencingType);
      instance.SetDelete(&delete_ExampleReferencingType);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingType);
      instance.SetDestructor(&destruct_ExampleReferencingType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingType*)
   {
      return GenerateInitInstanceLocal((::ExampleReferencingType*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleReferencingType*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleReferencingType*)0x0)->GetClass();
      ExampleReferencingType_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingTypeCollection_Dictionary();
   static void ExampleReferencingTypeCollection_TClassManip(TClass*);
   static void *new_ExampleReferencingTypeCollection(void *p = 0);
   static void *newArray_ExampleReferencingTypeCollection(Long_t size, void *p);
   static void delete_ExampleReferencingTypeCollection(void *p);
   static void deleteArray_ExampleReferencingTypeCollection(void *p);
   static void destruct_ExampleReferencingTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingTypeCollection*)
   {
      ::ExampleReferencingTypeCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingTypeCollection", "", 2734,
                  typeid(::ExampleReferencingTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingTypeCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleReferencingTypeCollection) );
      instance.SetNew(&new_ExampleReferencingTypeCollection);
      instance.SetNewArray(&newArray_ExampleReferencingTypeCollection);
      instance.SetDelete(&delete_ExampleReferencingTypeCollection);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingTypeCollection);
      instance.SetDestructor(&destruct_ExampleReferencingTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingTypeCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleReferencingTypeCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleReferencingTypeCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleReferencingTypeCollection*)0x0)->GetClass();
      ExampleReferencingTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelationData_Dictionary();
   static void ex42cLcLExampleWithARelationData_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelationData(void *p = 0);
   static void *newArray_ex42cLcLExampleWithARelationData(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelationData(void *p);
   static void deleteArray_ex42cLcLExampleWithARelationData(void *p);
   static void destruct_ex42cLcLExampleWithARelationData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelationData*)
   {
      ::ex42::ExampleWithARelationData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelationData));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelationData", "datamodel/ExampleWithARelationData.h", 14,
                  typeid(::ex42::ExampleWithARelationData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelationData_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithARelationData) );
      instance.SetNew(&new_ex42cLcLExampleWithARelationData);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelationData);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelationData);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelationData);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelationData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelationData*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithARelationData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelationData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationData*)0x0)->GetClass();
      ex42cLcLExampleWithARelationData_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelationData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex2cLcLNamespaceStruct_Dictionary();
   static void ex2cLcLNamespaceStruct_TClassManip(TClass*);
   static void *new_ex2cLcLNamespaceStruct(void *p = 0);
   static void *newArray_ex2cLcLNamespaceStruct(Long_t size, void *p);
   static void delete_ex2cLcLNamespaceStruct(void *p);
   static void deleteArray_ex2cLcLNamespaceStruct(void *p);
   static void destruct_ex2cLcLNamespaceStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex2::NamespaceStruct*)
   {
      ::ex2::NamespaceStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex2::NamespaceStruct));
      static ::ROOT::TGenericClassInfo 
         instance("ex2::NamespaceStruct", "datamodel/NamespaceStruct.h", 11,
                  typeid(::ex2::NamespaceStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex2cLcLNamespaceStruct_Dictionary, isa_proxy, 4,
                  sizeof(::ex2::NamespaceStruct) );
      instance.SetNew(&new_ex2cLcLNamespaceStruct);
      instance.SetNewArray(&newArray_ex2cLcLNamespaceStruct);
      instance.SetDelete(&delete_ex2cLcLNamespaceStruct);
      instance.SetDeleteArray(&deleteArray_ex2cLcLNamespaceStruct);
      instance.SetDestructor(&destruct_ex2cLcLNamespaceStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex2::NamespaceStruct*)
   {
      return GenerateInitInstanceLocal((::ex2::NamespaceStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex2::NamespaceStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex2cLcLNamespaceStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex2::NamespaceStruct*)0x0)->GetClass();
      ex2cLcLNamespaceStruct_TClassManip(theClass);
   return theClass;
   }

   static void ex2cLcLNamespaceStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespaceData_Dictionary();
   static void ex42cLcLExampleWithNamespaceData_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespaceData(void *p = 0);
   static void *newArray_ex42cLcLExampleWithNamespaceData(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespaceData(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespaceData(void *p);
   static void destruct_ex42cLcLExampleWithNamespaceData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespaceData*)
   {
      ::ex42::ExampleWithNamespaceData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespaceData));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespaceData", "datamodel/ExampleWithNamespaceData.h", 15,
                  typeid(::ex42::ExampleWithNamespaceData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespaceData_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithNamespaceData) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespaceData);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespaceData);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespaceData);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespaceData);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespaceData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespaceData*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithNamespaceData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespaceData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceData*)0x0)->GetClass();
      ex42cLcLExampleWithNamespaceData_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespaceData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespaceObj_Dictionary();
   static void ex42cLcLExampleWithNamespaceObj_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespaceObj(void *p = 0);
   static void *newArray_ex42cLcLExampleWithNamespaceObj(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespaceObj(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespaceObj(void *p);
   static void destruct_ex42cLcLExampleWithNamespaceObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespaceObj*)
   {
      ::ex42::ExampleWithNamespaceObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespaceObj));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespaceObj", "datamodel/ExampleWithNamespaceObj.h", 18,
                  typeid(::ex42::ExampleWithNamespaceObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespaceObj_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithNamespaceObj) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespaceObj);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespaceObj);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespaceObj);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespaceObj);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespaceObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespaceObj*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithNamespaceObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespaceObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceObj*)0x0)->GetClass();
      ex42cLcLExampleWithNamespaceObj_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespaceObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLConstExampleWithNamespace_Dictionary();
   static void ex42cLcLConstExampleWithNamespace_TClassManip(TClass*);
   static void *new_ex42cLcLConstExampleWithNamespace(void *p = 0);
   static void *newArray_ex42cLcLConstExampleWithNamespace(Long_t size, void *p);
   static void delete_ex42cLcLConstExampleWithNamespace(void *p);
   static void deleteArray_ex42cLcLConstExampleWithNamespace(void *p);
   static void destruct_ex42cLcLConstExampleWithNamespace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ConstExampleWithNamespace*)
   {
      ::ex42::ConstExampleWithNamespace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ConstExampleWithNamespace));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ConstExampleWithNamespace", "datamodel/ExampleWithNamespaceConst.h", 24,
                  typeid(::ex42::ConstExampleWithNamespace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLConstExampleWithNamespace_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ConstExampleWithNamespace) );
      instance.SetNew(&new_ex42cLcLConstExampleWithNamespace);
      instance.SetNewArray(&newArray_ex42cLcLConstExampleWithNamespace);
      instance.SetDelete(&delete_ex42cLcLConstExampleWithNamespace);
      instance.SetDeleteArray(&deleteArray_ex42cLcLConstExampleWithNamespace);
      instance.SetDestructor(&destruct_ex42cLcLConstExampleWithNamespace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ConstExampleWithNamespace*)
   {
      return GenerateInitInstanceLocal((::ex42::ConstExampleWithNamespace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ConstExampleWithNamespace*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLConstExampleWithNamespace_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ConstExampleWithNamespace*)0x0)->GetClass();
      ex42cLcLConstExampleWithNamespace_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLConstExampleWithNamespace_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespace_Dictionary();
   static void ex42cLcLExampleWithNamespace_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespace(void *p = 0);
   static void *newArray_ex42cLcLExampleWithNamespace(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespace(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespace(void *p);
   static void destruct_ex42cLcLExampleWithNamespace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespace*)
   {
      ::ex42::ExampleWithNamespace *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespace));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespace", "datamodel/ExampleWithNamespace.h", 26,
                  typeid(::ex42::ExampleWithNamespace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespace_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithNamespace) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespace);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespace);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespace);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespace);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespace*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithNamespace*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespace*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespace_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespace*)0x0)->GetClass();
      ex42cLcLExampleWithNamespace_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespace_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelationObj_Dictionary();
   static void ex42cLcLExampleWithARelationObj_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelationObj(void *p = 0);
   static void *newArray_ex42cLcLExampleWithARelationObj(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelationObj(void *p);
   static void deleteArray_ex42cLcLExampleWithARelationObj(void *p);
   static void destruct_ex42cLcLExampleWithARelationObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelationObj*)
   {
      ::ex42::ExampleWithARelationObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelationObj));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelationObj", "datamodel/ExampleWithARelationObj.h", 25,
                  typeid(::ex42::ExampleWithARelationObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelationObj_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithARelationObj) );
      instance.SetNew(&new_ex42cLcLExampleWithARelationObj);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelationObj);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelationObj);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelationObj);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelationObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelationObj*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithARelationObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelationObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationObj*)0x0)->GetClass();
      ex42cLcLExampleWithARelationObj_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelationObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLConstExampleWithARelation_Dictionary();
   static void ex42cLcLConstExampleWithARelation_TClassManip(TClass*);
   static void *new_ex42cLcLConstExampleWithARelation(void *p = 0);
   static void *newArray_ex42cLcLConstExampleWithARelation(Long_t size, void *p);
   static void delete_ex42cLcLConstExampleWithARelation(void *p);
   static void deleteArray_ex42cLcLConstExampleWithARelation(void *p);
   static void destruct_ex42cLcLConstExampleWithARelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ConstExampleWithARelation*)
   {
      ::ex42::ConstExampleWithARelation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ConstExampleWithARelation));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ConstExampleWithARelation", "datamodel/ExampleWithARelationConst.h", 30,
                  typeid(::ex42::ConstExampleWithARelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLConstExampleWithARelation_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ConstExampleWithARelation) );
      instance.SetNew(&new_ex42cLcLConstExampleWithARelation);
      instance.SetNewArray(&newArray_ex42cLcLConstExampleWithARelation);
      instance.SetDelete(&delete_ex42cLcLConstExampleWithARelation);
      instance.SetDeleteArray(&deleteArray_ex42cLcLConstExampleWithARelation);
      instance.SetDestructor(&destruct_ex42cLcLConstExampleWithARelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ConstExampleWithARelation*)
   {
      return GenerateInitInstanceLocal((::ex42::ConstExampleWithARelation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ConstExampleWithARelation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLConstExampleWithARelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ConstExampleWithARelation*)0x0)->GetClass();
      ex42cLcLConstExampleWithARelation_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLConstExampleWithARelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelation_Dictionary();
   static void ex42cLcLExampleWithARelation_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelation(void *p = 0);
   static void *newArray_ex42cLcLExampleWithARelation(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelation(void *p);
   static void deleteArray_ex42cLcLExampleWithARelation(void *p);
   static void destruct_ex42cLcLExampleWithARelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelation*)
   {
      ::ex42::ExampleWithARelation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelation));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelation", "", 3034,
                  typeid(::ex42::ExampleWithARelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelation_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithARelation) );
      instance.SetNew(&new_ex42cLcLExampleWithARelation);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelation);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelation);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelation);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelation*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithARelation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithARelation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithARelation*)0x0)->GetClass();
      ex42cLcLExampleWithARelation_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelationCollection_Dictionary();
   static void ex42cLcLExampleWithARelationCollection_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelationCollection(void *p = 0);
   static void *newArray_ex42cLcLExampleWithARelationCollection(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelationCollection(void *p);
   static void deleteArray_ex42cLcLExampleWithARelationCollection(void *p);
   static void destruct_ex42cLcLExampleWithARelationCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelationCollection*)
   {
      ::ex42::ExampleWithARelationCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelationCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelationCollection", "", 3164,
                  typeid(::ex42::ExampleWithARelationCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelationCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithARelationCollection) );
      instance.SetNew(&new_ex42cLcLExampleWithARelationCollection);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelationCollection);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelationCollection);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelationCollection);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelationCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelationCollection*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithARelationCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelationCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithARelationCollection*)0x0)->GetClass();
      ex42cLcLExampleWithARelationCollection_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelationCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *SimpleStruct_Dictionary();
   static void SimpleStruct_TClassManip(TClass*);
   static void *new_SimpleStruct(void *p = 0);
   static void *newArray_SimpleStruct(Long_t size, void *p);
   static void delete_SimpleStruct(void *p);
   static void deleteArray_SimpleStruct(void *p);
   static void destruct_SimpleStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SimpleStruct*)
   {
      ::SimpleStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SimpleStruct));
      static ::ROOT::TGenericClassInfo 
         instance("SimpleStruct", "datamodel/SimpleStruct.h", 11,
                  typeid(::SimpleStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SimpleStruct_Dictionary, isa_proxy, 4,
                  sizeof(::SimpleStruct) );
      instance.SetNew(&new_SimpleStruct);
      instance.SetNewArray(&newArray_SimpleStruct);
      instance.SetDelete(&delete_SimpleStruct);
      instance.SetDeleteArray(&deleteArray_SimpleStruct);
      instance.SetDestructor(&destruct_SimpleStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SimpleStruct*)
   {
      return GenerateInitInstanceLocal((::SimpleStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::SimpleStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SimpleStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::SimpleStruct*)0x0)->GetClass();
      SimpleStruct_TClassManip(theClass);
   return theClass;
   }

   static void SimpleStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NotSoSimpleStruct_Dictionary();
   static void NotSoSimpleStruct_TClassManip(TClass*);
   static void *new_NotSoSimpleStruct(void *p = 0);
   static void *newArray_NotSoSimpleStruct(Long_t size, void *p);
   static void delete_NotSoSimpleStruct(void *p);
   static void deleteArray_NotSoSimpleStruct(void *p);
   static void destruct_NotSoSimpleStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NotSoSimpleStruct*)
   {
      ::NotSoSimpleStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NotSoSimpleStruct));
      static ::ROOT::TGenericClassInfo 
         instance("NotSoSimpleStruct", "datamodel/NotSoSimpleStruct.h", 11,
                  typeid(::NotSoSimpleStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NotSoSimpleStruct_Dictionary, isa_proxy, 4,
                  sizeof(::NotSoSimpleStruct) );
      instance.SetNew(&new_NotSoSimpleStruct);
      instance.SetNewArray(&newArray_NotSoSimpleStruct);
      instance.SetDelete(&delete_NotSoSimpleStruct);
      instance.SetDeleteArray(&deleteArray_NotSoSimpleStruct);
      instance.SetDestructor(&destruct_NotSoSimpleStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NotSoSimpleStruct*)
   {
      return GenerateInitInstanceLocal((::NotSoSimpleStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::NotSoSimpleStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NotSoSimpleStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::NotSoSimpleStruct*)0x0)->GetClass();
      NotSoSimpleStruct_TClassManip(theClass);
   return theClass;
   }

   static void NotSoSimpleStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayData_Dictionary();
   static void ExampleWithArrayData_TClassManip(TClass*);
   static void *new_ExampleWithArrayData(void *p = 0);
   static void *newArray_ExampleWithArrayData(Long_t size, void *p);
   static void delete_ExampleWithArrayData(void *p);
   static void deleteArray_ExampleWithArrayData(void *p);
   static void destruct_ExampleWithArrayData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayData*)
   {
      ::ExampleWithArrayData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayData", "datamodel/ExampleWithArrayData.h", 16,
                  typeid(::ExampleWithArrayData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithArrayData) );
      instance.SetNew(&new_ExampleWithArrayData);
      instance.SetNewArray(&newArray_ExampleWithArrayData);
      instance.SetDelete(&delete_ExampleWithArrayData);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayData);
      instance.SetDestructor(&destruct_ExampleWithArrayData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayData*)
   {
      return GenerateInitInstanceLocal((::ExampleWithArrayData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithArrayData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithArrayData*)0x0)->GetClass();
      ExampleWithArrayData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayObj_Dictionary();
   static void ExampleWithArrayObj_TClassManip(TClass*);
   static void *new_ExampleWithArrayObj(void *p = 0);
   static void *newArray_ExampleWithArrayObj(Long_t size, void *p);
   static void delete_ExampleWithArrayObj(void *p);
   static void deleteArray_ExampleWithArrayObj(void *p);
   static void destruct_ExampleWithArrayObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayObj*)
   {
      ::ExampleWithArrayObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayObj", "datamodel/ExampleWithArrayObj.h", 17,
                  typeid(::ExampleWithArrayObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithArrayObj) );
      instance.SetNew(&new_ExampleWithArrayObj);
      instance.SetNewArray(&newArray_ExampleWithArrayObj);
      instance.SetDelete(&delete_ExampleWithArrayObj);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayObj);
      instance.SetDestructor(&destruct_ExampleWithArrayObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayObj*)
   {
      return GenerateInitInstanceLocal((::ExampleWithArrayObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithArrayObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithArrayObj*)0x0)->GetClass();
      ExampleWithArrayObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleWithArray_Dictionary();
   static void ConstExampleWithArray_TClassManip(TClass*);
   static void *new_ConstExampleWithArray(void *p = 0);
   static void *newArray_ConstExampleWithArray(Long_t size, void *p);
   static void delete_ConstExampleWithArray(void *p);
   static void deleteArray_ConstExampleWithArray(void *p);
   static void destruct_ConstExampleWithArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleWithArray*)
   {
      ::ConstExampleWithArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleWithArray));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleWithArray", "datamodel/ExampleWithArrayConst.h", 25,
                  typeid(::ConstExampleWithArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleWithArray_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleWithArray) );
      instance.SetNew(&new_ConstExampleWithArray);
      instance.SetNewArray(&newArray_ConstExampleWithArray);
      instance.SetDelete(&delete_ConstExampleWithArray);
      instance.SetDeleteArray(&deleteArray_ConstExampleWithArray);
      instance.SetDestructor(&destruct_ConstExampleWithArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleWithArray*)
   {
      return GenerateInitInstanceLocal((::ConstExampleWithArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleWithArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleWithArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleWithArray*)0x0)->GetClass();
      ConstExampleWithArray_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleWithArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArray_Dictionary();
   static void ExampleWithArray_TClassManip(TClass*);
   static void *new_ExampleWithArray(void *p = 0);
   static void *newArray_ExampleWithArray(Long_t size, void *p);
   static void delete_ExampleWithArray(void *p);
   static void deleteArray_ExampleWithArray(void *p);
   static void destruct_ExampleWithArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArray*)
   {
      ::ExampleWithArray *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArray));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArray", "", 3485,
                  typeid(::ExampleWithArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArray_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithArray) );
      instance.SetNew(&new_ExampleWithArray);
      instance.SetNewArray(&newArray_ExampleWithArray);
      instance.SetDelete(&delete_ExampleWithArray);
      instance.SetDeleteArray(&deleteArray_ExampleWithArray);
      instance.SetDestructor(&destruct_ExampleWithArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArray*)
   {
      return GenerateInitInstanceLocal((::ExampleWithArray*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithArray*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithArray*)0x0)->GetClass();
      ExampleWithArray_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayCollection_Dictionary();
   static void ExampleWithArrayCollection_TClassManip(TClass*);
   static void *new_ExampleWithArrayCollection(void *p = 0);
   static void *newArray_ExampleWithArrayCollection(Long_t size, void *p);
   static void delete_ExampleWithArrayCollection(void *p);
   static void deleteArray_ExampleWithArrayCollection(void *p);
   static void destruct_ExampleWithArrayCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayCollection*)
   {
      ::ExampleWithArrayCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayCollection", "", 3661,
                  typeid(::ExampleWithArrayCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithArrayCollection) );
      instance.SetNew(&new_ExampleWithArrayCollection);
      instance.SetNewArray(&newArray_ExampleWithArrayCollection);
      instance.SetDelete(&delete_ExampleWithArrayCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayCollection);
      instance.SetDestructor(&destruct_ExampleWithArrayCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleWithArrayCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithArrayCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithArrayCollection*)0x0)->GetClass();
      ExampleWithArrayCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponentData_Dictionary();
   static void ExampleWithComponentData_TClassManip(TClass*);
   static void *new_ExampleWithComponentData(void *p = 0);
   static void *newArray_ExampleWithComponentData(Long_t size, void *p);
   static void delete_ExampleWithComponentData(void *p);
   static void deleteArray_ExampleWithComponentData(void *p);
   static void destruct_ExampleWithComponentData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponentData*)
   {
      ::ExampleWithComponentData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponentData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponentData", "datamodel/ExampleWithComponentData.h", 14,
                  typeid(::ExampleWithComponentData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponentData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithComponentData) );
      instance.SetNew(&new_ExampleWithComponentData);
      instance.SetNewArray(&newArray_ExampleWithComponentData);
      instance.SetDelete(&delete_ExampleWithComponentData);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponentData);
      instance.SetDestructor(&destruct_ExampleWithComponentData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponentData*)
   {
      return GenerateInitInstanceLocal((::ExampleWithComponentData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithComponentData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponentData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithComponentData*)0x0)->GetClass();
      ExampleWithComponentData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponentData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponentObj_Dictionary();
   static void ExampleWithComponentObj_TClassManip(TClass*);
   static void *new_ExampleWithComponentObj(void *p = 0);
   static void *newArray_ExampleWithComponentObj(Long_t size, void *p);
   static void delete_ExampleWithComponentObj(void *p);
   static void deleteArray_ExampleWithComponentObj(void *p);
   static void destruct_ExampleWithComponentObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponentObj*)
   {
      ::ExampleWithComponentObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponentObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponentObj", "datamodel/ExampleWithComponentObj.h", 17,
                  typeid(::ExampleWithComponentObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponentObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithComponentObj) );
      instance.SetNew(&new_ExampleWithComponentObj);
      instance.SetNewArray(&newArray_ExampleWithComponentObj);
      instance.SetDelete(&delete_ExampleWithComponentObj);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponentObj);
      instance.SetDestructor(&destruct_ExampleWithComponentObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponentObj*)
   {
      return GenerateInitInstanceLocal((::ExampleWithComponentObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithComponentObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponentObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithComponentObj*)0x0)->GetClass();
      ExampleWithComponentObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponentObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleWithComponent_Dictionary();
   static void ConstExampleWithComponent_TClassManip(TClass*);
   static void *new_ConstExampleWithComponent(void *p = 0);
   static void *newArray_ConstExampleWithComponent(Long_t size, void *p);
   static void delete_ConstExampleWithComponent(void *p);
   static void deleteArray_ConstExampleWithComponent(void *p);
   static void destruct_ConstExampleWithComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleWithComponent*)
   {
      ::ConstExampleWithComponent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleWithComponent));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleWithComponent", "datamodel/ExampleWithComponentConst.h", 23,
                  typeid(::ConstExampleWithComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleWithComponent_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleWithComponent) );
      instance.SetNew(&new_ConstExampleWithComponent);
      instance.SetNewArray(&newArray_ConstExampleWithComponent);
      instance.SetDelete(&delete_ConstExampleWithComponent);
      instance.SetDeleteArray(&deleteArray_ConstExampleWithComponent);
      instance.SetDestructor(&destruct_ConstExampleWithComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleWithComponent*)
   {
      return GenerateInitInstanceLocal((::ConstExampleWithComponent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleWithComponent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleWithComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleWithComponent*)0x0)->GetClass();
      ConstExampleWithComponent_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleWithComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponent_Dictionary();
   static void ExampleWithComponent_TClassManip(TClass*);
   static void *new_ExampleWithComponent(void *p = 0);
   static void *newArray_ExampleWithComponent(Long_t size, void *p);
   static void delete_ExampleWithComponent(void *p);
   static void deleteArray_ExampleWithComponent(void *p);
   static void destruct_ExampleWithComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponent*)
   {
      ::ExampleWithComponent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponent));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponent", "", 4038,
                  typeid(::ExampleWithComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponent_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithComponent) );
      instance.SetNew(&new_ExampleWithComponent);
      instance.SetNewArray(&newArray_ExampleWithComponent);
      instance.SetDelete(&delete_ExampleWithComponent);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponent);
      instance.SetDestructor(&destruct_ExampleWithComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponent*)
   {
      return GenerateInitInstanceLocal((::ExampleWithComponent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithComponent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithComponent*)0x0)->GetClass();
      ExampleWithComponent_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponentCollection_Dictionary();
   static void ExampleWithComponentCollection_TClassManip(TClass*);
   static void *new_ExampleWithComponentCollection(void *p = 0);
   static void *newArray_ExampleWithComponentCollection(Long_t size, void *p);
   static void delete_ExampleWithComponentCollection(void *p);
   static void deleteArray_ExampleWithComponentCollection(void *p);
   static void destruct_ExampleWithComponentCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponentCollection*)
   {
      ::ExampleWithComponentCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponentCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponentCollection", "", 4164,
                  typeid(::ExampleWithComponentCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponentCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithComponentCollection) );
      instance.SetNew(&new_ExampleWithComponentCollection);
      instance.SetNewArray(&newArray_ExampleWithComponentCollection);
      instance.SetDelete(&delete_ExampleWithComponentCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponentCollection);
      instance.SetDestructor(&destruct_ExampleWithComponentCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponentCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleWithComponentCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithComponentCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponentCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithComponentCollection*)0x0)->GetClass();
      ExampleWithComponentCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponentCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespaceCollection_Dictionary();
   static void ex42cLcLExampleWithNamespaceCollection_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespaceCollection(void *p = 0);
   static void *newArray_ex42cLcLExampleWithNamespaceCollection(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespaceCollection(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespaceCollection(void *p);
   static void destruct_ex42cLcLExampleWithNamespaceCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespaceCollection*)
   {
      ::ex42::ExampleWithNamespaceCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespaceCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespaceCollection", "", 4583,
                  typeid(::ex42::ExampleWithNamespaceCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespaceCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ex42::ExampleWithNamespaceCollection) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespaceCollection);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespaceCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespaceCollection*)
   {
      return GenerateInitInstanceLocal((::ex42::ExampleWithNamespaceCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespaceCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex42::ExampleWithNamespaceCollection*)0x0)->GetClass();
      ex42cLcLExampleWithNamespaceCollection_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespaceCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelationData_Dictionary();
   static void ExampleWithOneRelationData_TClassManip(TClass*);
   static void *new_ExampleWithOneRelationData(void *p = 0);
   static void *newArray_ExampleWithOneRelationData(Long_t size, void *p);
   static void delete_ExampleWithOneRelationData(void *p);
   static void deleteArray_ExampleWithOneRelationData(void *p);
   static void destruct_ExampleWithOneRelationData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelationData*)
   {
      ::ExampleWithOneRelationData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelationData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelationData", "datamodel/ExampleWithOneRelationData.h", 13,
                  typeid(::ExampleWithOneRelationData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelationData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithOneRelationData) );
      instance.SetNew(&new_ExampleWithOneRelationData);
      instance.SetNewArray(&newArray_ExampleWithOneRelationData);
      instance.SetDelete(&delete_ExampleWithOneRelationData);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelationData);
      instance.SetDestructor(&destruct_ExampleWithOneRelationData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelationData*)
   {
      return GenerateInitInstanceLocal((::ExampleWithOneRelationData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithOneRelationData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelationData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithOneRelationData*)0x0)->GetClass();
      ExampleWithOneRelationData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelationData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelationObj_Dictionary();
   static void ExampleWithOneRelationObj_TClassManip(TClass*);
   static void *new_ExampleWithOneRelationObj(void *p = 0);
   static void *newArray_ExampleWithOneRelationObj(Long_t size, void *p);
   static void delete_ExampleWithOneRelationObj(void *p);
   static void deleteArray_ExampleWithOneRelationObj(void *p);
   static void destruct_ExampleWithOneRelationObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelationObj*)
   {
      ::ExampleWithOneRelationObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelationObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelationObj", "datamodel/ExampleWithOneRelationObj.h", 19,
                  typeid(::ExampleWithOneRelationObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelationObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithOneRelationObj) );
      instance.SetNew(&new_ExampleWithOneRelationObj);
      instance.SetNewArray(&newArray_ExampleWithOneRelationObj);
      instance.SetDelete(&delete_ExampleWithOneRelationObj);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelationObj);
      instance.SetDestructor(&destruct_ExampleWithOneRelationObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelationObj*)
   {
      return GenerateInitInstanceLocal((::ExampleWithOneRelationObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithOneRelationObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelationObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithOneRelationObj*)0x0)->GetClass();
      ExampleWithOneRelationObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelationObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleWithOneRelation_Dictionary();
   static void ConstExampleWithOneRelation_TClassManip(TClass*);
   static void *new_ConstExampleWithOneRelation(void *p = 0);
   static void *newArray_ConstExampleWithOneRelation(Long_t size, void *p);
   static void delete_ConstExampleWithOneRelation(void *p);
   static void deleteArray_ConstExampleWithOneRelation(void *p);
   static void destruct_ConstExampleWithOneRelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleWithOneRelation*)
   {
      ::ConstExampleWithOneRelation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleWithOneRelation));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleWithOneRelation", "datamodel/ExampleWithOneRelationConst.h", 25,
                  typeid(::ConstExampleWithOneRelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleWithOneRelation_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleWithOneRelation) );
      instance.SetNew(&new_ConstExampleWithOneRelation);
      instance.SetNewArray(&newArray_ConstExampleWithOneRelation);
      instance.SetDelete(&delete_ConstExampleWithOneRelation);
      instance.SetDeleteArray(&deleteArray_ConstExampleWithOneRelation);
      instance.SetDestructor(&destruct_ConstExampleWithOneRelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleWithOneRelation*)
   {
      return GenerateInitInstanceLocal((::ConstExampleWithOneRelation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleWithOneRelation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleWithOneRelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleWithOneRelation*)0x0)->GetClass();
      ConstExampleWithOneRelation_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleWithOneRelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelation_Dictionary();
   static void ExampleWithOneRelation_TClassManip(TClass*);
   static void *new_ExampleWithOneRelation(void *p = 0);
   static void *newArray_ExampleWithOneRelation(Long_t size, void *p);
   static void delete_ExampleWithOneRelation(void *p);
   static void deleteArray_ExampleWithOneRelation(void *p);
   static void destruct_ExampleWithOneRelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelation*)
   {
      ::ExampleWithOneRelation *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelation));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelation", "", 4882,
                  typeid(::ExampleWithOneRelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelation_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithOneRelation) );
      instance.SetNew(&new_ExampleWithOneRelation);
      instance.SetNewArray(&newArray_ExampleWithOneRelation);
      instance.SetDelete(&delete_ExampleWithOneRelation);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelation);
      instance.SetDestructor(&destruct_ExampleWithOneRelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelation*)
   {
      return GenerateInitInstanceLocal((::ExampleWithOneRelation*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithOneRelation*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithOneRelation*)0x0)->GetClass();
      ExampleWithOneRelation_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelationCollection_Dictionary();
   static void ExampleWithOneRelationCollection_TClassManip(TClass*);
   static void *new_ExampleWithOneRelationCollection(void *p = 0);
   static void *newArray_ExampleWithOneRelationCollection(Long_t size, void *p);
   static void delete_ExampleWithOneRelationCollection(void *p);
   static void deleteArray_ExampleWithOneRelationCollection(void *p);
   static void destruct_ExampleWithOneRelationCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelationCollection*)
   {
      ::ExampleWithOneRelationCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelationCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelationCollection", "", 4997,
                  typeid(::ExampleWithOneRelationCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelationCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithOneRelationCollection) );
      instance.SetNew(&new_ExampleWithOneRelationCollection);
      instance.SetNewArray(&newArray_ExampleWithOneRelationCollection);
      instance.SetDelete(&delete_ExampleWithOneRelationCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelationCollection);
      instance.SetDestructor(&destruct_ExampleWithOneRelationCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelationCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleWithOneRelationCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithOneRelationCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelationCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithOneRelationCollection*)0x0)->GetClass();
      ExampleWithOneRelationCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelationCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithStringData_Dictionary();
   static void ExampleWithStringData_TClassManip(TClass*);
   static void *new_ExampleWithStringData(void *p = 0);
   static void *newArray_ExampleWithStringData(Long_t size, void *p);
   static void delete_ExampleWithStringData(void *p);
   static void deleteArray_ExampleWithStringData(void *p);
   static void destruct_ExampleWithStringData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithStringData*)
   {
      ::ExampleWithStringData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithStringData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithStringData", "datamodel/ExampleWithStringData.h", 14,
                  typeid(::ExampleWithStringData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithStringData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithStringData) );
      instance.SetNew(&new_ExampleWithStringData);
      instance.SetNewArray(&newArray_ExampleWithStringData);
      instance.SetDelete(&delete_ExampleWithStringData);
      instance.SetDeleteArray(&deleteArray_ExampleWithStringData);
      instance.SetDestructor(&destruct_ExampleWithStringData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithStringData*)
   {
      return GenerateInitInstanceLocal((::ExampleWithStringData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithStringData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithStringData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithStringData*)0x0)->GetClass();
      ExampleWithStringData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithStringData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithStringObj_Dictionary();
   static void ExampleWithStringObj_TClassManip(TClass*);
   static void *new_ExampleWithStringObj(void *p = 0);
   static void *newArray_ExampleWithStringObj(Long_t size, void *p);
   static void delete_ExampleWithStringObj(void *p);
   static void deleteArray_ExampleWithStringObj(void *p);
   static void destruct_ExampleWithStringObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithStringObj*)
   {
      ::ExampleWithStringObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithStringObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithStringObj", "datamodel/ExampleWithStringObj.h", 17,
                  typeid(::ExampleWithStringObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithStringObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithStringObj) );
      instance.SetNew(&new_ExampleWithStringObj);
      instance.SetNewArray(&newArray_ExampleWithStringObj);
      instance.SetDelete(&delete_ExampleWithStringObj);
      instance.SetDeleteArray(&deleteArray_ExampleWithStringObj);
      instance.SetDestructor(&destruct_ExampleWithStringObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithStringObj*)
   {
      return GenerateInitInstanceLocal((::ExampleWithStringObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithStringObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithStringObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithStringObj*)0x0)->GetClass();
      ExampleWithStringObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithStringObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleWithString_Dictionary();
   static void ConstExampleWithString_TClassManip(TClass*);
   static void *new_ConstExampleWithString(void *p = 0);
   static void *newArray_ConstExampleWithString(Long_t size, void *p);
   static void delete_ConstExampleWithString(void *p);
   static void deleteArray_ConstExampleWithString(void *p);
   static void destruct_ConstExampleWithString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleWithString*)
   {
      ::ConstExampleWithString *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleWithString));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleWithString", "datamodel/ExampleWithStringConst.h", 23,
                  typeid(::ConstExampleWithString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleWithString_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleWithString) );
      instance.SetNew(&new_ConstExampleWithString);
      instance.SetNewArray(&newArray_ConstExampleWithString);
      instance.SetDelete(&delete_ConstExampleWithString);
      instance.SetDeleteArray(&deleteArray_ConstExampleWithString);
      instance.SetDestructor(&destruct_ConstExampleWithString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleWithString*)
   {
      return GenerateInitInstanceLocal((::ConstExampleWithString*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleWithString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleWithString_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleWithString*)0x0)->GetClass();
      ConstExampleWithString_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleWithString_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithString_Dictionary();
   static void ExampleWithString_TClassManip(TClass*);
   static void *new_ExampleWithString(void *p = 0);
   static void *newArray_ExampleWithString(Long_t size, void *p);
   static void delete_ExampleWithString(void *p);
   static void deleteArray_ExampleWithString(void *p);
   static void destruct_ExampleWithString(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithString*)
   {
      ::ExampleWithString *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithString));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithString", "", 5273,
                  typeid(::ExampleWithString), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithString_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithString) );
      instance.SetNew(&new_ExampleWithString);
      instance.SetNewArray(&newArray_ExampleWithString);
      instance.SetDelete(&delete_ExampleWithString);
      instance.SetDeleteArray(&deleteArray_ExampleWithString);
      instance.SetDestructor(&destruct_ExampleWithString);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithString*)
   {
      return GenerateInitInstanceLocal((::ExampleWithString*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithString*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithString_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithString*)0x0)->GetClass();
      ExampleWithString_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithString_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithStringCollection_Dictionary();
   static void ExampleWithStringCollection_TClassManip(TClass*);
   static void *new_ExampleWithStringCollection(void *p = 0);
   static void *newArray_ExampleWithStringCollection(Long_t size, void *p);
   static void delete_ExampleWithStringCollection(void *p);
   static void deleteArray_ExampleWithStringCollection(void *p);
   static void destruct_ExampleWithStringCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithStringCollection*)
   {
      ::ExampleWithStringCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithStringCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithStringCollection", "", 5391,
                  typeid(::ExampleWithStringCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithStringCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithStringCollection) );
      instance.SetNew(&new_ExampleWithStringCollection);
      instance.SetNewArray(&newArray_ExampleWithStringCollection);
      instance.SetDelete(&delete_ExampleWithStringCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithStringCollection);
      instance.SetDestructor(&destruct_ExampleWithStringCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithStringCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleWithStringCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithStringCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithStringCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithStringCollection*)0x0)->GetClass();
      ExampleWithStringCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithStringCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMemberData_Dictionary();
   static void ExampleWithVectorMemberData_TClassManip(TClass*);
   static void *new_ExampleWithVectorMemberData(void *p = 0);
   static void *newArray_ExampleWithVectorMemberData(Long_t size, void *p);
   static void delete_ExampleWithVectorMemberData(void *p);
   static void deleteArray_ExampleWithVectorMemberData(void *p);
   static void destruct_ExampleWithVectorMemberData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMemberData*)
   {
      ::ExampleWithVectorMemberData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMemberData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMemberData", "datamodel/ExampleWithVectorMemberData.h", 13,
                  typeid(::ExampleWithVectorMemberData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMemberData_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithVectorMemberData) );
      instance.SetNew(&new_ExampleWithVectorMemberData);
      instance.SetNewArray(&newArray_ExampleWithVectorMemberData);
      instance.SetDelete(&delete_ExampleWithVectorMemberData);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMemberData);
      instance.SetDestructor(&destruct_ExampleWithVectorMemberData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMemberData*)
   {
      return GenerateInitInstanceLocal((::ExampleWithVectorMemberData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithVectorMemberData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMemberData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithVectorMemberData*)0x0)->GetClass();
      ExampleWithVectorMemberData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMemberData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMemberObj_Dictionary();
   static void ExampleWithVectorMemberObj_TClassManip(TClass*);
   static void *new_ExampleWithVectorMemberObj(void *p = 0);
   static void *newArray_ExampleWithVectorMemberObj(Long_t size, void *p);
   static void delete_ExampleWithVectorMemberObj(void *p);
   static void deleteArray_ExampleWithVectorMemberObj(void *p);
   static void destruct_ExampleWithVectorMemberObj(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMemberObj*)
   {
      ::ExampleWithVectorMemberObj *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMemberObj));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMemberObj", "datamodel/ExampleWithVectorMemberObj.h", 19,
                  typeid(::ExampleWithVectorMemberObj), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMemberObj_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithVectorMemberObj) );
      instance.SetNew(&new_ExampleWithVectorMemberObj);
      instance.SetNewArray(&newArray_ExampleWithVectorMemberObj);
      instance.SetDelete(&delete_ExampleWithVectorMemberObj);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMemberObj);
      instance.SetDestructor(&destruct_ExampleWithVectorMemberObj);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMemberObj*)
   {
      return GenerateInitInstanceLocal((::ExampleWithVectorMemberObj*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithVectorMemberObj*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMemberObj_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithVectorMemberObj*)0x0)->GetClass();
      ExampleWithVectorMemberObj_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMemberObj_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ConstExampleWithVectorMember_Dictionary();
   static void ConstExampleWithVectorMember_TClassManip(TClass*);
   static void *new_ConstExampleWithVectorMember(void *p = 0);
   static void *newArray_ConstExampleWithVectorMember(Long_t size, void *p);
   static void delete_ConstExampleWithVectorMember(void *p);
   static void deleteArray_ConstExampleWithVectorMember(void *p);
   static void destruct_ConstExampleWithVectorMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ConstExampleWithVectorMember*)
   {
      ::ConstExampleWithVectorMember *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ConstExampleWithVectorMember));
      static ::ROOT::TGenericClassInfo 
         instance("ConstExampleWithVectorMember", "datamodel/ExampleWithVectorMemberConst.h", 23,
                  typeid(::ConstExampleWithVectorMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ConstExampleWithVectorMember_Dictionary, isa_proxy, 4,
                  sizeof(::ConstExampleWithVectorMember) );
      instance.SetNew(&new_ConstExampleWithVectorMember);
      instance.SetNewArray(&newArray_ConstExampleWithVectorMember);
      instance.SetDelete(&delete_ConstExampleWithVectorMember);
      instance.SetDeleteArray(&deleteArray_ConstExampleWithVectorMember);
      instance.SetDestructor(&destruct_ConstExampleWithVectorMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ConstExampleWithVectorMember*)
   {
      return GenerateInitInstanceLocal((::ConstExampleWithVectorMember*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ConstExampleWithVectorMember*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ConstExampleWithVectorMember_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ConstExampleWithVectorMember*)0x0)->GetClass();
      ConstExampleWithVectorMember_TClassManip(theClass);
   return theClass;
   }

   static void ConstExampleWithVectorMember_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMember_Dictionary();
   static void ExampleWithVectorMember_TClassManip(TClass*);
   static void *new_ExampleWithVectorMember(void *p = 0);
   static void *newArray_ExampleWithVectorMember(Long_t size, void *p);
   static void delete_ExampleWithVectorMember(void *p);
   static void deleteArray_ExampleWithVectorMember(void *p);
   static void destruct_ExampleWithVectorMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMember*)
   {
      ::ExampleWithVectorMember *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMember));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMember", "", 5677,
                  typeid(::ExampleWithVectorMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMember_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithVectorMember) );
      instance.SetNew(&new_ExampleWithVectorMember);
      instance.SetNewArray(&newArray_ExampleWithVectorMember);
      instance.SetDelete(&delete_ExampleWithVectorMember);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMember);
      instance.SetDestructor(&destruct_ExampleWithVectorMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMember*)
   {
      return GenerateInitInstanceLocal((::ExampleWithVectorMember*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithVectorMember*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMember_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithVectorMember*)0x0)->GetClass();
      ExampleWithVectorMember_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMember_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMemberCollection_Dictionary();
   static void ExampleWithVectorMemberCollection_TClassManip(TClass*);
   static void *new_ExampleWithVectorMemberCollection(void *p = 0);
   static void *newArray_ExampleWithVectorMemberCollection(Long_t size, void *p);
   static void delete_ExampleWithVectorMemberCollection(void *p);
   static void deleteArray_ExampleWithVectorMemberCollection(void *p);
   static void destruct_ExampleWithVectorMemberCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMemberCollection*)
   {
      ::ExampleWithVectorMemberCollection *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMemberCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMemberCollection", "", 5794,
                  typeid(::ExampleWithVectorMemberCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMemberCollection_Dictionary, isa_proxy, 4,
                  sizeof(::ExampleWithVectorMemberCollection) );
      instance.SetNew(&new_ExampleWithVectorMemberCollection);
      instance.SetNewArray(&newArray_ExampleWithVectorMemberCollection);
      instance.SetDelete(&delete_ExampleWithVectorMemberCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMemberCollection);
      instance.SetDestructor(&destruct_ExampleWithVectorMemberCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMemberCollection*)
   {
      return GenerateInitInstanceLocal((::ExampleWithVectorMemberCollection*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ExampleWithVectorMemberCollection*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMemberCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ExampleWithVectorMemberCollection*)0x0)->GetClass();
      ExampleWithVectorMemberCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMemberCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex2cLcLNamespaceInNamespaceStruct_Dictionary();
   static void ex2cLcLNamespaceInNamespaceStruct_TClassManip(TClass*);
   static void *new_ex2cLcLNamespaceInNamespaceStruct(void *p = 0);
   static void *newArray_ex2cLcLNamespaceInNamespaceStruct(Long_t size, void *p);
   static void delete_ex2cLcLNamespaceInNamespaceStruct(void *p);
   static void deleteArray_ex2cLcLNamespaceInNamespaceStruct(void *p);
   static void destruct_ex2cLcLNamespaceInNamespaceStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex2::NamespaceInNamespaceStruct*)
   {
      ::ex2::NamespaceInNamespaceStruct *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex2::NamespaceInNamespaceStruct));
      static ::ROOT::TGenericClassInfo 
         instance("ex2::NamespaceInNamespaceStruct", "", 6061,
                  typeid(::ex2::NamespaceInNamespaceStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex2cLcLNamespaceInNamespaceStruct_Dictionary, isa_proxy, 4,
                  sizeof(::ex2::NamespaceInNamespaceStruct) );
      instance.SetNew(&new_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetNewArray(&newArray_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDelete(&delete_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDeleteArray(&deleteArray_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDestructor(&destruct_ex2cLcLNamespaceInNamespaceStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex2::NamespaceInNamespaceStruct*)
   {
      return GenerateInitInstanceLocal((::ex2::NamespaceInNamespaceStruct*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ex2::NamespaceInNamespaceStruct*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex2cLcLNamespaceInNamespaceStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::ex2::NamespaceInNamespaceStruct*)0x0)->GetClass();
      ex2cLcLNamespaceInNamespaceStruct_TClassManip(theClass);
   return theClass;
   }

   static void ex2cLcLNamespaceInNamespaceStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoData(void *p) {
      return  p ? new(p) ::EventInfoData : new ::EventInfoData;
   }
   static void *newArray_EventInfoData(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoData[nElements] : new ::EventInfoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoData(void *p) {
      delete ((::EventInfoData*)p);
   }
   static void deleteArray_EventInfoData(void *p) {
      delete [] ((::EventInfoData*)p);
   }
   static void destruct_EventInfoData(void *p) {
      typedef ::EventInfoData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoObj(void *p) {
      return  p ? new(p) ::EventInfoObj : new ::EventInfoObj;
   }
   static void *newArray_EventInfoObj(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoObj[nElements] : new ::EventInfoObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoObj(void *p) {
      delete ((::EventInfoObj*)p);
   }
   static void deleteArray_EventInfoObj(void *p) {
      delete [] ((::EventInfoObj*)p);
   }
   static void destruct_EventInfoObj(void *p) {
      typedef ::EventInfoObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstEventInfo(void *p) {
      return  p ? new(p) ::ConstEventInfo : new ::ConstEventInfo;
   }
   static void *newArray_ConstEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::ConstEventInfo[nElements] : new ::ConstEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstEventInfo(void *p) {
      delete ((::ConstEventInfo*)p);
   }
   static void deleteArray_ConstEventInfo(void *p) {
      delete [] ((::ConstEventInfo*)p);
   }
   static void destruct_ConstEventInfo(void *p) {
      typedef ::ConstEventInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstEventInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfo(void *p) {
      return  p ? new(p) ::EventInfo : new ::EventInfo;
   }
   static void *newArray_EventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfo[nElements] : new ::EventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfo(void *p) {
      delete ((::EventInfo*)p);
   }
   static void deleteArray_EventInfo(void *p) {
      delete [] ((::EventInfo*)p);
   }
   static void destruct_EventInfo(void *p) {
      typedef ::EventInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EventInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoCollection(void *p) {
      return  p ? new(p) ::EventInfoCollection : new ::EventInfoCollection;
   }
   static void *newArray_EventInfoCollection(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoCollection[nElements] : new ::EventInfoCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoCollection(void *p) {
      delete ((::EventInfoCollection*)p);
   }
   static void deleteArray_EventInfoCollection(void *p) {
      delete [] ((::EventInfoCollection*)p);
   }
   static void destruct_EventInfoCollection(void *p) {
      typedef ::EventInfoCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleClusterData(void *p) {
      return  p ? new(p) ::ExampleClusterData : new ::ExampleClusterData;
   }
   static void *newArray_ExampleClusterData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleClusterData[nElements] : new ::ExampleClusterData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleClusterData(void *p) {
      delete ((::ExampleClusterData*)p);
   }
   static void deleteArray_ExampleClusterData(void *p) {
      delete [] ((::ExampleClusterData*)p);
   }
   static void destruct_ExampleClusterData(void *p) {
      typedef ::ExampleClusterData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleClusterData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitData(void *p) {
      return  p ? new(p) ::ExampleHitData : new ::ExampleHitData;
   }
   static void *newArray_ExampleHitData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitData[nElements] : new ::ExampleHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitData(void *p) {
      delete ((::ExampleHitData*)p);
   }
   static void deleteArray_ExampleHitData(void *p) {
      delete [] ((::ExampleHitData*)p);
   }
   static void destruct_ExampleHitData(void *p) {
      typedef ::ExampleHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitObj(void *p) {
      return  p ? new(p) ::ExampleHitObj : new ::ExampleHitObj;
   }
   static void *newArray_ExampleHitObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitObj[nElements] : new ::ExampleHitObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitObj(void *p) {
      delete ((::ExampleHitObj*)p);
   }
   static void deleteArray_ExampleHitObj(void *p) {
      delete [] ((::ExampleHitObj*)p);
   }
   static void destruct_ExampleHitObj(void *p) {
      typedef ::ExampleHitObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleHit(void *p) {
      return  p ? new(p) ::ConstExampleHit : new ::ConstExampleHit;
   }
   static void *newArray_ConstExampleHit(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleHit[nElements] : new ::ConstExampleHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleHit(void *p) {
      delete ((::ConstExampleHit*)p);
   }
   static void deleteArray_ConstExampleHit(void *p) {
      delete [] ((::ConstExampleHit*)p);
   }
   static void destruct_ConstExampleHit(void *p) {
      typedef ::ConstExampleHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHit(void *p) {
      return  p ? new(p) ::ExampleHit : new ::ExampleHit;
   }
   static void *newArray_ExampleHit(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHit[nElements] : new ::ExampleHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHit(void *p) {
      delete ((::ExampleHit*)p);
   }
   static void deleteArray_ExampleHit(void *p) {
      delete [] ((::ExampleHit*)p);
   }
   static void destruct_ExampleHit(void *p) {
      typedef ::ExampleHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleClusterObj(void *p) {
      return  p ? new(p) ::ExampleClusterObj : new ::ExampleClusterObj;
   }
   static void *newArray_ExampleClusterObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleClusterObj[nElements] : new ::ExampleClusterObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleClusterObj(void *p) {
      delete ((::ExampleClusterObj*)p);
   }
   static void deleteArray_ExampleClusterObj(void *p) {
      delete [] ((::ExampleClusterObj*)p);
   }
   static void destruct_ExampleClusterObj(void *p) {
      typedef ::ExampleClusterObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleClusterObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleCluster(void *p) {
      return  p ? new(p) ::ConstExampleCluster : new ::ConstExampleCluster;
   }
   static void *newArray_ConstExampleCluster(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleCluster[nElements] : new ::ConstExampleCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleCluster(void *p) {
      delete ((::ConstExampleCluster*)p);
   }
   static void deleteArray_ConstExampleCluster(void *p) {
      delete [] ((::ConstExampleCluster*)p);
   }
   static void destruct_ConstExampleCluster(void *p) {
      typedef ::ConstExampleCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleCluster(void *p) {
      return  p ? new(p) ::ExampleCluster : new ::ExampleCluster;
   }
   static void *newArray_ExampleCluster(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleCluster[nElements] : new ::ExampleCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleCluster(void *p) {
      delete ((::ExampleCluster*)p);
   }
   static void deleteArray_ExampleCluster(void *p) {
      delete [] ((::ExampleCluster*)p);
   }
   static void destruct_ExampleCluster(void *p) {
      typedef ::ExampleCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleClusterCollection(void *p) {
      return  p ? new(p) ::ExampleClusterCollection : new ::ExampleClusterCollection;
   }
   static void *newArray_ExampleClusterCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleClusterCollection[nElements] : new ::ExampleClusterCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleClusterCollection(void *p) {
      delete ((::ExampleClusterCollection*)p);
   }
   static void deleteArray_ExampleClusterCollection(void *p) {
      delete [] ((::ExampleClusterCollection*)p);
   }
   static void destruct_ExampleClusterCollection(void *p) {
      typedef ::ExampleClusterCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleClusterCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1Data(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1Data : new ::ExampleForCyclicDependency1Data;
   }
   static void *newArray_ExampleForCyclicDependency1Data(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1Data[nElements] : new ::ExampleForCyclicDependency1Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1Data(void *p) {
      delete ((::ExampleForCyclicDependency1Data*)p);
   }
   static void deleteArray_ExampleForCyclicDependency1Data(void *p) {
      delete [] ((::ExampleForCyclicDependency1Data*)p);
   }
   static void destruct_ExampleForCyclicDependency1Data(void *p) {
      typedef ::ExampleForCyclicDependency1Data current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1Obj(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1Obj : new ::ExampleForCyclicDependency1Obj;
   }
   static void *newArray_ExampleForCyclicDependency1Obj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1Obj[nElements] : new ::ExampleForCyclicDependency1Obj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1Obj(void *p) {
      delete ((::ExampleForCyclicDependency1Obj*)p);
   }
   static void deleteArray_ExampleForCyclicDependency1Obj(void *p) {
      delete [] ((::ExampleForCyclicDependency1Obj*)p);
   }
   static void destruct_ExampleForCyclicDependency1Obj(void *p) {
      typedef ::ExampleForCyclicDependency1Obj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1Obj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleForCyclicDependency1(void *p) {
      return  p ? new(p) ::ConstExampleForCyclicDependency1 : new ::ConstExampleForCyclicDependency1;
   }
   static void *newArray_ConstExampleForCyclicDependency1(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleForCyclicDependency1[nElements] : new ::ConstExampleForCyclicDependency1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleForCyclicDependency1(void *p) {
      delete ((::ConstExampleForCyclicDependency1*)p);
   }
   static void deleteArray_ConstExampleForCyclicDependency1(void *p) {
      delete [] ((::ConstExampleForCyclicDependency1*)p);
   }
   static void destruct_ConstExampleForCyclicDependency1(void *p) {
      typedef ::ConstExampleForCyclicDependency1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleForCyclicDependency1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1 : new ::ExampleForCyclicDependency1;
   }
   static void *newArray_ExampleForCyclicDependency1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1[nElements] : new ::ExampleForCyclicDependency1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1(void *p) {
      delete ((::ExampleForCyclicDependency1*)p);
   }
   static void deleteArray_ExampleForCyclicDependency1(void *p) {
      delete [] ((::ExampleForCyclicDependency1*)p);
   }
   static void destruct_ExampleForCyclicDependency1(void *p) {
      typedef ::ExampleForCyclicDependency1 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1Collection(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1Collection : new ::ExampleForCyclicDependency1Collection;
   }
   static void *newArray_ExampleForCyclicDependency1Collection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1Collection[nElements] : new ::ExampleForCyclicDependency1Collection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1Collection(void *p) {
      delete ((::ExampleForCyclicDependency1Collection*)p);
   }
   static void deleteArray_ExampleForCyclicDependency1Collection(void *p) {
      delete [] ((::ExampleForCyclicDependency1Collection*)p);
   }
   static void destruct_ExampleForCyclicDependency1Collection(void *p) {
      typedef ::ExampleForCyclicDependency1Collection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1Collection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2Data(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2Data : new ::ExampleForCyclicDependency2Data;
   }
   static void *newArray_ExampleForCyclicDependency2Data(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2Data[nElements] : new ::ExampleForCyclicDependency2Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2Data(void *p) {
      delete ((::ExampleForCyclicDependency2Data*)p);
   }
   static void deleteArray_ExampleForCyclicDependency2Data(void *p) {
      delete [] ((::ExampleForCyclicDependency2Data*)p);
   }
   static void destruct_ExampleForCyclicDependency2Data(void *p) {
      typedef ::ExampleForCyclicDependency2Data current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2Obj(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2Obj : new ::ExampleForCyclicDependency2Obj;
   }
   static void *newArray_ExampleForCyclicDependency2Obj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2Obj[nElements] : new ::ExampleForCyclicDependency2Obj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2Obj(void *p) {
      delete ((::ExampleForCyclicDependency2Obj*)p);
   }
   static void deleteArray_ExampleForCyclicDependency2Obj(void *p) {
      delete [] ((::ExampleForCyclicDependency2Obj*)p);
   }
   static void destruct_ExampleForCyclicDependency2Obj(void *p) {
      typedef ::ExampleForCyclicDependency2Obj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2Obj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleForCyclicDependency2(void *p) {
      return  p ? new(p) ::ConstExampleForCyclicDependency2 : new ::ConstExampleForCyclicDependency2;
   }
   static void *newArray_ConstExampleForCyclicDependency2(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleForCyclicDependency2[nElements] : new ::ConstExampleForCyclicDependency2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleForCyclicDependency2(void *p) {
      delete ((::ConstExampleForCyclicDependency2*)p);
   }
   static void deleteArray_ConstExampleForCyclicDependency2(void *p) {
      delete [] ((::ConstExampleForCyclicDependency2*)p);
   }
   static void destruct_ConstExampleForCyclicDependency2(void *p) {
      typedef ::ConstExampleForCyclicDependency2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleForCyclicDependency2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2 : new ::ExampleForCyclicDependency2;
   }
   static void *newArray_ExampleForCyclicDependency2(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2[nElements] : new ::ExampleForCyclicDependency2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2(void *p) {
      delete ((::ExampleForCyclicDependency2*)p);
   }
   static void deleteArray_ExampleForCyclicDependency2(void *p) {
      delete [] ((::ExampleForCyclicDependency2*)p);
   }
   static void destruct_ExampleForCyclicDependency2(void *p) {
      typedef ::ExampleForCyclicDependency2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2Collection(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2Collection : new ::ExampleForCyclicDependency2Collection;
   }
   static void *newArray_ExampleForCyclicDependency2Collection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2Collection[nElements] : new ::ExampleForCyclicDependency2Collection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2Collection(void *p) {
      delete ((::ExampleForCyclicDependency2Collection*)p);
   }
   static void deleteArray_ExampleForCyclicDependency2Collection(void *p) {
      delete [] ((::ExampleForCyclicDependency2Collection*)p);
   }
   static void destruct_ExampleForCyclicDependency2Collection(void *p) {
      typedef ::ExampleForCyclicDependency2Collection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2Collection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitCollection(void *p) {
      return  p ? new(p) ::ExampleHitCollection : new ::ExampleHitCollection;
   }
   static void *newArray_ExampleHitCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitCollection[nElements] : new ::ExampleHitCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitCollection(void *p) {
      delete ((::ExampleHitCollection*)p);
   }
   static void deleteArray_ExampleHitCollection(void *p) {
      delete [] ((::ExampleHitCollection*)p);
   }
   static void destruct_ExampleHitCollection(void *p) {
      typedef ::ExampleHitCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMCData(void *p) {
      return  p ? new(p) ::ExampleMCData : new ::ExampleMCData;
   }
   static void *newArray_ExampleMCData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMCData[nElements] : new ::ExampleMCData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMCData(void *p) {
      delete ((::ExampleMCData*)p);
   }
   static void deleteArray_ExampleMCData(void *p) {
      delete [] ((::ExampleMCData*)p);
   }
   static void destruct_ExampleMCData(void *p) {
      typedef ::ExampleMCData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMCData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMCObj(void *p) {
      return  p ? new(p) ::ExampleMCObj : new ::ExampleMCObj;
   }
   static void *newArray_ExampleMCObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMCObj[nElements] : new ::ExampleMCObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMCObj(void *p) {
      delete ((::ExampleMCObj*)p);
   }
   static void deleteArray_ExampleMCObj(void *p) {
      delete [] ((::ExampleMCObj*)p);
   }
   static void destruct_ExampleMCObj(void *p) {
      typedef ::ExampleMCObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMCObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleMC(void *p) {
      return  p ? new(p) ::ConstExampleMC : new ::ConstExampleMC;
   }
   static void *newArray_ConstExampleMC(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleMC[nElements] : new ::ConstExampleMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleMC(void *p) {
      delete ((::ConstExampleMC*)p);
   }
   static void deleteArray_ConstExampleMC(void *p) {
      delete [] ((::ConstExampleMC*)p);
   }
   static void destruct_ConstExampleMC(void *p) {
      typedef ::ConstExampleMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleMC

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMC(void *p) {
      return  p ? new(p) ::ExampleMC : new ::ExampleMC;
   }
   static void *newArray_ExampleMC(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMC[nElements] : new ::ExampleMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMC(void *p) {
      delete ((::ExampleMC*)p);
   }
   static void deleteArray_ExampleMC(void *p) {
      delete [] ((::ExampleMC*)p);
   }
   static void destruct_ExampleMC(void *p) {
      typedef ::ExampleMC current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMC

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMCCollection(void *p) {
      return  p ? new(p) ::ExampleMCCollection : new ::ExampleMCCollection;
   }
   static void *newArray_ExampleMCCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMCCollection[nElements] : new ::ExampleMCCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMCCollection(void *p) {
      delete ((::ExampleMCCollection*)p);
   }
   static void deleteArray_ExampleMCCollection(void *p) {
      delete [] ((::ExampleMCCollection*)p);
   }
   static void destruct_ExampleMCCollection(void *p) {
      typedef ::ExampleMCCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMCCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingTypeData(void *p) {
      return  p ? new(p) ::ExampleReferencingTypeData : new ::ExampleReferencingTypeData;
   }
   static void *newArray_ExampleReferencingTypeData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingTypeData[nElements] : new ::ExampleReferencingTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingTypeData(void *p) {
      delete ((::ExampleReferencingTypeData*)p);
   }
   static void deleteArray_ExampleReferencingTypeData(void *p) {
      delete [] ((::ExampleReferencingTypeData*)p);
   }
   static void destruct_ExampleReferencingTypeData(void *p) {
      typedef ::ExampleReferencingTypeData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingTypeObj(void *p) {
      return  p ? new(p) ::ExampleReferencingTypeObj : new ::ExampleReferencingTypeObj;
   }
   static void *newArray_ExampleReferencingTypeObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingTypeObj[nElements] : new ::ExampleReferencingTypeObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingTypeObj(void *p) {
      delete ((::ExampleReferencingTypeObj*)p);
   }
   static void deleteArray_ExampleReferencingTypeObj(void *p) {
      delete [] ((::ExampleReferencingTypeObj*)p);
   }
   static void destruct_ExampleReferencingTypeObj(void *p) {
      typedef ::ExampleReferencingTypeObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingTypeObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleReferencingType(void *p) {
      return  p ? new(p) ::ConstExampleReferencingType : new ::ConstExampleReferencingType;
   }
   static void *newArray_ConstExampleReferencingType(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleReferencingType[nElements] : new ::ConstExampleReferencingType[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleReferencingType(void *p) {
      delete ((::ConstExampleReferencingType*)p);
   }
   static void deleteArray_ConstExampleReferencingType(void *p) {
      delete [] ((::ConstExampleReferencingType*)p);
   }
   static void destruct_ConstExampleReferencingType(void *p) {
      typedef ::ConstExampleReferencingType current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleReferencingType

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingType(void *p) {
      return  p ? new(p) ::ExampleReferencingType : new ::ExampleReferencingType;
   }
   static void *newArray_ExampleReferencingType(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingType[nElements] : new ::ExampleReferencingType[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingType(void *p) {
      delete ((::ExampleReferencingType*)p);
   }
   static void deleteArray_ExampleReferencingType(void *p) {
      delete [] ((::ExampleReferencingType*)p);
   }
   static void destruct_ExampleReferencingType(void *p) {
      typedef ::ExampleReferencingType current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingType

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingTypeCollection(void *p) {
      return  p ? new(p) ::ExampleReferencingTypeCollection : new ::ExampleReferencingTypeCollection;
   }
   static void *newArray_ExampleReferencingTypeCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingTypeCollection[nElements] : new ::ExampleReferencingTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingTypeCollection(void *p) {
      delete ((::ExampleReferencingTypeCollection*)p);
   }
   static void deleteArray_ExampleReferencingTypeCollection(void *p) {
      delete [] ((::ExampleReferencingTypeCollection*)p);
   }
   static void destruct_ExampleReferencingTypeCollection(void *p) {
      typedef ::ExampleReferencingTypeCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingTypeCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelationData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationData : new ::ex42::ExampleWithARelationData;
   }
   static void *newArray_ex42cLcLExampleWithARelationData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationData[nElements] : new ::ex42::ExampleWithARelationData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelationData(void *p) {
      delete ((::ex42::ExampleWithARelationData*)p);
   }
   static void deleteArray_ex42cLcLExampleWithARelationData(void *p) {
      delete [] ((::ex42::ExampleWithARelationData*)p);
   }
   static void destruct_ex42cLcLExampleWithARelationData(void *p) {
      typedef ::ex42::ExampleWithARelationData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelationData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex2cLcLNamespaceStruct(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex2::NamespaceStruct : new ::ex2::NamespaceStruct;
   }
   static void *newArray_ex2cLcLNamespaceStruct(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex2::NamespaceStruct[nElements] : new ::ex2::NamespaceStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex2cLcLNamespaceStruct(void *p) {
      delete ((::ex2::NamespaceStruct*)p);
   }
   static void deleteArray_ex2cLcLNamespaceStruct(void *p) {
      delete [] ((::ex2::NamespaceStruct*)p);
   }
   static void destruct_ex2cLcLNamespaceStruct(void *p) {
      typedef ::ex2::NamespaceStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex2::NamespaceStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespaceData(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceData : new ::ex42::ExampleWithNamespaceData;
   }
   static void *newArray_ex42cLcLExampleWithNamespaceData(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceData[nElements] : new ::ex42::ExampleWithNamespaceData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespaceData(void *p) {
      delete ((::ex42::ExampleWithNamespaceData*)p);
   }
   static void deleteArray_ex42cLcLExampleWithNamespaceData(void *p) {
      delete [] ((::ex42::ExampleWithNamespaceData*)p);
   }
   static void destruct_ex42cLcLExampleWithNamespaceData(void *p) {
      typedef ::ex42::ExampleWithNamespaceData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespaceData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespaceObj(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceObj : new ::ex42::ExampleWithNamespaceObj;
   }
   static void *newArray_ex42cLcLExampleWithNamespaceObj(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceObj[nElements] : new ::ex42::ExampleWithNamespaceObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespaceObj(void *p) {
      delete ((::ex42::ExampleWithNamespaceObj*)p);
   }
   static void deleteArray_ex42cLcLExampleWithNamespaceObj(void *p) {
      delete [] ((::ex42::ExampleWithNamespaceObj*)p);
   }
   static void destruct_ex42cLcLExampleWithNamespaceObj(void *p) {
      typedef ::ex42::ExampleWithNamespaceObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespaceObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLConstExampleWithNamespace(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ConstExampleWithNamespace : new ::ex42::ConstExampleWithNamespace;
   }
   static void *newArray_ex42cLcLConstExampleWithNamespace(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ConstExampleWithNamespace[nElements] : new ::ex42::ConstExampleWithNamespace[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLConstExampleWithNamespace(void *p) {
      delete ((::ex42::ConstExampleWithNamespace*)p);
   }
   static void deleteArray_ex42cLcLConstExampleWithNamespace(void *p) {
      delete [] ((::ex42::ConstExampleWithNamespace*)p);
   }
   static void destruct_ex42cLcLConstExampleWithNamespace(void *p) {
      typedef ::ex42::ConstExampleWithNamespace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ConstExampleWithNamespace

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespace(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespace : new ::ex42::ExampleWithNamespace;
   }
   static void *newArray_ex42cLcLExampleWithNamespace(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespace[nElements] : new ::ex42::ExampleWithNamespace[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespace(void *p) {
      delete ((::ex42::ExampleWithNamespace*)p);
   }
   static void deleteArray_ex42cLcLExampleWithNamespace(void *p) {
      delete [] ((::ex42::ExampleWithNamespace*)p);
   }
   static void destruct_ex42cLcLExampleWithNamespace(void *p) {
      typedef ::ex42::ExampleWithNamespace current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespace

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelationObj(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationObj : new ::ex42::ExampleWithARelationObj;
   }
   static void *newArray_ex42cLcLExampleWithARelationObj(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationObj[nElements] : new ::ex42::ExampleWithARelationObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelationObj(void *p) {
      delete ((::ex42::ExampleWithARelationObj*)p);
   }
   static void deleteArray_ex42cLcLExampleWithARelationObj(void *p) {
      delete [] ((::ex42::ExampleWithARelationObj*)p);
   }
   static void destruct_ex42cLcLExampleWithARelationObj(void *p) {
      typedef ::ex42::ExampleWithARelationObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelationObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLConstExampleWithARelation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ConstExampleWithARelation : new ::ex42::ConstExampleWithARelation;
   }
   static void *newArray_ex42cLcLConstExampleWithARelation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ConstExampleWithARelation[nElements] : new ::ex42::ConstExampleWithARelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLConstExampleWithARelation(void *p) {
      delete ((::ex42::ConstExampleWithARelation*)p);
   }
   static void deleteArray_ex42cLcLConstExampleWithARelation(void *p) {
      delete [] ((::ex42::ConstExampleWithARelation*)p);
   }
   static void destruct_ex42cLcLConstExampleWithARelation(void *p) {
      typedef ::ex42::ConstExampleWithARelation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ConstExampleWithARelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelation(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelation : new ::ex42::ExampleWithARelation;
   }
   static void *newArray_ex42cLcLExampleWithARelation(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelation[nElements] : new ::ex42::ExampleWithARelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelation(void *p) {
      delete ((::ex42::ExampleWithARelation*)p);
   }
   static void deleteArray_ex42cLcLExampleWithARelation(void *p) {
      delete [] ((::ex42::ExampleWithARelation*)p);
   }
   static void destruct_ex42cLcLExampleWithARelation(void *p) {
      typedef ::ex42::ExampleWithARelation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelationCollection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationCollection : new ::ex42::ExampleWithARelationCollection;
   }
   static void *newArray_ex42cLcLExampleWithARelationCollection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithARelationCollection[nElements] : new ::ex42::ExampleWithARelationCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelationCollection(void *p) {
      delete ((::ex42::ExampleWithARelationCollection*)p);
   }
   static void deleteArray_ex42cLcLExampleWithARelationCollection(void *p) {
      delete [] ((::ex42::ExampleWithARelationCollection*)p);
   }
   static void destruct_ex42cLcLExampleWithARelationCollection(void *p) {
      typedef ::ex42::ExampleWithARelationCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelationCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_SimpleStruct(void *p) {
      return  p ? new(p) ::SimpleStruct : new ::SimpleStruct;
   }
   static void *newArray_SimpleStruct(Long_t nElements, void *p) {
      return p ? new(p) ::SimpleStruct[nElements] : new ::SimpleStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_SimpleStruct(void *p) {
      delete ((::SimpleStruct*)p);
   }
   static void deleteArray_SimpleStruct(void *p) {
      delete [] ((::SimpleStruct*)p);
   }
   static void destruct_SimpleStruct(void *p) {
      typedef ::SimpleStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::SimpleStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_NotSoSimpleStruct(void *p) {
      return  p ? new(p) ::NotSoSimpleStruct : new ::NotSoSimpleStruct;
   }
   static void *newArray_NotSoSimpleStruct(Long_t nElements, void *p) {
      return p ? new(p) ::NotSoSimpleStruct[nElements] : new ::NotSoSimpleStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_NotSoSimpleStruct(void *p) {
      delete ((::NotSoSimpleStruct*)p);
   }
   static void deleteArray_NotSoSimpleStruct(void *p) {
      delete [] ((::NotSoSimpleStruct*)p);
   }
   static void destruct_NotSoSimpleStruct(void *p) {
      typedef ::NotSoSimpleStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::NotSoSimpleStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayData(void *p) {
      return  p ? new(p) ::ExampleWithArrayData : new ::ExampleWithArrayData;
   }
   static void *newArray_ExampleWithArrayData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayData[nElements] : new ::ExampleWithArrayData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayData(void *p) {
      delete ((::ExampleWithArrayData*)p);
   }
   static void deleteArray_ExampleWithArrayData(void *p) {
      delete [] ((::ExampleWithArrayData*)p);
   }
   static void destruct_ExampleWithArrayData(void *p) {
      typedef ::ExampleWithArrayData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayObj(void *p) {
      return  p ? new(p) ::ExampleWithArrayObj : new ::ExampleWithArrayObj;
   }
   static void *newArray_ExampleWithArrayObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayObj[nElements] : new ::ExampleWithArrayObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayObj(void *p) {
      delete ((::ExampleWithArrayObj*)p);
   }
   static void deleteArray_ExampleWithArrayObj(void *p) {
      delete [] ((::ExampleWithArrayObj*)p);
   }
   static void destruct_ExampleWithArrayObj(void *p) {
      typedef ::ExampleWithArrayObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleWithArray(void *p) {
      return  p ? new(p) ::ConstExampleWithArray : new ::ConstExampleWithArray;
   }
   static void *newArray_ConstExampleWithArray(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleWithArray[nElements] : new ::ConstExampleWithArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleWithArray(void *p) {
      delete ((::ConstExampleWithArray*)p);
   }
   static void deleteArray_ConstExampleWithArray(void *p) {
      delete [] ((::ConstExampleWithArray*)p);
   }
   static void destruct_ConstExampleWithArray(void *p) {
      typedef ::ConstExampleWithArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleWithArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArray(void *p) {
      return  p ? new(p) ::ExampleWithArray : new ::ExampleWithArray;
   }
   static void *newArray_ExampleWithArray(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArray[nElements] : new ::ExampleWithArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArray(void *p) {
      delete ((::ExampleWithArray*)p);
   }
   static void deleteArray_ExampleWithArray(void *p) {
      delete [] ((::ExampleWithArray*)p);
   }
   static void destruct_ExampleWithArray(void *p) {
      typedef ::ExampleWithArray current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayCollection(void *p) {
      return  p ? new(p) ::ExampleWithArrayCollection : new ::ExampleWithArrayCollection;
   }
   static void *newArray_ExampleWithArrayCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayCollection[nElements] : new ::ExampleWithArrayCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayCollection(void *p) {
      delete ((::ExampleWithArrayCollection*)p);
   }
   static void deleteArray_ExampleWithArrayCollection(void *p) {
      delete [] ((::ExampleWithArrayCollection*)p);
   }
   static void destruct_ExampleWithArrayCollection(void *p) {
      typedef ::ExampleWithArrayCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponentData(void *p) {
      return  p ? new(p) ::ExampleWithComponentData : new ::ExampleWithComponentData;
   }
   static void *newArray_ExampleWithComponentData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponentData[nElements] : new ::ExampleWithComponentData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponentData(void *p) {
      delete ((::ExampleWithComponentData*)p);
   }
   static void deleteArray_ExampleWithComponentData(void *p) {
      delete [] ((::ExampleWithComponentData*)p);
   }
   static void destruct_ExampleWithComponentData(void *p) {
      typedef ::ExampleWithComponentData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponentData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponentObj(void *p) {
      return  p ? new(p) ::ExampleWithComponentObj : new ::ExampleWithComponentObj;
   }
   static void *newArray_ExampleWithComponentObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponentObj[nElements] : new ::ExampleWithComponentObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponentObj(void *p) {
      delete ((::ExampleWithComponentObj*)p);
   }
   static void deleteArray_ExampleWithComponentObj(void *p) {
      delete [] ((::ExampleWithComponentObj*)p);
   }
   static void destruct_ExampleWithComponentObj(void *p) {
      typedef ::ExampleWithComponentObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponentObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleWithComponent(void *p) {
      return  p ? new(p) ::ConstExampleWithComponent : new ::ConstExampleWithComponent;
   }
   static void *newArray_ConstExampleWithComponent(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleWithComponent[nElements] : new ::ConstExampleWithComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleWithComponent(void *p) {
      delete ((::ConstExampleWithComponent*)p);
   }
   static void deleteArray_ConstExampleWithComponent(void *p) {
      delete [] ((::ConstExampleWithComponent*)p);
   }
   static void destruct_ConstExampleWithComponent(void *p) {
      typedef ::ConstExampleWithComponent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleWithComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponent(void *p) {
      return  p ? new(p) ::ExampleWithComponent : new ::ExampleWithComponent;
   }
   static void *newArray_ExampleWithComponent(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponent[nElements] : new ::ExampleWithComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponent(void *p) {
      delete ((::ExampleWithComponent*)p);
   }
   static void deleteArray_ExampleWithComponent(void *p) {
      delete [] ((::ExampleWithComponent*)p);
   }
   static void destruct_ExampleWithComponent(void *p) {
      typedef ::ExampleWithComponent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponentCollection(void *p) {
      return  p ? new(p) ::ExampleWithComponentCollection : new ::ExampleWithComponentCollection;
   }
   static void *newArray_ExampleWithComponentCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponentCollection[nElements] : new ::ExampleWithComponentCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponentCollection(void *p) {
      delete ((::ExampleWithComponentCollection*)p);
   }
   static void deleteArray_ExampleWithComponentCollection(void *p) {
      delete [] ((::ExampleWithComponentCollection*)p);
   }
   static void destruct_ExampleWithComponentCollection(void *p) {
      typedef ::ExampleWithComponentCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponentCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespaceCollection(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceCollection : new ::ex42::ExampleWithNamespaceCollection;
   }
   static void *newArray_ex42cLcLExampleWithNamespaceCollection(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex42::ExampleWithNamespaceCollection[nElements] : new ::ex42::ExampleWithNamespaceCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespaceCollection(void *p) {
      delete ((::ex42::ExampleWithNamespaceCollection*)p);
   }
   static void deleteArray_ex42cLcLExampleWithNamespaceCollection(void *p) {
      delete [] ((::ex42::ExampleWithNamespaceCollection*)p);
   }
   static void destruct_ex42cLcLExampleWithNamespaceCollection(void *p) {
      typedef ::ex42::ExampleWithNamespaceCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespaceCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelationData(void *p) {
      return  p ? new(p) ::ExampleWithOneRelationData : new ::ExampleWithOneRelationData;
   }
   static void *newArray_ExampleWithOneRelationData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelationData[nElements] : new ::ExampleWithOneRelationData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelationData(void *p) {
      delete ((::ExampleWithOneRelationData*)p);
   }
   static void deleteArray_ExampleWithOneRelationData(void *p) {
      delete [] ((::ExampleWithOneRelationData*)p);
   }
   static void destruct_ExampleWithOneRelationData(void *p) {
      typedef ::ExampleWithOneRelationData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelationData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelationObj(void *p) {
      return  p ? new(p) ::ExampleWithOneRelationObj : new ::ExampleWithOneRelationObj;
   }
   static void *newArray_ExampleWithOneRelationObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelationObj[nElements] : new ::ExampleWithOneRelationObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelationObj(void *p) {
      delete ((::ExampleWithOneRelationObj*)p);
   }
   static void deleteArray_ExampleWithOneRelationObj(void *p) {
      delete [] ((::ExampleWithOneRelationObj*)p);
   }
   static void destruct_ExampleWithOneRelationObj(void *p) {
      typedef ::ExampleWithOneRelationObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelationObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleWithOneRelation(void *p) {
      return  p ? new(p) ::ConstExampleWithOneRelation : new ::ConstExampleWithOneRelation;
   }
   static void *newArray_ConstExampleWithOneRelation(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleWithOneRelation[nElements] : new ::ConstExampleWithOneRelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleWithOneRelation(void *p) {
      delete ((::ConstExampleWithOneRelation*)p);
   }
   static void deleteArray_ConstExampleWithOneRelation(void *p) {
      delete [] ((::ConstExampleWithOneRelation*)p);
   }
   static void destruct_ConstExampleWithOneRelation(void *p) {
      typedef ::ConstExampleWithOneRelation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleWithOneRelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelation(void *p) {
      return  p ? new(p) ::ExampleWithOneRelation : new ::ExampleWithOneRelation;
   }
   static void *newArray_ExampleWithOneRelation(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelation[nElements] : new ::ExampleWithOneRelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelation(void *p) {
      delete ((::ExampleWithOneRelation*)p);
   }
   static void deleteArray_ExampleWithOneRelation(void *p) {
      delete [] ((::ExampleWithOneRelation*)p);
   }
   static void destruct_ExampleWithOneRelation(void *p) {
      typedef ::ExampleWithOneRelation current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelationCollection(void *p) {
      return  p ? new(p) ::ExampleWithOneRelationCollection : new ::ExampleWithOneRelationCollection;
   }
   static void *newArray_ExampleWithOneRelationCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelationCollection[nElements] : new ::ExampleWithOneRelationCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelationCollection(void *p) {
      delete ((::ExampleWithOneRelationCollection*)p);
   }
   static void deleteArray_ExampleWithOneRelationCollection(void *p) {
      delete [] ((::ExampleWithOneRelationCollection*)p);
   }
   static void destruct_ExampleWithOneRelationCollection(void *p) {
      typedef ::ExampleWithOneRelationCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelationCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithStringData(void *p) {
      return  p ? new(p) ::ExampleWithStringData : new ::ExampleWithStringData;
   }
   static void *newArray_ExampleWithStringData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithStringData[nElements] : new ::ExampleWithStringData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithStringData(void *p) {
      delete ((::ExampleWithStringData*)p);
   }
   static void deleteArray_ExampleWithStringData(void *p) {
      delete [] ((::ExampleWithStringData*)p);
   }
   static void destruct_ExampleWithStringData(void *p) {
      typedef ::ExampleWithStringData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithStringData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithStringObj(void *p) {
      return  p ? new(p) ::ExampleWithStringObj : new ::ExampleWithStringObj;
   }
   static void *newArray_ExampleWithStringObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithStringObj[nElements] : new ::ExampleWithStringObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithStringObj(void *p) {
      delete ((::ExampleWithStringObj*)p);
   }
   static void deleteArray_ExampleWithStringObj(void *p) {
      delete [] ((::ExampleWithStringObj*)p);
   }
   static void destruct_ExampleWithStringObj(void *p) {
      typedef ::ExampleWithStringObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithStringObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleWithString(void *p) {
      return  p ? new(p) ::ConstExampleWithString : new ::ConstExampleWithString;
   }
   static void *newArray_ConstExampleWithString(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleWithString[nElements] : new ::ConstExampleWithString[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleWithString(void *p) {
      delete ((::ConstExampleWithString*)p);
   }
   static void deleteArray_ConstExampleWithString(void *p) {
      delete [] ((::ConstExampleWithString*)p);
   }
   static void destruct_ConstExampleWithString(void *p) {
      typedef ::ConstExampleWithString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleWithString

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithString(void *p) {
      return  p ? new(p) ::ExampleWithString : new ::ExampleWithString;
   }
   static void *newArray_ExampleWithString(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithString[nElements] : new ::ExampleWithString[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithString(void *p) {
      delete ((::ExampleWithString*)p);
   }
   static void deleteArray_ExampleWithString(void *p) {
      delete [] ((::ExampleWithString*)p);
   }
   static void destruct_ExampleWithString(void *p) {
      typedef ::ExampleWithString current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithString

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithStringCollection(void *p) {
      return  p ? new(p) ::ExampleWithStringCollection : new ::ExampleWithStringCollection;
   }
   static void *newArray_ExampleWithStringCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithStringCollection[nElements] : new ::ExampleWithStringCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithStringCollection(void *p) {
      delete ((::ExampleWithStringCollection*)p);
   }
   static void deleteArray_ExampleWithStringCollection(void *p) {
      delete [] ((::ExampleWithStringCollection*)p);
   }
   static void destruct_ExampleWithStringCollection(void *p) {
      typedef ::ExampleWithStringCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithStringCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMemberData(void *p) {
      return  p ? new(p) ::ExampleWithVectorMemberData : new ::ExampleWithVectorMemberData;
   }
   static void *newArray_ExampleWithVectorMemberData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMemberData[nElements] : new ::ExampleWithVectorMemberData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMemberData(void *p) {
      delete ((::ExampleWithVectorMemberData*)p);
   }
   static void deleteArray_ExampleWithVectorMemberData(void *p) {
      delete [] ((::ExampleWithVectorMemberData*)p);
   }
   static void destruct_ExampleWithVectorMemberData(void *p) {
      typedef ::ExampleWithVectorMemberData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMemberData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMemberObj(void *p) {
      return  p ? new(p) ::ExampleWithVectorMemberObj : new ::ExampleWithVectorMemberObj;
   }
   static void *newArray_ExampleWithVectorMemberObj(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMemberObj[nElements] : new ::ExampleWithVectorMemberObj[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMemberObj(void *p) {
      delete ((::ExampleWithVectorMemberObj*)p);
   }
   static void deleteArray_ExampleWithVectorMemberObj(void *p) {
      delete [] ((::ExampleWithVectorMemberObj*)p);
   }
   static void destruct_ExampleWithVectorMemberObj(void *p) {
      typedef ::ExampleWithVectorMemberObj current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMemberObj

namespace ROOT {
   // Wrappers around operator new
   static void *new_ConstExampleWithVectorMember(void *p) {
      return  p ? new(p) ::ConstExampleWithVectorMember : new ::ConstExampleWithVectorMember;
   }
   static void *newArray_ConstExampleWithVectorMember(Long_t nElements, void *p) {
      return p ? new(p) ::ConstExampleWithVectorMember[nElements] : new ::ConstExampleWithVectorMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_ConstExampleWithVectorMember(void *p) {
      delete ((::ConstExampleWithVectorMember*)p);
   }
   static void deleteArray_ConstExampleWithVectorMember(void *p) {
      delete [] ((::ConstExampleWithVectorMember*)p);
   }
   static void destruct_ConstExampleWithVectorMember(void *p) {
      typedef ::ConstExampleWithVectorMember current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ConstExampleWithVectorMember

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMember(void *p) {
      return  p ? new(p) ::ExampleWithVectorMember : new ::ExampleWithVectorMember;
   }
   static void *newArray_ExampleWithVectorMember(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMember[nElements] : new ::ExampleWithVectorMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMember(void *p) {
      delete ((::ExampleWithVectorMember*)p);
   }
   static void deleteArray_ExampleWithVectorMember(void *p) {
      delete [] ((::ExampleWithVectorMember*)p);
   }
   static void destruct_ExampleWithVectorMember(void *p) {
      typedef ::ExampleWithVectorMember current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMember

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMemberCollection(void *p) {
      return  p ? new(p) ::ExampleWithVectorMemberCollection : new ::ExampleWithVectorMemberCollection;
   }
   static void *newArray_ExampleWithVectorMemberCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMemberCollection[nElements] : new ::ExampleWithVectorMemberCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMemberCollection(void *p) {
      delete ((::ExampleWithVectorMemberCollection*)p);
   }
   static void deleteArray_ExampleWithVectorMemberCollection(void *p) {
      delete [] ((::ExampleWithVectorMemberCollection*)p);
   }
   static void destruct_ExampleWithVectorMemberCollection(void *p) {
      typedef ::ExampleWithVectorMemberCollection current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMemberCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex2::NamespaceInNamespaceStruct : new ::ex2::NamespaceInNamespaceStruct;
   }
   static void *newArray_ex2cLcLNamespaceInNamespaceStruct(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::ex2::NamespaceInNamespaceStruct[nElements] : new ::ex2::NamespaceInNamespaceStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      delete ((::ex2::NamespaceInNamespaceStruct*)p);
   }
   static void deleteArray_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      delete [] ((::ex2::NamespaceInNamespaceStruct*)p);
   }
   static void destruct_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      typedef ::ex2::NamespaceInNamespaceStruct current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ex2::NamespaceInNamespaceStruct

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithNamespaceObjgR_Dictionary();
   static void vectorlEex42cLcLExampleWithNamespaceObjgR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceObjgR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithNamespaceObj>*)
   {
      vector<ex42::ExampleWithNamespaceObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithNamespaceObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithNamespaceObj>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithNamespaceObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithNamespaceObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithNamespaceObj>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithNamespaceObjgR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithNamespaceObjgR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithNamespaceObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithNamespaceObjgR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithNamespaceObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithNamespaceObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithNamespaceObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceObj>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithNamespaceObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithNamespaceObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceObj> : new vector<ex42::ExampleWithNamespaceObj>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceObj>[nElements] : new vector<ex42::ExampleWithNamespaceObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p) {
      delete ((vector<ex42::ExampleWithNamespaceObj>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p) {
      delete [] ((vector<ex42::ExampleWithNamespaceObj>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithNamespaceObjgR(void *p) {
      typedef vector<ex42::ExampleWithNamespaceObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithNamespaceObj>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary();
   static void vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceDatagR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithNamespaceData>*)
   {
      vector<ex42::ExampleWithNamespaceData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithNamespaceData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithNamespaceData>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithNamespaceData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithNamespaceData>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithNamespaceData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceData>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceData> : new vector<ex42::ExampleWithNamespaceData>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceData>[nElements] : new vector<ex42::ExampleWithNamespaceData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      delete ((vector<ex42::ExampleWithNamespaceData>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      delete [] ((vector<ex42::ExampleWithNamespaceData>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      typedef vector<ex42::ExampleWithNamespaceData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithNamespaceData>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithNamespaceCollectiongR_Dictionary();
   static void vectorlEex42cLcLExampleWithNamespaceCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithNamespaceCollection>*)
   {
      vector<ex42::ExampleWithNamespaceCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithNamespaceCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithNamespaceCollection>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithNamespaceCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithNamespaceCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithNamespaceCollection>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithNamespaceCollectiongR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithNamespaceCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithNamespaceCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithNamespaceCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithNamespaceCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespaceCollection>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithNamespaceCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithNamespaceCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceCollection> : new vector<ex42::ExampleWithNamespaceCollection>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespaceCollection>[nElements] : new vector<ex42::ExampleWithNamespaceCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p) {
      delete ((vector<ex42::ExampleWithNamespaceCollection>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p) {
      delete [] ((vector<ex42::ExampleWithNamespaceCollection>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithNamespaceCollectiongR(void *p) {
      typedef vector<ex42::ExampleWithNamespaceCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithNamespaceCollection>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithNamespacegR_Dictionary();
   static void vectorlEex42cLcLExampleWithNamespacegR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithNamespacegR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithNamespacegR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithNamespacegR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithNamespacegR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithNamespacegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithNamespace>*)
   {
      vector<ex42::ExampleWithNamespace> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithNamespace>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithNamespace>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithNamespace>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithNamespacegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithNamespace>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithNamespacegR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithNamespacegR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithNamespacegR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithNamespacegR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithNamespacegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithNamespace> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespace>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithNamespacegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithNamespace>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithNamespacegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithNamespacegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithNamespacegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespace> : new vector<ex42::ExampleWithNamespace>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithNamespacegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithNamespace>[nElements] : new vector<ex42::ExampleWithNamespace>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithNamespacegR(void *p) {
      delete ((vector<ex42::ExampleWithNamespace>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithNamespacegR(void *p) {
      delete [] ((vector<ex42::ExampleWithNamespace>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithNamespacegR(void *p) {
      typedef vector<ex42::ExampleWithNamespace> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithNamespace>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithARelationObjgR_Dictionary();
   static void vectorlEex42cLcLExampleWithARelationObjgR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithARelationObjgR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithARelationObjgR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithARelationObjgR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithARelationObjgR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithARelationObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithARelationObj>*)
   {
      vector<ex42::ExampleWithARelationObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithARelationObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithARelationObj>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithARelationObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithARelationObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithARelationObj>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithARelationObjgR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithARelationObjgR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithARelationObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithARelationObjgR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithARelationObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithARelationObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithARelationObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationObj>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithARelationObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithARelationObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithARelationObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationObj> : new vector<ex42::ExampleWithARelationObj>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithARelationObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationObj>[nElements] : new vector<ex42::ExampleWithARelationObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithARelationObjgR(void *p) {
      delete ((vector<ex42::ExampleWithARelationObj>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithARelationObjgR(void *p) {
      delete [] ((vector<ex42::ExampleWithARelationObj>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithARelationObjgR(void *p) {
      typedef vector<ex42::ExampleWithARelationObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithARelationObj>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithARelationDatagR_Dictionary();
   static void vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithARelationDatagR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithARelationDatagR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithARelationDatagR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithARelationDatagR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithARelationDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithARelationData>*)
   {
      vector<ex42::ExampleWithARelationData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithARelationData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithARelationData>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithARelationData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithARelationDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithARelationData>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithARelationData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithARelationDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationData>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationData> : new vector<ex42::ExampleWithARelationData>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithARelationDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationData>[nElements] : new vector<ex42::ExampleWithARelationData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      delete ((vector<ex42::ExampleWithARelationData>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      delete [] ((vector<ex42::ExampleWithARelationData>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      typedef vector<ex42::ExampleWithARelationData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithARelationData>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithARelationCollectiongR_Dictionary();
   static void vectorlEex42cLcLExampleWithARelationCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithARelationCollectiongR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithARelationCollection>*)
   {
      vector<ex42::ExampleWithARelationCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithARelationCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithARelationCollection>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithARelationCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithARelationCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithARelationCollection>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithARelationCollectiongR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithARelationCollectiongR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithARelationCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithARelationCollectiongR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithARelationCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithARelationCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithARelationCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelationCollection>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithARelationCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithARelationCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationCollection> : new vector<ex42::ExampleWithARelationCollection>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithARelationCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelationCollection>[nElements] : new vector<ex42::ExampleWithARelationCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p) {
      delete ((vector<ex42::ExampleWithARelationCollection>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p) {
      delete [] ((vector<ex42::ExampleWithARelationCollection>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithARelationCollectiongR(void *p) {
      typedef vector<ex42::ExampleWithARelationCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithARelationCollection>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithARelationgR_Dictionary();
   static void vectorlEex42cLcLExampleWithARelationgR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithARelationgR(void *p = 0);
   static void *newArray_vectorlEex42cLcLExampleWithARelationgR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithARelationgR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithARelationgR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithARelationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithARelation>*)
   {
      vector<ex42::ExampleWithARelation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithARelation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithARelation>", -2, "vector", 386,
                  typeid(vector<ex42::ExampleWithARelation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithARelationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithARelation>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithARelationgR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithARelationgR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithARelationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithARelationgR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithARelationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithARelation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithARelationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ExampleWithARelation>*)0x0)->GetClass();
      vectorlEex42cLcLExampleWithARelationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithARelationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithARelationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelation> : new vector<ex42::ExampleWithARelation>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithARelationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ExampleWithARelation>[nElements] : new vector<ex42::ExampleWithARelation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithARelationgR(void *p) {
      delete ((vector<ex42::ExampleWithARelation>*)p);
   }
   static void deleteArray_vectorlEex42cLcLExampleWithARelationgR(void *p) {
      delete [] ((vector<ex42::ExampleWithARelation>*)p);
   }
   static void destruct_vectorlEex42cLcLExampleWithARelationgR(void *p) {
      typedef vector<ex42::ExampleWithARelation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithARelation>

namespace ROOT {
   static TClass *vectorlEex42cLcLConstExampleWithNamespacegR_Dictionary();
   static void vectorlEex42cLcLConstExampleWithNamespacegR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLConstExampleWithNamespacegR(void *p = 0);
   static void *newArray_vectorlEex42cLcLConstExampleWithNamespacegR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLConstExampleWithNamespacegR(void *p);
   static void deleteArray_vectorlEex42cLcLConstExampleWithNamespacegR(void *p);
   static void destruct_vectorlEex42cLcLConstExampleWithNamespacegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ConstExampleWithNamespace>*)
   {
      vector<ex42::ConstExampleWithNamespace> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ConstExampleWithNamespace>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ConstExampleWithNamespace>", -2, "vector", 386,
                  typeid(vector<ex42::ConstExampleWithNamespace>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLConstExampleWithNamespacegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ConstExampleWithNamespace>) );
      instance.SetNew(&new_vectorlEex42cLcLConstExampleWithNamespacegR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLConstExampleWithNamespacegR);
      instance.SetDelete(&delete_vectorlEex42cLcLConstExampleWithNamespacegR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLConstExampleWithNamespacegR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLConstExampleWithNamespacegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ConstExampleWithNamespace> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ConstExampleWithNamespace>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLConstExampleWithNamespacegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ConstExampleWithNamespace>*)0x0)->GetClass();
      vectorlEex42cLcLConstExampleWithNamespacegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLConstExampleWithNamespacegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLConstExampleWithNamespacegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ConstExampleWithNamespace> : new vector<ex42::ConstExampleWithNamespace>;
   }
   static void *newArray_vectorlEex42cLcLConstExampleWithNamespacegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ConstExampleWithNamespace>[nElements] : new vector<ex42::ConstExampleWithNamespace>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLConstExampleWithNamespacegR(void *p) {
      delete ((vector<ex42::ConstExampleWithNamespace>*)p);
   }
   static void deleteArray_vectorlEex42cLcLConstExampleWithNamespacegR(void *p) {
      delete [] ((vector<ex42::ConstExampleWithNamespace>*)p);
   }
   static void destruct_vectorlEex42cLcLConstExampleWithNamespacegR(void *p) {
      typedef vector<ex42::ConstExampleWithNamespace> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ConstExampleWithNamespace>

namespace ROOT {
   static TClass *vectorlEex42cLcLConstExampleWithARelationgR_Dictionary();
   static void vectorlEex42cLcLConstExampleWithARelationgR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLConstExampleWithARelationgR(void *p = 0);
   static void *newArray_vectorlEex42cLcLConstExampleWithARelationgR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLConstExampleWithARelationgR(void *p);
   static void deleteArray_vectorlEex42cLcLConstExampleWithARelationgR(void *p);
   static void destruct_vectorlEex42cLcLConstExampleWithARelationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ConstExampleWithARelation>*)
   {
      vector<ex42::ConstExampleWithARelation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ConstExampleWithARelation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ConstExampleWithARelation>", -2, "vector", 386,
                  typeid(vector<ex42::ConstExampleWithARelation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLConstExampleWithARelationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ConstExampleWithARelation>) );
      instance.SetNew(&new_vectorlEex42cLcLConstExampleWithARelationgR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLConstExampleWithARelationgR);
      instance.SetDelete(&delete_vectorlEex42cLcLConstExampleWithARelationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLConstExampleWithARelationgR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLConstExampleWithARelationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ConstExampleWithARelation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex42::ConstExampleWithARelation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLConstExampleWithARelationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex42::ConstExampleWithARelation>*)0x0)->GetClass();
      vectorlEex42cLcLConstExampleWithARelationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLConstExampleWithARelationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLConstExampleWithARelationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ConstExampleWithARelation> : new vector<ex42::ConstExampleWithARelation>;
   }
   static void *newArray_vectorlEex42cLcLConstExampleWithARelationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex42::ConstExampleWithARelation>[nElements] : new vector<ex42::ConstExampleWithARelation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLConstExampleWithARelationgR(void *p) {
      delete ((vector<ex42::ConstExampleWithARelation>*)p);
   }
   static void deleteArray_vectorlEex42cLcLConstExampleWithARelationgR(void *p) {
      delete [] ((vector<ex42::ConstExampleWithARelation>*)p);
   }
   static void destruct_vectorlEex42cLcLConstExampleWithARelationgR(void *p) {
      typedef vector<ex42::ConstExampleWithARelation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ConstExampleWithARelation>

namespace ROOT {
   static TClass *vectorlEex2cLcLNamespaceStructgR_Dictionary();
   static void vectorlEex2cLcLNamespaceStructgR_TClassManip(TClass*);
   static void *new_vectorlEex2cLcLNamespaceStructgR(void *p = 0);
   static void *newArray_vectorlEex2cLcLNamespaceStructgR(Long_t size, void *p);
   static void delete_vectorlEex2cLcLNamespaceStructgR(void *p);
   static void deleteArray_vectorlEex2cLcLNamespaceStructgR(void *p);
   static void destruct_vectorlEex2cLcLNamespaceStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex2::NamespaceStruct>*)
   {
      vector<ex2::NamespaceStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex2::NamespaceStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex2::NamespaceStruct>", -2, "vector", 386,
                  typeid(vector<ex2::NamespaceStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex2cLcLNamespaceStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex2::NamespaceStruct>) );
      instance.SetNew(&new_vectorlEex2cLcLNamespaceStructgR);
      instance.SetNewArray(&newArray_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDelete(&delete_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDestructor(&destruct_vectorlEex2cLcLNamespaceStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex2::NamespaceStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex2::NamespaceStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex2cLcLNamespaceStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex2::NamespaceStruct>*)0x0)->GetClass();
      vectorlEex2cLcLNamespaceStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex2cLcLNamespaceStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex2cLcLNamespaceStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex2::NamespaceStruct> : new vector<ex2::NamespaceStruct>;
   }
   static void *newArray_vectorlEex2cLcLNamespaceStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex2::NamespaceStruct>[nElements] : new vector<ex2::NamespaceStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex2cLcLNamespaceStructgR(void *p) {
      delete ((vector<ex2::NamespaceStruct>*)p);
   }
   static void deleteArray_vectorlEex2cLcLNamespaceStructgR(void *p) {
      delete [] ((vector<ex2::NamespaceStruct>*)p);
   }
   static void destruct_vectorlEex2cLcLNamespaceStructgR(void *p) {
      typedef vector<ex2::NamespaceStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex2::NamespaceStruct>

namespace ROOT {
   static TClass *vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary();
   static void vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(TClass*);
   static void *new_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p = 0);
   static void *newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(Long_t size, void *p);
   static void delete_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);
   static void deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);
   static void destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex2::NamespaceInNamespaceStruct>*)
   {
      vector<ex2::NamespaceInNamespaceStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex2::NamespaceInNamespaceStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex2::NamespaceInNamespaceStruct>", -2, "vector", 386,
                  typeid(vector<ex2::NamespaceInNamespaceStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex2::NamespaceInNamespaceStruct>) );
      instance.SetNew(&new_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetNewArray(&newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDelete(&delete_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDestructor(&destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex2::NamespaceInNamespaceStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ex2::NamespaceInNamespaceStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ex2::NamespaceInNamespaceStruct>*)0x0)->GetClass();
      vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex2::NamespaceInNamespaceStruct> : new vector<ex2::NamespaceInNamespaceStruct>;
   }
   static void *newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ex2::NamespaceInNamespaceStruct>[nElements] : new vector<ex2::NamespaceInNamespaceStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      delete ((vector<ex2::NamespaceInNamespaceStruct>*)p);
   }
   static void deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      delete [] ((vector<ex2::NamespaceInNamespaceStruct>*)p);
   }
   static void destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      typedef vector<ex2::NamespaceInNamespaceStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ex2::NamespaceInNamespaceStruct>

namespace ROOT {
   static TClass *vectorlESimpleStructgR_Dictionary();
   static void vectorlESimpleStructgR_TClassManip(TClass*);
   static void *new_vectorlESimpleStructgR(void *p = 0);
   static void *newArray_vectorlESimpleStructgR(Long_t size, void *p);
   static void delete_vectorlESimpleStructgR(void *p);
   static void deleteArray_vectorlESimpleStructgR(void *p);
   static void destruct_vectorlESimpleStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimpleStruct>*)
   {
      vector<SimpleStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimpleStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimpleStruct>", -2, "vector", 386,
                  typeid(vector<SimpleStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimpleStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SimpleStruct>) );
      instance.SetNew(&new_vectorlESimpleStructgR);
      instance.SetNewArray(&newArray_vectorlESimpleStructgR);
      instance.SetDelete(&delete_vectorlESimpleStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimpleStructgR);
      instance.SetDestructor(&destruct_vectorlESimpleStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimpleStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<SimpleStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimpleStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<SimpleStruct>*)0x0)->GetClass();
      vectorlESimpleStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimpleStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimpleStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimpleStruct> : new vector<SimpleStruct>;
   }
   static void *newArray_vectorlESimpleStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<SimpleStruct>[nElements] : new vector<SimpleStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimpleStructgR(void *p) {
      delete ((vector<SimpleStruct>*)p);
   }
   static void deleteArray_vectorlESimpleStructgR(void *p) {
      delete [] ((vector<SimpleStruct>*)p);
   }
   static void destruct_vectorlESimpleStructgR(void *p) {
      typedef vector<SimpleStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<SimpleStruct>

namespace ROOT {
   static TClass *vectorlENotSoSimpleStructgR_Dictionary();
   static void vectorlENotSoSimpleStructgR_TClassManip(TClass*);
   static void *new_vectorlENotSoSimpleStructgR(void *p = 0);
   static void *newArray_vectorlENotSoSimpleStructgR(Long_t size, void *p);
   static void delete_vectorlENotSoSimpleStructgR(void *p);
   static void deleteArray_vectorlENotSoSimpleStructgR(void *p);
   static void destruct_vectorlENotSoSimpleStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NotSoSimpleStruct>*)
   {
      vector<NotSoSimpleStruct> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NotSoSimpleStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NotSoSimpleStruct>", -2, "vector", 386,
                  typeid(vector<NotSoSimpleStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENotSoSimpleStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<NotSoSimpleStruct>) );
      instance.SetNew(&new_vectorlENotSoSimpleStructgR);
      instance.SetNewArray(&newArray_vectorlENotSoSimpleStructgR);
      instance.SetDelete(&delete_vectorlENotSoSimpleStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlENotSoSimpleStructgR);
      instance.SetDestructor(&destruct_vectorlENotSoSimpleStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NotSoSimpleStruct> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<NotSoSimpleStruct>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENotSoSimpleStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<NotSoSimpleStruct>*)0x0)->GetClass();
      vectorlENotSoSimpleStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENotSoSimpleStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENotSoSimpleStructgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NotSoSimpleStruct> : new vector<NotSoSimpleStruct>;
   }
   static void *newArray_vectorlENotSoSimpleStructgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<NotSoSimpleStruct>[nElements] : new vector<NotSoSimpleStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENotSoSimpleStructgR(void *p) {
      delete ((vector<NotSoSimpleStruct>*)p);
   }
   static void deleteArray_vectorlENotSoSimpleStructgR(void *p) {
      delete [] ((vector<NotSoSimpleStruct>*)p);
   }
   static void destruct_vectorlENotSoSimpleStructgR(void *p) {
      typedef vector<NotSoSimpleStruct> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<NotSoSimpleStruct>

namespace ROOT {
   static TClass *vectorlEExampleWithVectorMemberObjgR_Dictionary();
   static void vectorlEExampleWithVectorMemberObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithVectorMemberObjgR(void *p = 0);
   static void *newArray_vectorlEExampleWithVectorMemberObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithVectorMemberObjgR(void *p);
   static void deleteArray_vectorlEExampleWithVectorMemberObjgR(void *p);
   static void destruct_vectorlEExampleWithVectorMemberObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithVectorMemberObj>*)
   {
      vector<ExampleWithVectorMemberObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithVectorMemberObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithVectorMemberObj>", -2, "vector", 386,
                  typeid(vector<ExampleWithVectorMemberObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithVectorMemberObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithVectorMemberObj>) );
      instance.SetNew(&new_vectorlEExampleWithVectorMemberObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithVectorMemberObjgR);
      instance.SetDelete(&delete_vectorlEExampleWithVectorMemberObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithVectorMemberObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithVectorMemberObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithVectorMemberObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithVectorMemberObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberObj>*)0x0)->GetClass();
      vectorlEExampleWithVectorMemberObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithVectorMemberObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithVectorMemberObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberObj> : new vector<ExampleWithVectorMemberObj>;
   }
   static void *newArray_vectorlEExampleWithVectorMemberObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberObj>[nElements] : new vector<ExampleWithVectorMemberObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithVectorMemberObjgR(void *p) {
      delete ((vector<ExampleWithVectorMemberObj>*)p);
   }
   static void deleteArray_vectorlEExampleWithVectorMemberObjgR(void *p) {
      delete [] ((vector<ExampleWithVectorMemberObj>*)p);
   }
   static void destruct_vectorlEExampleWithVectorMemberObjgR(void *p) {
      typedef vector<ExampleWithVectorMemberObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithVectorMemberObj>

namespace ROOT {
   static TClass *vectorlEExampleWithVectorMemberDatagR_Dictionary();
   static void vectorlEExampleWithVectorMemberDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithVectorMemberDatagR(void *p = 0);
   static void *newArray_vectorlEExampleWithVectorMemberDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithVectorMemberDatagR(void *p);
   static void deleteArray_vectorlEExampleWithVectorMemberDatagR(void *p);
   static void destruct_vectorlEExampleWithVectorMemberDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithVectorMemberData>*)
   {
      vector<ExampleWithVectorMemberData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithVectorMemberData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithVectorMemberData>", -2, "vector", 386,
                  typeid(vector<ExampleWithVectorMemberData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithVectorMemberDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithVectorMemberData>) );
      instance.SetNew(&new_vectorlEExampleWithVectorMemberDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithVectorMemberDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithVectorMemberData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithVectorMemberDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberData>*)0x0)->GetClass();
      vectorlEExampleWithVectorMemberDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithVectorMemberDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithVectorMemberDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberData> : new vector<ExampleWithVectorMemberData>;
   }
   static void *newArray_vectorlEExampleWithVectorMemberDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberData>[nElements] : new vector<ExampleWithVectorMemberData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithVectorMemberDatagR(void *p) {
      delete ((vector<ExampleWithVectorMemberData>*)p);
   }
   static void deleteArray_vectorlEExampleWithVectorMemberDatagR(void *p) {
      delete [] ((vector<ExampleWithVectorMemberData>*)p);
   }
   static void destruct_vectorlEExampleWithVectorMemberDatagR(void *p) {
      typedef vector<ExampleWithVectorMemberData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithVectorMemberData>

namespace ROOT {
   static TClass *vectorlEExampleWithVectorMemberCollectiongR_Dictionary();
   static void vectorlEExampleWithVectorMemberCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithVectorMemberCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleWithVectorMemberCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleWithVectorMemberCollectiongR(void *p);
   static void deleteArray_vectorlEExampleWithVectorMemberCollectiongR(void *p);
   static void destruct_vectorlEExampleWithVectorMemberCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithVectorMemberCollection>*)
   {
      vector<ExampleWithVectorMemberCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithVectorMemberCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithVectorMemberCollection>", -2, "vector", 386,
                  typeid(vector<ExampleWithVectorMemberCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithVectorMemberCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithVectorMemberCollection>) );
      instance.SetNew(&new_vectorlEExampleWithVectorMemberCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleWithVectorMemberCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleWithVectorMemberCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithVectorMemberCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleWithVectorMemberCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithVectorMemberCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithVectorMemberCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithVectorMemberCollection>*)0x0)->GetClass();
      vectorlEExampleWithVectorMemberCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithVectorMemberCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithVectorMemberCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberCollection> : new vector<ExampleWithVectorMemberCollection>;
   }
   static void *newArray_vectorlEExampleWithVectorMemberCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMemberCollection>[nElements] : new vector<ExampleWithVectorMemberCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithVectorMemberCollectiongR(void *p) {
      delete ((vector<ExampleWithVectorMemberCollection>*)p);
   }
   static void deleteArray_vectorlEExampleWithVectorMemberCollectiongR(void *p) {
      delete [] ((vector<ExampleWithVectorMemberCollection>*)p);
   }
   static void destruct_vectorlEExampleWithVectorMemberCollectiongR(void *p) {
      typedef vector<ExampleWithVectorMemberCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithVectorMemberCollection>

namespace ROOT {
   static TClass *vectorlEExampleWithVectorMembergR_Dictionary();
   static void vectorlEExampleWithVectorMembergR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithVectorMembergR(void *p = 0);
   static void *newArray_vectorlEExampleWithVectorMembergR(Long_t size, void *p);
   static void delete_vectorlEExampleWithVectorMembergR(void *p);
   static void deleteArray_vectorlEExampleWithVectorMembergR(void *p);
   static void destruct_vectorlEExampleWithVectorMembergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithVectorMember>*)
   {
      vector<ExampleWithVectorMember> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithVectorMember>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithVectorMember>", -2, "vector", 386,
                  typeid(vector<ExampleWithVectorMember>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithVectorMembergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithVectorMember>) );
      instance.SetNew(&new_vectorlEExampleWithVectorMembergR);
      instance.SetNewArray(&newArray_vectorlEExampleWithVectorMembergR);
      instance.SetDelete(&delete_vectorlEExampleWithVectorMembergR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithVectorMembergR);
      instance.SetDestructor(&destruct_vectorlEExampleWithVectorMembergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithVectorMember> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithVectorMember>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithVectorMembergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithVectorMember>*)0x0)->GetClass();
      vectorlEExampleWithVectorMembergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithVectorMembergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithVectorMembergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMember> : new vector<ExampleWithVectorMember>;
   }
   static void *newArray_vectorlEExampleWithVectorMembergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithVectorMember>[nElements] : new vector<ExampleWithVectorMember>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithVectorMembergR(void *p) {
      delete ((vector<ExampleWithVectorMember>*)p);
   }
   static void deleteArray_vectorlEExampleWithVectorMembergR(void *p) {
      delete [] ((vector<ExampleWithVectorMember>*)p);
   }
   static void destruct_vectorlEExampleWithVectorMembergR(void *p) {
      typedef vector<ExampleWithVectorMember> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithVectorMember>

namespace ROOT {
   static TClass *vectorlEExampleWithStringObjgR_Dictionary();
   static void vectorlEExampleWithStringObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithStringObjgR(void *p = 0);
   static void *newArray_vectorlEExampleWithStringObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithStringObjgR(void *p);
   static void deleteArray_vectorlEExampleWithStringObjgR(void *p);
   static void destruct_vectorlEExampleWithStringObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithStringObj>*)
   {
      vector<ExampleWithStringObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithStringObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithStringObj>", -2, "vector", 386,
                  typeid(vector<ExampleWithStringObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithStringObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithStringObj>) );
      instance.SetNew(&new_vectorlEExampleWithStringObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithStringObjgR);
      instance.SetDelete(&delete_vectorlEExampleWithStringObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithStringObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithStringObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithStringObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithStringObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithStringObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithStringObj>*)0x0)->GetClass();
      vectorlEExampleWithStringObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithStringObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithStringObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringObj> : new vector<ExampleWithStringObj>;
   }
   static void *newArray_vectorlEExampleWithStringObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringObj>[nElements] : new vector<ExampleWithStringObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithStringObjgR(void *p) {
      delete ((vector<ExampleWithStringObj>*)p);
   }
   static void deleteArray_vectorlEExampleWithStringObjgR(void *p) {
      delete [] ((vector<ExampleWithStringObj>*)p);
   }
   static void destruct_vectorlEExampleWithStringObjgR(void *p) {
      typedef vector<ExampleWithStringObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithStringObj>

namespace ROOT {
   static TClass *vectorlEExampleWithStringDatagR_Dictionary();
   static void vectorlEExampleWithStringDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithStringDatagR(void *p = 0);
   static void *newArray_vectorlEExampleWithStringDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithStringDatagR(void *p);
   static void deleteArray_vectorlEExampleWithStringDatagR(void *p);
   static void destruct_vectorlEExampleWithStringDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithStringData>*)
   {
      vector<ExampleWithStringData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithStringData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithStringData>", -2, "vector", 386,
                  typeid(vector<ExampleWithStringData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithStringDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithStringData>) );
      instance.SetNew(&new_vectorlEExampleWithStringDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithStringDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithStringDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithStringDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithStringDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithStringData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithStringData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithStringDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithStringData>*)0x0)->GetClass();
      vectorlEExampleWithStringDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithStringDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithStringDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringData> : new vector<ExampleWithStringData>;
   }
   static void *newArray_vectorlEExampleWithStringDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringData>[nElements] : new vector<ExampleWithStringData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithStringDatagR(void *p) {
      delete ((vector<ExampleWithStringData>*)p);
   }
   static void deleteArray_vectorlEExampleWithStringDatagR(void *p) {
      delete [] ((vector<ExampleWithStringData>*)p);
   }
   static void destruct_vectorlEExampleWithStringDatagR(void *p) {
      typedef vector<ExampleWithStringData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithStringData>

namespace ROOT {
   static TClass *vectorlEExampleWithStringCollectiongR_Dictionary();
   static void vectorlEExampleWithStringCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithStringCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleWithStringCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleWithStringCollectiongR(void *p);
   static void deleteArray_vectorlEExampleWithStringCollectiongR(void *p);
   static void destruct_vectorlEExampleWithStringCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithStringCollection>*)
   {
      vector<ExampleWithStringCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithStringCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithStringCollection>", -2, "vector", 386,
                  typeid(vector<ExampleWithStringCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithStringCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithStringCollection>) );
      instance.SetNew(&new_vectorlEExampleWithStringCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleWithStringCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleWithStringCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithStringCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleWithStringCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithStringCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithStringCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithStringCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithStringCollection>*)0x0)->GetClass();
      vectorlEExampleWithStringCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithStringCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithStringCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringCollection> : new vector<ExampleWithStringCollection>;
   }
   static void *newArray_vectorlEExampleWithStringCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithStringCollection>[nElements] : new vector<ExampleWithStringCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithStringCollectiongR(void *p) {
      delete ((vector<ExampleWithStringCollection>*)p);
   }
   static void deleteArray_vectorlEExampleWithStringCollectiongR(void *p) {
      delete [] ((vector<ExampleWithStringCollection>*)p);
   }
   static void destruct_vectorlEExampleWithStringCollectiongR(void *p) {
      typedef vector<ExampleWithStringCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithStringCollection>

namespace ROOT {
   static TClass *vectorlEExampleWithStringgR_Dictionary();
   static void vectorlEExampleWithStringgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithStringgR(void *p = 0);
   static void *newArray_vectorlEExampleWithStringgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithStringgR(void *p);
   static void deleteArray_vectorlEExampleWithStringgR(void *p);
   static void destruct_vectorlEExampleWithStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithString>*)
   {
      vector<ExampleWithString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithString>", -2, "vector", 386,
                  typeid(vector<ExampleWithString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithStringgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithString>) );
      instance.SetNew(&new_vectorlEExampleWithStringgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithStringgR);
      instance.SetDelete(&delete_vectorlEExampleWithStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithStringgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithString>*)0x0)->GetClass();
      vectorlEExampleWithStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithString> : new vector<ExampleWithString>;
   }
   static void *newArray_vectorlEExampleWithStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithString>[nElements] : new vector<ExampleWithString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithStringgR(void *p) {
      delete ((vector<ExampleWithString>*)p);
   }
   static void deleteArray_vectorlEExampleWithStringgR(void *p) {
      delete [] ((vector<ExampleWithString>*)p);
   }
   static void destruct_vectorlEExampleWithStringgR(void *p) {
      typedef vector<ExampleWithString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithString>

namespace ROOT {
   static TClass *vectorlEExampleWithOneRelationObjgR_Dictionary();
   static void vectorlEExampleWithOneRelationObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithOneRelationObjgR(void *p = 0);
   static void *newArray_vectorlEExampleWithOneRelationObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithOneRelationObjgR(void *p);
   static void deleteArray_vectorlEExampleWithOneRelationObjgR(void *p);
   static void destruct_vectorlEExampleWithOneRelationObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithOneRelationObj>*)
   {
      vector<ExampleWithOneRelationObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithOneRelationObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithOneRelationObj>", -2, "vector", 386,
                  typeid(vector<ExampleWithOneRelationObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithOneRelationObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithOneRelationObj>) );
      instance.SetNew(&new_vectorlEExampleWithOneRelationObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithOneRelationObjgR);
      instance.SetDelete(&delete_vectorlEExampleWithOneRelationObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithOneRelationObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithOneRelationObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithOneRelationObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithOneRelationObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithOneRelationObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithOneRelationObj>*)0x0)->GetClass();
      vectorlEExampleWithOneRelationObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithOneRelationObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithOneRelationObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationObj> : new vector<ExampleWithOneRelationObj>;
   }
   static void *newArray_vectorlEExampleWithOneRelationObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationObj>[nElements] : new vector<ExampleWithOneRelationObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithOneRelationObjgR(void *p) {
      delete ((vector<ExampleWithOneRelationObj>*)p);
   }
   static void deleteArray_vectorlEExampleWithOneRelationObjgR(void *p) {
      delete [] ((vector<ExampleWithOneRelationObj>*)p);
   }
   static void destruct_vectorlEExampleWithOneRelationObjgR(void *p) {
      typedef vector<ExampleWithOneRelationObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithOneRelationObj>

namespace ROOT {
   static TClass *vectorlEExampleWithOneRelationDatagR_Dictionary();
   static void vectorlEExampleWithOneRelationDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithOneRelationDatagR(void *p = 0);
   static void *newArray_vectorlEExampleWithOneRelationDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithOneRelationDatagR(void *p);
   static void deleteArray_vectorlEExampleWithOneRelationDatagR(void *p);
   static void destruct_vectorlEExampleWithOneRelationDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithOneRelationData>*)
   {
      vector<ExampleWithOneRelationData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithOneRelationData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithOneRelationData>", -2, "vector", 386,
                  typeid(vector<ExampleWithOneRelationData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithOneRelationDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithOneRelationData>) );
      instance.SetNew(&new_vectorlEExampleWithOneRelationDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithOneRelationDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithOneRelationDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithOneRelationDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithOneRelationDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithOneRelationData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithOneRelationData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithOneRelationDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithOneRelationData>*)0x0)->GetClass();
      vectorlEExampleWithOneRelationDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithOneRelationDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithOneRelationDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationData> : new vector<ExampleWithOneRelationData>;
   }
   static void *newArray_vectorlEExampleWithOneRelationDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationData>[nElements] : new vector<ExampleWithOneRelationData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithOneRelationDatagR(void *p) {
      delete ((vector<ExampleWithOneRelationData>*)p);
   }
   static void deleteArray_vectorlEExampleWithOneRelationDatagR(void *p) {
      delete [] ((vector<ExampleWithOneRelationData>*)p);
   }
   static void destruct_vectorlEExampleWithOneRelationDatagR(void *p) {
      typedef vector<ExampleWithOneRelationData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithOneRelationData>

namespace ROOT {
   static TClass *vectorlEExampleWithOneRelationCollectiongR_Dictionary();
   static void vectorlEExampleWithOneRelationCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithOneRelationCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleWithOneRelationCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleWithOneRelationCollectiongR(void *p);
   static void deleteArray_vectorlEExampleWithOneRelationCollectiongR(void *p);
   static void destruct_vectorlEExampleWithOneRelationCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithOneRelationCollection>*)
   {
      vector<ExampleWithOneRelationCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithOneRelationCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithOneRelationCollection>", -2, "vector", 386,
                  typeid(vector<ExampleWithOneRelationCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithOneRelationCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithOneRelationCollection>) );
      instance.SetNew(&new_vectorlEExampleWithOneRelationCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleWithOneRelationCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleWithOneRelationCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithOneRelationCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleWithOneRelationCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithOneRelationCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithOneRelationCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithOneRelationCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithOneRelationCollection>*)0x0)->GetClass();
      vectorlEExampleWithOneRelationCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithOneRelationCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithOneRelationCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationCollection> : new vector<ExampleWithOneRelationCollection>;
   }
   static void *newArray_vectorlEExampleWithOneRelationCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelationCollection>[nElements] : new vector<ExampleWithOneRelationCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithOneRelationCollectiongR(void *p) {
      delete ((vector<ExampleWithOneRelationCollection>*)p);
   }
   static void deleteArray_vectorlEExampleWithOneRelationCollectiongR(void *p) {
      delete [] ((vector<ExampleWithOneRelationCollection>*)p);
   }
   static void destruct_vectorlEExampleWithOneRelationCollectiongR(void *p) {
      typedef vector<ExampleWithOneRelationCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithOneRelationCollection>

namespace ROOT {
   static TClass *vectorlEExampleWithOneRelationgR_Dictionary();
   static void vectorlEExampleWithOneRelationgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithOneRelationgR(void *p = 0);
   static void *newArray_vectorlEExampleWithOneRelationgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithOneRelationgR(void *p);
   static void deleteArray_vectorlEExampleWithOneRelationgR(void *p);
   static void destruct_vectorlEExampleWithOneRelationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithOneRelation>*)
   {
      vector<ExampleWithOneRelation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithOneRelation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithOneRelation>", -2, "vector", 386,
                  typeid(vector<ExampleWithOneRelation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithOneRelationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithOneRelation>) );
      instance.SetNew(&new_vectorlEExampleWithOneRelationgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithOneRelationgR);
      instance.SetDelete(&delete_vectorlEExampleWithOneRelationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithOneRelationgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithOneRelationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithOneRelation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithOneRelation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithOneRelationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithOneRelation>*)0x0)->GetClass();
      vectorlEExampleWithOneRelationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithOneRelationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithOneRelationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelation> : new vector<ExampleWithOneRelation>;
   }
   static void *newArray_vectorlEExampleWithOneRelationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithOneRelation>[nElements] : new vector<ExampleWithOneRelation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithOneRelationgR(void *p) {
      delete ((vector<ExampleWithOneRelation>*)p);
   }
   static void deleteArray_vectorlEExampleWithOneRelationgR(void *p) {
      delete [] ((vector<ExampleWithOneRelation>*)p);
   }
   static void destruct_vectorlEExampleWithOneRelationgR(void *p) {
      typedef vector<ExampleWithOneRelation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithOneRelation>

namespace ROOT {
   static TClass *vectorlEExampleWithComponentObjgR_Dictionary();
   static void vectorlEExampleWithComponentObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithComponentObjgR(void *p = 0);
   static void *newArray_vectorlEExampleWithComponentObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithComponentObjgR(void *p);
   static void deleteArray_vectorlEExampleWithComponentObjgR(void *p);
   static void destruct_vectorlEExampleWithComponentObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithComponentObj>*)
   {
      vector<ExampleWithComponentObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithComponentObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithComponentObj>", -2, "vector", 386,
                  typeid(vector<ExampleWithComponentObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithComponentObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithComponentObj>) );
      instance.SetNew(&new_vectorlEExampleWithComponentObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithComponentObjgR);
      instance.SetDelete(&delete_vectorlEExampleWithComponentObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithComponentObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithComponentObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithComponentObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithComponentObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithComponentObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithComponentObj>*)0x0)->GetClass();
      vectorlEExampleWithComponentObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithComponentObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithComponentObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentObj> : new vector<ExampleWithComponentObj>;
   }
   static void *newArray_vectorlEExampleWithComponentObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentObj>[nElements] : new vector<ExampleWithComponentObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithComponentObjgR(void *p) {
      delete ((vector<ExampleWithComponentObj>*)p);
   }
   static void deleteArray_vectorlEExampleWithComponentObjgR(void *p) {
      delete [] ((vector<ExampleWithComponentObj>*)p);
   }
   static void destruct_vectorlEExampleWithComponentObjgR(void *p) {
      typedef vector<ExampleWithComponentObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithComponentObj>

namespace ROOT {
   static TClass *vectorlEExampleWithComponentDatagR_Dictionary();
   static void vectorlEExampleWithComponentDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithComponentDatagR(void *p = 0);
   static void *newArray_vectorlEExampleWithComponentDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithComponentDatagR(void *p);
   static void deleteArray_vectorlEExampleWithComponentDatagR(void *p);
   static void destruct_vectorlEExampleWithComponentDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithComponentData>*)
   {
      vector<ExampleWithComponentData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithComponentData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithComponentData>", -2, "vector", 386,
                  typeid(vector<ExampleWithComponentData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithComponentDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithComponentData>) );
      instance.SetNew(&new_vectorlEExampleWithComponentDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithComponentDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithComponentDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithComponentDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithComponentDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithComponentData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithComponentData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithComponentDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithComponentData>*)0x0)->GetClass();
      vectorlEExampleWithComponentDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithComponentDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithComponentDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentData> : new vector<ExampleWithComponentData>;
   }
   static void *newArray_vectorlEExampleWithComponentDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentData>[nElements] : new vector<ExampleWithComponentData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithComponentDatagR(void *p) {
      delete ((vector<ExampleWithComponentData>*)p);
   }
   static void deleteArray_vectorlEExampleWithComponentDatagR(void *p) {
      delete [] ((vector<ExampleWithComponentData>*)p);
   }
   static void destruct_vectorlEExampleWithComponentDatagR(void *p) {
      typedef vector<ExampleWithComponentData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithComponentData>

namespace ROOT {
   static TClass *vectorlEExampleWithComponentCollectiongR_Dictionary();
   static void vectorlEExampleWithComponentCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithComponentCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleWithComponentCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleWithComponentCollectiongR(void *p);
   static void deleteArray_vectorlEExampleWithComponentCollectiongR(void *p);
   static void destruct_vectorlEExampleWithComponentCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithComponentCollection>*)
   {
      vector<ExampleWithComponentCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithComponentCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithComponentCollection>", -2, "vector", 386,
                  typeid(vector<ExampleWithComponentCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithComponentCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithComponentCollection>) );
      instance.SetNew(&new_vectorlEExampleWithComponentCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleWithComponentCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleWithComponentCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithComponentCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleWithComponentCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithComponentCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithComponentCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithComponentCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithComponentCollection>*)0x0)->GetClass();
      vectorlEExampleWithComponentCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithComponentCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithComponentCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentCollection> : new vector<ExampleWithComponentCollection>;
   }
   static void *newArray_vectorlEExampleWithComponentCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponentCollection>[nElements] : new vector<ExampleWithComponentCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithComponentCollectiongR(void *p) {
      delete ((vector<ExampleWithComponentCollection>*)p);
   }
   static void deleteArray_vectorlEExampleWithComponentCollectiongR(void *p) {
      delete [] ((vector<ExampleWithComponentCollection>*)p);
   }
   static void destruct_vectorlEExampleWithComponentCollectiongR(void *p) {
      typedef vector<ExampleWithComponentCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithComponentCollection>

namespace ROOT {
   static TClass *vectorlEExampleWithComponentgR_Dictionary();
   static void vectorlEExampleWithComponentgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithComponentgR(void *p = 0);
   static void *newArray_vectorlEExampleWithComponentgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithComponentgR(void *p);
   static void deleteArray_vectorlEExampleWithComponentgR(void *p);
   static void destruct_vectorlEExampleWithComponentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithComponent>*)
   {
      vector<ExampleWithComponent> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithComponent>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithComponent>", -2, "vector", 386,
                  typeid(vector<ExampleWithComponent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithComponentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithComponent>) );
      instance.SetNew(&new_vectorlEExampleWithComponentgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithComponentgR);
      instance.SetDelete(&delete_vectorlEExampleWithComponentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithComponentgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithComponentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithComponent> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithComponent>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithComponentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithComponent>*)0x0)->GetClass();
      vectorlEExampleWithComponentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithComponentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithComponentgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponent> : new vector<ExampleWithComponent>;
   }
   static void *newArray_vectorlEExampleWithComponentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithComponent>[nElements] : new vector<ExampleWithComponent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithComponentgR(void *p) {
      delete ((vector<ExampleWithComponent>*)p);
   }
   static void deleteArray_vectorlEExampleWithComponentgR(void *p) {
      delete [] ((vector<ExampleWithComponent>*)p);
   }
   static void destruct_vectorlEExampleWithComponentgR(void *p) {
      typedef vector<ExampleWithComponent> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithComponent>

namespace ROOT {
   static TClass *vectorlEExampleWithArrayObjgR_Dictionary();
   static void vectorlEExampleWithArrayObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArrayObjgR(void *p = 0);
   static void *newArray_vectorlEExampleWithArrayObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArrayObjgR(void *p);
   static void deleteArray_vectorlEExampleWithArrayObjgR(void *p);
   static void destruct_vectorlEExampleWithArrayObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArrayObj>*)
   {
      vector<ExampleWithArrayObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArrayObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArrayObj>", -2, "vector", 386,
                  typeid(vector<ExampleWithArrayObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArrayObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArrayObj>) );
      instance.SetNew(&new_vectorlEExampleWithArrayObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArrayObjgR);
      instance.SetDelete(&delete_vectorlEExampleWithArrayObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArrayObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArrayObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArrayObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithArrayObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArrayObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithArrayObj>*)0x0)->GetClass();
      vectorlEExampleWithArrayObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArrayObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArrayObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayObj> : new vector<ExampleWithArrayObj>;
   }
   static void *newArray_vectorlEExampleWithArrayObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayObj>[nElements] : new vector<ExampleWithArrayObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArrayObjgR(void *p) {
      delete ((vector<ExampleWithArrayObj>*)p);
   }
   static void deleteArray_vectorlEExampleWithArrayObjgR(void *p) {
      delete [] ((vector<ExampleWithArrayObj>*)p);
   }
   static void destruct_vectorlEExampleWithArrayObjgR(void *p) {
      typedef vector<ExampleWithArrayObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArrayObj>

namespace ROOT {
   static TClass *vectorlEExampleWithArrayDatagR_Dictionary();
   static void vectorlEExampleWithArrayDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArrayDatagR(void *p = 0);
   static void *newArray_vectorlEExampleWithArrayDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArrayDatagR(void *p);
   static void deleteArray_vectorlEExampleWithArrayDatagR(void *p);
   static void destruct_vectorlEExampleWithArrayDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArrayData>*)
   {
      vector<ExampleWithArrayData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArrayData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArrayData>", -2, "vector", 386,
                  typeid(vector<ExampleWithArrayData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArrayDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArrayData>) );
      instance.SetNew(&new_vectorlEExampleWithArrayDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArrayDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithArrayDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArrayDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArrayDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArrayData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithArrayData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArrayDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithArrayData>*)0x0)->GetClass();
      vectorlEExampleWithArrayDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArrayDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArrayDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayData> : new vector<ExampleWithArrayData>;
   }
   static void *newArray_vectorlEExampleWithArrayDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayData>[nElements] : new vector<ExampleWithArrayData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArrayDatagR(void *p) {
      delete ((vector<ExampleWithArrayData>*)p);
   }
   static void deleteArray_vectorlEExampleWithArrayDatagR(void *p) {
      delete [] ((vector<ExampleWithArrayData>*)p);
   }
   static void destruct_vectorlEExampleWithArrayDatagR(void *p) {
      typedef vector<ExampleWithArrayData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArrayData>

namespace ROOT {
   static TClass *vectorlEExampleWithArrayCollectiongR_Dictionary();
   static void vectorlEExampleWithArrayCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArrayCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleWithArrayCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArrayCollectiongR(void *p);
   static void deleteArray_vectorlEExampleWithArrayCollectiongR(void *p);
   static void destruct_vectorlEExampleWithArrayCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArrayCollection>*)
   {
      vector<ExampleWithArrayCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArrayCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArrayCollection>", -2, "vector", 386,
                  typeid(vector<ExampleWithArrayCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArrayCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArrayCollection>) );
      instance.SetNew(&new_vectorlEExampleWithArrayCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArrayCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleWithArrayCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArrayCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArrayCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArrayCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithArrayCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArrayCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithArrayCollection>*)0x0)->GetClass();
      vectorlEExampleWithArrayCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArrayCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArrayCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayCollection> : new vector<ExampleWithArrayCollection>;
   }
   static void *newArray_vectorlEExampleWithArrayCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArrayCollection>[nElements] : new vector<ExampleWithArrayCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArrayCollectiongR(void *p) {
      delete ((vector<ExampleWithArrayCollection>*)p);
   }
   static void deleteArray_vectorlEExampleWithArrayCollectiongR(void *p) {
      delete [] ((vector<ExampleWithArrayCollection>*)p);
   }
   static void destruct_vectorlEExampleWithArrayCollectiongR(void *p) {
      typedef vector<ExampleWithArrayCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArrayCollection>

namespace ROOT {
   static TClass *vectorlEExampleWithArraygR_Dictionary();
   static void vectorlEExampleWithArraygR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArraygR(void *p = 0);
   static void *newArray_vectorlEExampleWithArraygR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArraygR(void *p);
   static void deleteArray_vectorlEExampleWithArraygR(void *p);
   static void destruct_vectorlEExampleWithArraygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArray>*)
   {
      vector<ExampleWithArray> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArray>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArray>", -2, "vector", 386,
                  typeid(vector<ExampleWithArray>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArraygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArray>) );
      instance.SetNew(&new_vectorlEExampleWithArraygR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArraygR);
      instance.SetDelete(&delete_vectorlEExampleWithArraygR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArraygR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArraygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArray> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleWithArray>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArraygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleWithArray>*)0x0)->GetClass();
      vectorlEExampleWithArraygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArraygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArraygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArray> : new vector<ExampleWithArray>;
   }
   static void *newArray_vectorlEExampleWithArraygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleWithArray>[nElements] : new vector<ExampleWithArray>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArraygR(void *p) {
      delete ((vector<ExampleWithArray>*)p);
   }
   static void deleteArray_vectorlEExampleWithArraygR(void *p) {
      delete [] ((vector<ExampleWithArray>*)p);
   }
   static void destruct_vectorlEExampleWithArraygR(void *p) {
      typedef vector<ExampleWithArray> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArray>

namespace ROOT {
   static TClass *vectorlEExampleReferencingTypeObjgR_Dictionary();
   static void vectorlEExampleReferencingTypeObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleReferencingTypeObjgR(void *p = 0);
   static void *newArray_vectorlEExampleReferencingTypeObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleReferencingTypeObjgR(void *p);
   static void deleteArray_vectorlEExampleReferencingTypeObjgR(void *p);
   static void destruct_vectorlEExampleReferencingTypeObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleReferencingTypeObj>*)
   {
      vector<ExampleReferencingTypeObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleReferencingTypeObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleReferencingTypeObj>", -2, "vector", 386,
                  typeid(vector<ExampleReferencingTypeObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleReferencingTypeObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleReferencingTypeObj>) );
      instance.SetNew(&new_vectorlEExampleReferencingTypeObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleReferencingTypeObjgR);
      instance.SetDelete(&delete_vectorlEExampleReferencingTypeObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleReferencingTypeObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleReferencingTypeObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleReferencingTypeObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleReferencingTypeObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleReferencingTypeObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleReferencingTypeObj>*)0x0)->GetClass();
      vectorlEExampleReferencingTypeObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleReferencingTypeObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleReferencingTypeObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeObj> : new vector<ExampleReferencingTypeObj>;
   }
   static void *newArray_vectorlEExampleReferencingTypeObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeObj>[nElements] : new vector<ExampleReferencingTypeObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleReferencingTypeObjgR(void *p) {
      delete ((vector<ExampleReferencingTypeObj>*)p);
   }
   static void deleteArray_vectorlEExampleReferencingTypeObjgR(void *p) {
      delete [] ((vector<ExampleReferencingTypeObj>*)p);
   }
   static void destruct_vectorlEExampleReferencingTypeObjgR(void *p) {
      typedef vector<ExampleReferencingTypeObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleReferencingTypeObj>

namespace ROOT {
   static TClass *vectorlEExampleReferencingTypeDatagR_Dictionary();
   static void vectorlEExampleReferencingTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleReferencingTypeDatagR(void *p = 0);
   static void *newArray_vectorlEExampleReferencingTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleReferencingTypeDatagR(void *p);
   static void deleteArray_vectorlEExampleReferencingTypeDatagR(void *p);
   static void destruct_vectorlEExampleReferencingTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleReferencingTypeData>*)
   {
      vector<ExampleReferencingTypeData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleReferencingTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleReferencingTypeData>", -2, "vector", 386,
                  typeid(vector<ExampleReferencingTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleReferencingTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleReferencingTypeData>) );
      instance.SetNew(&new_vectorlEExampleReferencingTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleReferencingTypeDatagR);
      instance.SetDelete(&delete_vectorlEExampleReferencingTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleReferencingTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleReferencingTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleReferencingTypeData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleReferencingTypeData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleReferencingTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleReferencingTypeData>*)0x0)->GetClass();
      vectorlEExampleReferencingTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleReferencingTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleReferencingTypeDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeData> : new vector<ExampleReferencingTypeData>;
   }
   static void *newArray_vectorlEExampleReferencingTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeData>[nElements] : new vector<ExampleReferencingTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleReferencingTypeDatagR(void *p) {
      delete ((vector<ExampleReferencingTypeData>*)p);
   }
   static void deleteArray_vectorlEExampleReferencingTypeDatagR(void *p) {
      delete [] ((vector<ExampleReferencingTypeData>*)p);
   }
   static void destruct_vectorlEExampleReferencingTypeDatagR(void *p) {
      typedef vector<ExampleReferencingTypeData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleReferencingTypeData>

namespace ROOT {
   static TClass *vectorlEExampleReferencingTypeCollectiongR_Dictionary();
   static void vectorlEExampleReferencingTypeCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleReferencingTypeCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleReferencingTypeCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleReferencingTypeCollectiongR(void *p);
   static void deleteArray_vectorlEExampleReferencingTypeCollectiongR(void *p);
   static void destruct_vectorlEExampleReferencingTypeCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleReferencingTypeCollection>*)
   {
      vector<ExampleReferencingTypeCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleReferencingTypeCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleReferencingTypeCollection>", -2, "vector", 386,
                  typeid(vector<ExampleReferencingTypeCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleReferencingTypeCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleReferencingTypeCollection>) );
      instance.SetNew(&new_vectorlEExampleReferencingTypeCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleReferencingTypeCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleReferencingTypeCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleReferencingTypeCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleReferencingTypeCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleReferencingTypeCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleReferencingTypeCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleReferencingTypeCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleReferencingTypeCollection>*)0x0)->GetClass();
      vectorlEExampleReferencingTypeCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleReferencingTypeCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleReferencingTypeCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeCollection> : new vector<ExampleReferencingTypeCollection>;
   }
   static void *newArray_vectorlEExampleReferencingTypeCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingTypeCollection>[nElements] : new vector<ExampleReferencingTypeCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleReferencingTypeCollectiongR(void *p) {
      delete ((vector<ExampleReferencingTypeCollection>*)p);
   }
   static void deleteArray_vectorlEExampleReferencingTypeCollectiongR(void *p) {
      delete [] ((vector<ExampleReferencingTypeCollection>*)p);
   }
   static void destruct_vectorlEExampleReferencingTypeCollectiongR(void *p) {
      typedef vector<ExampleReferencingTypeCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleReferencingTypeCollection>

namespace ROOT {
   static TClass *vectorlEExampleReferencingTypegR_Dictionary();
   static void vectorlEExampleReferencingTypegR_TClassManip(TClass*);
   static void *new_vectorlEExampleReferencingTypegR(void *p = 0);
   static void *newArray_vectorlEExampleReferencingTypegR(Long_t size, void *p);
   static void delete_vectorlEExampleReferencingTypegR(void *p);
   static void deleteArray_vectorlEExampleReferencingTypegR(void *p);
   static void destruct_vectorlEExampleReferencingTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleReferencingType>*)
   {
      vector<ExampleReferencingType> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleReferencingType>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleReferencingType>", -2, "vector", 386,
                  typeid(vector<ExampleReferencingType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleReferencingTypegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleReferencingType>) );
      instance.SetNew(&new_vectorlEExampleReferencingTypegR);
      instance.SetNewArray(&newArray_vectorlEExampleReferencingTypegR);
      instance.SetDelete(&delete_vectorlEExampleReferencingTypegR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleReferencingTypegR);
      instance.SetDestructor(&destruct_vectorlEExampleReferencingTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleReferencingType> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleReferencingType>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleReferencingTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleReferencingType>*)0x0)->GetClass();
      vectorlEExampleReferencingTypegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleReferencingTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleReferencingTypegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingType> : new vector<ExampleReferencingType>;
   }
   static void *newArray_vectorlEExampleReferencingTypegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleReferencingType>[nElements] : new vector<ExampleReferencingType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleReferencingTypegR(void *p) {
      delete ((vector<ExampleReferencingType>*)p);
   }
   static void deleteArray_vectorlEExampleReferencingTypegR(void *p) {
      delete [] ((vector<ExampleReferencingType>*)p);
   }
   static void destruct_vectorlEExampleReferencingTypegR(void *p) {
      typedef vector<ExampleReferencingType> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleReferencingType>

namespace ROOT {
   static TClass *vectorlEExampleMCObjgR_Dictionary();
   static void vectorlEExampleMCObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleMCObjgR(void *p = 0);
   static void *newArray_vectorlEExampleMCObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleMCObjgR(void *p);
   static void deleteArray_vectorlEExampleMCObjgR(void *p);
   static void destruct_vectorlEExampleMCObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleMCObj>*)
   {
      vector<ExampleMCObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleMCObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleMCObj>", -2, "vector", 386,
                  typeid(vector<ExampleMCObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleMCObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleMCObj>) );
      instance.SetNew(&new_vectorlEExampleMCObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleMCObjgR);
      instance.SetDelete(&delete_vectorlEExampleMCObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleMCObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleMCObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleMCObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleMCObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleMCObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleMCObj>*)0x0)->GetClass();
      vectorlEExampleMCObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleMCObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleMCObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCObj> : new vector<ExampleMCObj>;
   }
   static void *newArray_vectorlEExampleMCObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCObj>[nElements] : new vector<ExampleMCObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleMCObjgR(void *p) {
      delete ((vector<ExampleMCObj>*)p);
   }
   static void deleteArray_vectorlEExampleMCObjgR(void *p) {
      delete [] ((vector<ExampleMCObj>*)p);
   }
   static void destruct_vectorlEExampleMCObjgR(void *p) {
      typedef vector<ExampleMCObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleMCObj>

namespace ROOT {
   static TClass *vectorlEExampleMCDatagR_Dictionary();
   static void vectorlEExampleMCDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleMCDatagR(void *p = 0);
   static void *newArray_vectorlEExampleMCDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleMCDatagR(void *p);
   static void deleteArray_vectorlEExampleMCDatagR(void *p);
   static void destruct_vectorlEExampleMCDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleMCData>*)
   {
      vector<ExampleMCData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleMCData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleMCData>", -2, "vector", 386,
                  typeid(vector<ExampleMCData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleMCDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleMCData>) );
      instance.SetNew(&new_vectorlEExampleMCDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleMCDatagR);
      instance.SetDelete(&delete_vectorlEExampleMCDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleMCDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleMCDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleMCData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleMCData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleMCDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleMCData>*)0x0)->GetClass();
      vectorlEExampleMCDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleMCDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleMCDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCData> : new vector<ExampleMCData>;
   }
   static void *newArray_vectorlEExampleMCDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCData>[nElements] : new vector<ExampleMCData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleMCDatagR(void *p) {
      delete ((vector<ExampleMCData>*)p);
   }
   static void deleteArray_vectorlEExampleMCDatagR(void *p) {
      delete [] ((vector<ExampleMCData>*)p);
   }
   static void destruct_vectorlEExampleMCDatagR(void *p) {
      typedef vector<ExampleMCData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleMCData>

namespace ROOT {
   static TClass *vectorlEExampleMCCollectiongR_Dictionary();
   static void vectorlEExampleMCCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleMCCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleMCCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleMCCollectiongR(void *p);
   static void deleteArray_vectorlEExampleMCCollectiongR(void *p);
   static void destruct_vectorlEExampleMCCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleMCCollection>*)
   {
      vector<ExampleMCCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleMCCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleMCCollection>", -2, "vector", 386,
                  typeid(vector<ExampleMCCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleMCCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleMCCollection>) );
      instance.SetNew(&new_vectorlEExampleMCCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleMCCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleMCCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleMCCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleMCCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleMCCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleMCCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleMCCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleMCCollection>*)0x0)->GetClass();
      vectorlEExampleMCCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleMCCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleMCCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCCollection> : new vector<ExampleMCCollection>;
   }
   static void *newArray_vectorlEExampleMCCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMCCollection>[nElements] : new vector<ExampleMCCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleMCCollectiongR(void *p) {
      delete ((vector<ExampleMCCollection>*)p);
   }
   static void deleteArray_vectorlEExampleMCCollectiongR(void *p) {
      delete [] ((vector<ExampleMCCollection>*)p);
   }
   static void destruct_vectorlEExampleMCCollectiongR(void *p) {
      typedef vector<ExampleMCCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleMCCollection>

namespace ROOT {
   static TClass *vectorlEExampleMCgR_Dictionary();
   static void vectorlEExampleMCgR_TClassManip(TClass*);
   static void *new_vectorlEExampleMCgR(void *p = 0);
   static void *newArray_vectorlEExampleMCgR(Long_t size, void *p);
   static void delete_vectorlEExampleMCgR(void *p);
   static void deleteArray_vectorlEExampleMCgR(void *p);
   static void destruct_vectorlEExampleMCgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleMC>*)
   {
      vector<ExampleMC> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleMC>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleMC>", -2, "vector", 386,
                  typeid(vector<ExampleMC>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleMCgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleMC>) );
      instance.SetNew(&new_vectorlEExampleMCgR);
      instance.SetNewArray(&newArray_vectorlEExampleMCgR);
      instance.SetDelete(&delete_vectorlEExampleMCgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleMCgR);
      instance.SetDestructor(&destruct_vectorlEExampleMCgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleMC> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleMC>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleMCgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleMC>*)0x0)->GetClass();
      vectorlEExampleMCgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleMCgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleMCgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMC> : new vector<ExampleMC>;
   }
   static void *newArray_vectorlEExampleMCgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleMC>[nElements] : new vector<ExampleMC>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleMCgR(void *p) {
      delete ((vector<ExampleMC>*)p);
   }
   static void deleteArray_vectorlEExampleMCgR(void *p) {
      delete [] ((vector<ExampleMC>*)p);
   }
   static void destruct_vectorlEExampleMCgR(void *p) {
      typedef vector<ExampleMC> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleMC>

namespace ROOT {
   static TClass *vectorlEExampleHitObjgR_Dictionary();
   static void vectorlEExampleHitObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitObjgR(void *p = 0);
   static void *newArray_vectorlEExampleHitObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleHitObjgR(void *p);
   static void deleteArray_vectorlEExampleHitObjgR(void *p);
   static void destruct_vectorlEExampleHitObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHitObj>*)
   {
      vector<ExampleHitObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHitObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHitObj>", -2, "vector", 386,
                  typeid(vector<ExampleHitObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHitObj>) );
      instance.SetNew(&new_vectorlEExampleHitObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleHitObjgR);
      instance.SetDelete(&delete_vectorlEExampleHitObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleHitObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHitObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleHitObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleHitObj>*)0x0)->GetClass();
      vectorlEExampleHitObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitObj> : new vector<ExampleHitObj>;
   }
   static void *newArray_vectorlEExampleHitObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitObj>[nElements] : new vector<ExampleHitObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitObjgR(void *p) {
      delete ((vector<ExampleHitObj>*)p);
   }
   static void deleteArray_vectorlEExampleHitObjgR(void *p) {
      delete [] ((vector<ExampleHitObj>*)p);
   }
   static void destruct_vectorlEExampleHitObjgR(void *p) {
      typedef vector<ExampleHitObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHitObj>

namespace ROOT {
   static TClass *vectorlEExampleHitDatagR_Dictionary();
   static void vectorlEExampleHitDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitDatagR(void *p = 0);
   static void *newArray_vectorlEExampleHitDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleHitDatagR(void *p);
   static void deleteArray_vectorlEExampleHitDatagR(void *p);
   static void destruct_vectorlEExampleHitDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHitData>*)
   {
      vector<ExampleHitData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHitData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHitData>", -2, "vector", 386,
                  typeid(vector<ExampleHitData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHitData>) );
      instance.SetNew(&new_vectorlEExampleHitDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleHitDatagR);
      instance.SetDelete(&delete_vectorlEExampleHitDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleHitDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHitData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleHitData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleHitData>*)0x0)->GetClass();
      vectorlEExampleHitDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitData> : new vector<ExampleHitData>;
   }
   static void *newArray_vectorlEExampleHitDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitData>[nElements] : new vector<ExampleHitData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitDatagR(void *p) {
      delete ((vector<ExampleHitData>*)p);
   }
   static void deleteArray_vectorlEExampleHitDatagR(void *p) {
      delete [] ((vector<ExampleHitData>*)p);
   }
   static void destruct_vectorlEExampleHitDatagR(void *p) {
      typedef vector<ExampleHitData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHitData>

namespace ROOT {
   static TClass *vectorlEExampleHitCollectiongR_Dictionary();
   static void vectorlEExampleHitCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleHitCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleHitCollectiongR(void *p);
   static void deleteArray_vectorlEExampleHitCollectiongR(void *p);
   static void destruct_vectorlEExampleHitCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHitCollection>*)
   {
      vector<ExampleHitCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHitCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHitCollection>", -2, "vector", 386,
                  typeid(vector<ExampleHitCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHitCollection>) );
      instance.SetNew(&new_vectorlEExampleHitCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleHitCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleHitCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleHitCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHitCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleHitCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleHitCollection>*)0x0)->GetClass();
      vectorlEExampleHitCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitCollection> : new vector<ExampleHitCollection>;
   }
   static void *newArray_vectorlEExampleHitCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHitCollection>[nElements] : new vector<ExampleHitCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitCollectiongR(void *p) {
      delete ((vector<ExampleHitCollection>*)p);
   }
   static void deleteArray_vectorlEExampleHitCollectiongR(void *p) {
      delete [] ((vector<ExampleHitCollection>*)p);
   }
   static void destruct_vectorlEExampleHitCollectiongR(void *p) {
      typedef vector<ExampleHitCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHitCollection>

namespace ROOT {
   static TClass *vectorlEExampleHitgR_Dictionary();
   static void vectorlEExampleHitgR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitgR(void *p = 0);
   static void *newArray_vectorlEExampleHitgR(Long_t size, void *p);
   static void delete_vectorlEExampleHitgR(void *p);
   static void deleteArray_vectorlEExampleHitgR(void *p);
   static void destruct_vectorlEExampleHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHit>*)
   {
      vector<ExampleHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHit>", -2, "vector", 386,
                  typeid(vector<ExampleHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHit>) );
      instance.SetNew(&new_vectorlEExampleHitgR);
      instance.SetNewArray(&newArray_vectorlEExampleHitgR);
      instance.SetDelete(&delete_vectorlEExampleHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitgR);
      instance.SetDestructor(&destruct_vectorlEExampleHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleHit>*)0x0)->GetClass();
      vectorlEExampleHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHit> : new vector<ExampleHit>;
   }
   static void *newArray_vectorlEExampleHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleHit>[nElements] : new vector<ExampleHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitgR(void *p) {
      delete ((vector<ExampleHit>*)p);
   }
   static void deleteArray_vectorlEExampleHitgR(void *p) {
      delete [] ((vector<ExampleHit>*)p);
   }
   static void destruct_vectorlEExampleHitgR(void *p) {
      typedef vector<ExampleHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHit>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency2ObjgR_Dictionary();
   static void vectorlEExampleForCyclicDependency2ObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency2ObjgR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency2ObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency2ObjgR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency2ObjgR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency2ObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency2Obj>*)
   {
      vector<ExampleForCyclicDependency2Obj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency2Obj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency2Obj>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency2Obj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency2ObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency2Obj>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency2ObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency2ObjgR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency2ObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency2ObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency2ObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency2Obj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Obj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency2ObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Obj>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency2ObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency2ObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency2ObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Obj> : new vector<ExampleForCyclicDependency2Obj>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency2ObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Obj>[nElements] : new vector<ExampleForCyclicDependency2Obj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency2ObjgR(void *p) {
      delete ((vector<ExampleForCyclicDependency2Obj>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency2ObjgR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency2Obj>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency2ObjgR(void *p) {
      typedef vector<ExampleForCyclicDependency2Obj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency2Obj>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency2DatagR_Dictionary();
   static void vectorlEExampleForCyclicDependency2DatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency2DatagR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency2DatagR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency2DatagR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency2DatagR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency2DatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency2Data>*)
   {
      vector<ExampleForCyclicDependency2Data> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency2Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency2Data>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency2Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency2DatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency2Data>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency2DatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency2Data> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Data>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency2DatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Data>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency2DatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency2DatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Data> : new vector<ExampleForCyclicDependency2Data>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency2DatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Data>[nElements] : new vector<ExampleForCyclicDependency2Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      delete ((vector<ExampleForCyclicDependency2Data>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency2Data>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      typedef vector<ExampleForCyclicDependency2Data> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency2Data>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency2CollectiongR_Dictionary();
   static void vectorlEExampleForCyclicDependency2CollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency2CollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency2CollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency2CollectiongR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency2CollectiongR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency2CollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency2Collection>*)
   {
      vector<ExampleForCyclicDependency2Collection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency2Collection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency2Collection>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency2Collection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency2CollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency2Collection>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency2CollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency2CollectiongR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency2CollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency2CollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency2CollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency2Collection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Collection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency2CollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2Collection>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency2CollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency2CollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency2CollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Collection> : new vector<ExampleForCyclicDependency2Collection>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency2CollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2Collection>[nElements] : new vector<ExampleForCyclicDependency2Collection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency2CollectiongR(void *p) {
      delete ((vector<ExampleForCyclicDependency2Collection>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency2CollectiongR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency2Collection>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency2CollectiongR(void *p) {
      typedef vector<ExampleForCyclicDependency2Collection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency2Collection>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency2gR_Dictionary();
   static void vectorlEExampleForCyclicDependency2gR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency2gR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency2gR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency2gR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency2gR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency2>*)
   {
      vector<ExampleForCyclicDependency2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency2>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency2>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency2gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency2>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency2gR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency2gR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency2gR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency2gR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency2gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency2> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency2>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency2gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2> : new vector<ExampleForCyclicDependency2>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency2>[nElements] : new vector<ExampleForCyclicDependency2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency2gR(void *p) {
      delete ((vector<ExampleForCyclicDependency2>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency2gR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency2>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency2gR(void *p) {
      typedef vector<ExampleForCyclicDependency2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency2>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency1ObjgR_Dictionary();
   static void vectorlEExampleForCyclicDependency1ObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency1ObjgR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency1ObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency1ObjgR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency1ObjgR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency1ObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency1Obj>*)
   {
      vector<ExampleForCyclicDependency1Obj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency1Obj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency1Obj>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency1Obj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency1ObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency1Obj>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency1ObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency1ObjgR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency1ObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency1ObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency1ObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency1Obj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Obj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency1ObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Obj>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency1ObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency1ObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency1ObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Obj> : new vector<ExampleForCyclicDependency1Obj>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency1ObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Obj>[nElements] : new vector<ExampleForCyclicDependency1Obj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency1ObjgR(void *p) {
      delete ((vector<ExampleForCyclicDependency1Obj>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency1ObjgR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency1Obj>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency1ObjgR(void *p) {
      typedef vector<ExampleForCyclicDependency1Obj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency1Obj>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency1DatagR_Dictionary();
   static void vectorlEExampleForCyclicDependency1DatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency1DatagR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency1DatagR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency1DatagR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency1DatagR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency1DatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency1Data>*)
   {
      vector<ExampleForCyclicDependency1Data> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency1Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency1Data>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency1Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency1DatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency1Data>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency1DatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency1Data> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Data>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency1DatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Data>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency1DatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency1DatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Data> : new vector<ExampleForCyclicDependency1Data>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency1DatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Data>[nElements] : new vector<ExampleForCyclicDependency1Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      delete ((vector<ExampleForCyclicDependency1Data>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency1Data>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      typedef vector<ExampleForCyclicDependency1Data> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency1Data>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency1CollectiongR_Dictionary();
   static void vectorlEExampleForCyclicDependency1CollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency1CollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency1CollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency1CollectiongR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency1CollectiongR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency1CollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency1Collection>*)
   {
      vector<ExampleForCyclicDependency1Collection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency1Collection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency1Collection>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency1Collection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency1CollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency1Collection>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency1CollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency1CollectiongR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency1CollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency1CollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency1CollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency1Collection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Collection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency1CollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1Collection>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency1CollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency1CollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency1CollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Collection> : new vector<ExampleForCyclicDependency1Collection>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency1CollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1Collection>[nElements] : new vector<ExampleForCyclicDependency1Collection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency1CollectiongR(void *p) {
      delete ((vector<ExampleForCyclicDependency1Collection>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency1CollectiongR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency1Collection>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency1CollectiongR(void *p) {
      typedef vector<ExampleForCyclicDependency1Collection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency1Collection>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency1gR_Dictionary();
   static void vectorlEExampleForCyclicDependency1gR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency1gR(void *p = 0);
   static void *newArray_vectorlEExampleForCyclicDependency1gR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency1gR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency1gR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency1>*)
   {
      vector<ExampleForCyclicDependency1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency1>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency1>", -2, "vector", 386,
                  typeid(vector<ExampleForCyclicDependency1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency1gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency1>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency1gR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency1gR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency1gR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency1gR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency1gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency1> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleForCyclicDependency1>*)0x0)->GetClass();
      vectorlEExampleForCyclicDependency1gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency1gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1> : new vector<ExampleForCyclicDependency1>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency1gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleForCyclicDependency1>[nElements] : new vector<ExampleForCyclicDependency1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency1gR(void *p) {
      delete ((vector<ExampleForCyclicDependency1>*)p);
   }
   static void deleteArray_vectorlEExampleForCyclicDependency1gR(void *p) {
      delete [] ((vector<ExampleForCyclicDependency1>*)p);
   }
   static void destruct_vectorlEExampleForCyclicDependency1gR(void *p) {
      typedef vector<ExampleForCyclicDependency1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency1>

namespace ROOT {
   static TClass *vectorlEExampleClusterObjgR_Dictionary();
   static void vectorlEExampleClusterObjgR_TClassManip(TClass*);
   static void *new_vectorlEExampleClusterObjgR(void *p = 0);
   static void *newArray_vectorlEExampleClusterObjgR(Long_t size, void *p);
   static void delete_vectorlEExampleClusterObjgR(void *p);
   static void deleteArray_vectorlEExampleClusterObjgR(void *p);
   static void destruct_vectorlEExampleClusterObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleClusterObj>*)
   {
      vector<ExampleClusterObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleClusterObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleClusterObj>", -2, "vector", 386,
                  typeid(vector<ExampleClusterObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleClusterObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleClusterObj>) );
      instance.SetNew(&new_vectorlEExampleClusterObjgR);
      instance.SetNewArray(&newArray_vectorlEExampleClusterObjgR);
      instance.SetDelete(&delete_vectorlEExampleClusterObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleClusterObjgR);
      instance.SetDestructor(&destruct_vectorlEExampleClusterObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleClusterObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleClusterObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleClusterObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleClusterObj>*)0x0)->GetClass();
      vectorlEExampleClusterObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleClusterObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleClusterObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterObj> : new vector<ExampleClusterObj>;
   }
   static void *newArray_vectorlEExampleClusterObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterObj>[nElements] : new vector<ExampleClusterObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleClusterObjgR(void *p) {
      delete ((vector<ExampleClusterObj>*)p);
   }
   static void deleteArray_vectorlEExampleClusterObjgR(void *p) {
      delete [] ((vector<ExampleClusterObj>*)p);
   }
   static void destruct_vectorlEExampleClusterObjgR(void *p) {
      typedef vector<ExampleClusterObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleClusterObj>

namespace ROOT {
   static TClass *vectorlEExampleClusterDatagR_Dictionary();
   static void vectorlEExampleClusterDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleClusterDatagR(void *p = 0);
   static void *newArray_vectorlEExampleClusterDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleClusterDatagR(void *p);
   static void deleteArray_vectorlEExampleClusterDatagR(void *p);
   static void destruct_vectorlEExampleClusterDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleClusterData>*)
   {
      vector<ExampleClusterData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleClusterData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleClusterData>", -2, "vector", 386,
                  typeid(vector<ExampleClusterData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleClusterDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleClusterData>) );
      instance.SetNew(&new_vectorlEExampleClusterDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleClusterDatagR);
      instance.SetDelete(&delete_vectorlEExampleClusterDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleClusterDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleClusterDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleClusterData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleClusterData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleClusterDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleClusterData>*)0x0)->GetClass();
      vectorlEExampleClusterDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleClusterDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleClusterDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterData> : new vector<ExampleClusterData>;
   }
   static void *newArray_vectorlEExampleClusterDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterData>[nElements] : new vector<ExampleClusterData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleClusterDatagR(void *p) {
      delete ((vector<ExampleClusterData>*)p);
   }
   static void deleteArray_vectorlEExampleClusterDatagR(void *p) {
      delete [] ((vector<ExampleClusterData>*)p);
   }
   static void destruct_vectorlEExampleClusterDatagR(void *p) {
      typedef vector<ExampleClusterData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleClusterData>

namespace ROOT {
   static TClass *vectorlEExampleClusterCollectiongR_Dictionary();
   static void vectorlEExampleClusterCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEExampleClusterCollectiongR(void *p = 0);
   static void *newArray_vectorlEExampleClusterCollectiongR(Long_t size, void *p);
   static void delete_vectorlEExampleClusterCollectiongR(void *p);
   static void deleteArray_vectorlEExampleClusterCollectiongR(void *p);
   static void destruct_vectorlEExampleClusterCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleClusterCollection>*)
   {
      vector<ExampleClusterCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleClusterCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleClusterCollection>", -2, "vector", 386,
                  typeid(vector<ExampleClusterCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleClusterCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleClusterCollection>) );
      instance.SetNew(&new_vectorlEExampleClusterCollectiongR);
      instance.SetNewArray(&newArray_vectorlEExampleClusterCollectiongR);
      instance.SetDelete(&delete_vectorlEExampleClusterCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleClusterCollectiongR);
      instance.SetDestructor(&destruct_vectorlEExampleClusterCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleClusterCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleClusterCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleClusterCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleClusterCollection>*)0x0)->GetClass();
      vectorlEExampleClusterCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleClusterCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleClusterCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterCollection> : new vector<ExampleClusterCollection>;
   }
   static void *newArray_vectorlEExampleClusterCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleClusterCollection>[nElements] : new vector<ExampleClusterCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleClusterCollectiongR(void *p) {
      delete ((vector<ExampleClusterCollection>*)p);
   }
   static void deleteArray_vectorlEExampleClusterCollectiongR(void *p) {
      delete [] ((vector<ExampleClusterCollection>*)p);
   }
   static void destruct_vectorlEExampleClusterCollectiongR(void *p) {
      typedef vector<ExampleClusterCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleClusterCollection>

namespace ROOT {
   static TClass *vectorlEExampleClustergR_Dictionary();
   static void vectorlEExampleClustergR_TClassManip(TClass*);
   static void *new_vectorlEExampleClustergR(void *p = 0);
   static void *newArray_vectorlEExampleClustergR(Long_t size, void *p);
   static void delete_vectorlEExampleClustergR(void *p);
   static void deleteArray_vectorlEExampleClustergR(void *p);
   static void destruct_vectorlEExampleClustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleCluster>*)
   {
      vector<ExampleCluster> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleCluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleCluster>", -2, "vector", 386,
                  typeid(vector<ExampleCluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleClustergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleCluster>) );
      instance.SetNew(&new_vectorlEExampleClustergR);
      instance.SetNewArray(&newArray_vectorlEExampleClustergR);
      instance.SetDelete(&delete_vectorlEExampleClustergR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleClustergR);
      instance.SetDestructor(&destruct_vectorlEExampleClustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleCluster> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ExampleCluster>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleClustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ExampleCluster>*)0x0)->GetClass();
      vectorlEExampleClustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleClustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleClustergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleCluster> : new vector<ExampleCluster>;
   }
   static void *newArray_vectorlEExampleClustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ExampleCluster>[nElements] : new vector<ExampleCluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleClustergR(void *p) {
      delete ((vector<ExampleCluster>*)p);
   }
   static void deleteArray_vectorlEExampleClustergR(void *p) {
      delete [] ((vector<ExampleCluster>*)p);
   }
   static void destruct_vectorlEExampleClustergR(void *p) {
      typedef vector<ExampleCluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleCluster>

namespace ROOT {
   static TClass *vectorlEEventInfoObjgR_Dictionary();
   static void vectorlEEventInfoObjgR_TClassManip(TClass*);
   static void *new_vectorlEEventInfoObjgR(void *p = 0);
   static void *newArray_vectorlEEventInfoObjgR(Long_t size, void *p);
   static void delete_vectorlEEventInfoObjgR(void *p);
   static void deleteArray_vectorlEEventInfoObjgR(void *p);
   static void destruct_vectorlEEventInfoObjgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfoObj>*)
   {
      vector<EventInfoObj> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfoObj>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfoObj>", -2, "vector", 386,
                  typeid(vector<EventInfoObj>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfoObjgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfoObj>) );
      instance.SetNew(&new_vectorlEEventInfoObjgR);
      instance.SetNewArray(&newArray_vectorlEEventInfoObjgR);
      instance.SetDelete(&delete_vectorlEEventInfoObjgR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfoObjgR);
      instance.SetDestructor(&destruct_vectorlEEventInfoObjgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfoObj> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EventInfoObj>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfoObjgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EventInfoObj>*)0x0)->GetClass();
      vectorlEEventInfoObjgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfoObjgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfoObjgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoObj> : new vector<EventInfoObj>;
   }
   static void *newArray_vectorlEEventInfoObjgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoObj>[nElements] : new vector<EventInfoObj>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfoObjgR(void *p) {
      delete ((vector<EventInfoObj>*)p);
   }
   static void deleteArray_vectorlEEventInfoObjgR(void *p) {
      delete [] ((vector<EventInfoObj>*)p);
   }
   static void destruct_vectorlEEventInfoObjgR(void *p) {
      typedef vector<EventInfoObj> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfoObj>

namespace ROOT {
   static TClass *vectorlEEventInfoDatagR_Dictionary();
   static void vectorlEEventInfoDatagR_TClassManip(TClass*);
   static void *new_vectorlEEventInfoDatagR(void *p = 0);
   static void *newArray_vectorlEEventInfoDatagR(Long_t size, void *p);
   static void delete_vectorlEEventInfoDatagR(void *p);
   static void deleteArray_vectorlEEventInfoDatagR(void *p);
   static void destruct_vectorlEEventInfoDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfoData>*)
   {
      vector<EventInfoData> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfoData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfoData>", -2, "vector", 386,
                  typeid(vector<EventInfoData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfoDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfoData>) );
      instance.SetNew(&new_vectorlEEventInfoDatagR);
      instance.SetNewArray(&newArray_vectorlEEventInfoDatagR);
      instance.SetDelete(&delete_vectorlEEventInfoDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfoDatagR);
      instance.SetDestructor(&destruct_vectorlEEventInfoDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfoData> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EventInfoData>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfoDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EventInfoData>*)0x0)->GetClass();
      vectorlEEventInfoDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfoDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfoDatagR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoData> : new vector<EventInfoData>;
   }
   static void *newArray_vectorlEEventInfoDatagR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoData>[nElements] : new vector<EventInfoData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfoDatagR(void *p) {
      delete ((vector<EventInfoData>*)p);
   }
   static void deleteArray_vectorlEEventInfoDatagR(void *p) {
      delete [] ((vector<EventInfoData>*)p);
   }
   static void destruct_vectorlEEventInfoDatagR(void *p) {
      typedef vector<EventInfoData> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfoData>

namespace ROOT {
   static TClass *vectorlEEventInfoCollectiongR_Dictionary();
   static void vectorlEEventInfoCollectiongR_TClassManip(TClass*);
   static void *new_vectorlEEventInfoCollectiongR(void *p = 0);
   static void *newArray_vectorlEEventInfoCollectiongR(Long_t size, void *p);
   static void delete_vectorlEEventInfoCollectiongR(void *p);
   static void deleteArray_vectorlEEventInfoCollectiongR(void *p);
   static void destruct_vectorlEEventInfoCollectiongR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfoCollection>*)
   {
      vector<EventInfoCollection> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfoCollection>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfoCollection>", -2, "vector", 386,
                  typeid(vector<EventInfoCollection>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfoCollectiongR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfoCollection>) );
      instance.SetNew(&new_vectorlEEventInfoCollectiongR);
      instance.SetNewArray(&newArray_vectorlEEventInfoCollectiongR);
      instance.SetDelete(&delete_vectorlEEventInfoCollectiongR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfoCollectiongR);
      instance.SetDestructor(&destruct_vectorlEEventInfoCollectiongR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfoCollection> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EventInfoCollection>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfoCollectiongR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EventInfoCollection>*)0x0)->GetClass();
      vectorlEEventInfoCollectiongR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfoCollectiongR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfoCollectiongR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoCollection> : new vector<EventInfoCollection>;
   }
   static void *newArray_vectorlEEventInfoCollectiongR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfoCollection>[nElements] : new vector<EventInfoCollection>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfoCollectiongR(void *p) {
      delete ((vector<EventInfoCollection>*)p);
   }
   static void deleteArray_vectorlEEventInfoCollectiongR(void *p) {
      delete [] ((vector<EventInfoCollection>*)p);
   }
   static void destruct_vectorlEEventInfoCollectiongR(void *p) {
      typedef vector<EventInfoCollection> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfoCollection>

namespace ROOT {
   static TClass *vectorlEEventInfogR_Dictionary();
   static void vectorlEEventInfogR_TClassManip(TClass*);
   static void *new_vectorlEEventInfogR(void *p = 0);
   static void *newArray_vectorlEEventInfogR(Long_t size, void *p);
   static void delete_vectorlEEventInfogR(void *p);
   static void deleteArray_vectorlEEventInfogR(void *p);
   static void destruct_vectorlEEventInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfo>*)
   {
      vector<EventInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfo>", -2, "vector", 386,
                  typeid(vector<EventInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfo>) );
      instance.SetNew(&new_vectorlEEventInfogR);
      instance.SetNewArray(&newArray_vectorlEEventInfogR);
      instance.SetDelete(&delete_vectorlEEventInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfogR);
      instance.SetDestructor(&destruct_vectorlEEventInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<EventInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<EventInfo>*)0x0)->GetClass();
      vectorlEEventInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfo> : new vector<EventInfo>;
   }
   static void *newArray_vectorlEEventInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<EventInfo>[nElements] : new vector<EventInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfogR(void *p) {
      delete ((vector<EventInfo>*)p);
   }
   static void deleteArray_vectorlEEventInfogR(void *p) {
      delete [] ((vector<EventInfo>*)p);
   }
   static void destruct_vectorlEEventInfogR(void *p) {
      typedef vector<EventInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfo>

namespace ROOT {
   static TClass *vectorlEConstExampleWithVectorMembergR_Dictionary();
   static void vectorlEConstExampleWithVectorMembergR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleWithVectorMembergR(void *p = 0);
   static void *newArray_vectorlEConstExampleWithVectorMembergR(Long_t size, void *p);
   static void delete_vectorlEConstExampleWithVectorMembergR(void *p);
   static void deleteArray_vectorlEConstExampleWithVectorMembergR(void *p);
   static void destruct_vectorlEConstExampleWithVectorMembergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleWithVectorMember>*)
   {
      vector<ConstExampleWithVectorMember> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleWithVectorMember>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleWithVectorMember>", -2, "vector", 386,
                  typeid(vector<ConstExampleWithVectorMember>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleWithVectorMembergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleWithVectorMember>) );
      instance.SetNew(&new_vectorlEConstExampleWithVectorMembergR);
      instance.SetNewArray(&newArray_vectorlEConstExampleWithVectorMembergR);
      instance.SetDelete(&delete_vectorlEConstExampleWithVectorMembergR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleWithVectorMembergR);
      instance.SetDestructor(&destruct_vectorlEConstExampleWithVectorMembergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleWithVectorMember> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleWithVectorMember>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleWithVectorMembergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleWithVectorMember>*)0x0)->GetClass();
      vectorlEConstExampleWithVectorMembergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleWithVectorMembergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleWithVectorMembergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithVectorMember> : new vector<ConstExampleWithVectorMember>;
   }
   static void *newArray_vectorlEConstExampleWithVectorMembergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithVectorMember>[nElements] : new vector<ConstExampleWithVectorMember>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleWithVectorMembergR(void *p) {
      delete ((vector<ConstExampleWithVectorMember>*)p);
   }
   static void deleteArray_vectorlEConstExampleWithVectorMembergR(void *p) {
      delete [] ((vector<ConstExampleWithVectorMember>*)p);
   }
   static void destruct_vectorlEConstExampleWithVectorMembergR(void *p) {
      typedef vector<ConstExampleWithVectorMember> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleWithVectorMember>

namespace ROOT {
   static TClass *vectorlEConstExampleWithStringgR_Dictionary();
   static void vectorlEConstExampleWithStringgR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleWithStringgR(void *p = 0);
   static void *newArray_vectorlEConstExampleWithStringgR(Long_t size, void *p);
   static void delete_vectorlEConstExampleWithStringgR(void *p);
   static void deleteArray_vectorlEConstExampleWithStringgR(void *p);
   static void destruct_vectorlEConstExampleWithStringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleWithString>*)
   {
      vector<ConstExampleWithString> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleWithString>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleWithString>", -2, "vector", 386,
                  typeid(vector<ConstExampleWithString>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleWithStringgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleWithString>) );
      instance.SetNew(&new_vectorlEConstExampleWithStringgR);
      instance.SetNewArray(&newArray_vectorlEConstExampleWithStringgR);
      instance.SetDelete(&delete_vectorlEConstExampleWithStringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleWithStringgR);
      instance.SetDestructor(&destruct_vectorlEConstExampleWithStringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleWithString> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleWithString>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleWithStringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleWithString>*)0x0)->GetClass();
      vectorlEConstExampleWithStringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleWithStringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleWithStringgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithString> : new vector<ConstExampleWithString>;
   }
   static void *newArray_vectorlEConstExampleWithStringgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithString>[nElements] : new vector<ConstExampleWithString>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleWithStringgR(void *p) {
      delete ((vector<ConstExampleWithString>*)p);
   }
   static void deleteArray_vectorlEConstExampleWithStringgR(void *p) {
      delete [] ((vector<ConstExampleWithString>*)p);
   }
   static void destruct_vectorlEConstExampleWithStringgR(void *p) {
      typedef vector<ConstExampleWithString> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleWithString>

namespace ROOT {
   static TClass *vectorlEConstExampleWithOneRelationgR_Dictionary();
   static void vectorlEConstExampleWithOneRelationgR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleWithOneRelationgR(void *p = 0);
   static void *newArray_vectorlEConstExampleWithOneRelationgR(Long_t size, void *p);
   static void delete_vectorlEConstExampleWithOneRelationgR(void *p);
   static void deleteArray_vectorlEConstExampleWithOneRelationgR(void *p);
   static void destruct_vectorlEConstExampleWithOneRelationgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleWithOneRelation>*)
   {
      vector<ConstExampleWithOneRelation> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleWithOneRelation>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleWithOneRelation>", -2, "vector", 386,
                  typeid(vector<ConstExampleWithOneRelation>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleWithOneRelationgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleWithOneRelation>) );
      instance.SetNew(&new_vectorlEConstExampleWithOneRelationgR);
      instance.SetNewArray(&newArray_vectorlEConstExampleWithOneRelationgR);
      instance.SetDelete(&delete_vectorlEConstExampleWithOneRelationgR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleWithOneRelationgR);
      instance.SetDestructor(&destruct_vectorlEConstExampleWithOneRelationgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleWithOneRelation> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleWithOneRelation>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleWithOneRelationgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleWithOneRelation>*)0x0)->GetClass();
      vectorlEConstExampleWithOneRelationgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleWithOneRelationgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleWithOneRelationgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithOneRelation> : new vector<ConstExampleWithOneRelation>;
   }
   static void *newArray_vectorlEConstExampleWithOneRelationgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithOneRelation>[nElements] : new vector<ConstExampleWithOneRelation>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleWithOneRelationgR(void *p) {
      delete ((vector<ConstExampleWithOneRelation>*)p);
   }
   static void deleteArray_vectorlEConstExampleWithOneRelationgR(void *p) {
      delete [] ((vector<ConstExampleWithOneRelation>*)p);
   }
   static void destruct_vectorlEConstExampleWithOneRelationgR(void *p) {
      typedef vector<ConstExampleWithOneRelation> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleWithOneRelation>

namespace ROOT {
   static TClass *vectorlEConstExampleWithComponentgR_Dictionary();
   static void vectorlEConstExampleWithComponentgR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleWithComponentgR(void *p = 0);
   static void *newArray_vectorlEConstExampleWithComponentgR(Long_t size, void *p);
   static void delete_vectorlEConstExampleWithComponentgR(void *p);
   static void deleteArray_vectorlEConstExampleWithComponentgR(void *p);
   static void destruct_vectorlEConstExampleWithComponentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleWithComponent>*)
   {
      vector<ConstExampleWithComponent> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleWithComponent>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleWithComponent>", -2, "vector", 386,
                  typeid(vector<ConstExampleWithComponent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleWithComponentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleWithComponent>) );
      instance.SetNew(&new_vectorlEConstExampleWithComponentgR);
      instance.SetNewArray(&newArray_vectorlEConstExampleWithComponentgR);
      instance.SetDelete(&delete_vectorlEConstExampleWithComponentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleWithComponentgR);
      instance.SetDestructor(&destruct_vectorlEConstExampleWithComponentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleWithComponent> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleWithComponent>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleWithComponentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleWithComponent>*)0x0)->GetClass();
      vectorlEConstExampleWithComponentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleWithComponentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleWithComponentgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithComponent> : new vector<ConstExampleWithComponent>;
   }
   static void *newArray_vectorlEConstExampleWithComponentgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithComponent>[nElements] : new vector<ConstExampleWithComponent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleWithComponentgR(void *p) {
      delete ((vector<ConstExampleWithComponent>*)p);
   }
   static void deleteArray_vectorlEConstExampleWithComponentgR(void *p) {
      delete [] ((vector<ConstExampleWithComponent>*)p);
   }
   static void destruct_vectorlEConstExampleWithComponentgR(void *p) {
      typedef vector<ConstExampleWithComponent> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleWithComponent>

namespace ROOT {
   static TClass *vectorlEConstExampleWithArraygR_Dictionary();
   static void vectorlEConstExampleWithArraygR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleWithArraygR(void *p = 0);
   static void *newArray_vectorlEConstExampleWithArraygR(Long_t size, void *p);
   static void delete_vectorlEConstExampleWithArraygR(void *p);
   static void deleteArray_vectorlEConstExampleWithArraygR(void *p);
   static void destruct_vectorlEConstExampleWithArraygR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleWithArray>*)
   {
      vector<ConstExampleWithArray> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleWithArray>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleWithArray>", -2, "vector", 386,
                  typeid(vector<ConstExampleWithArray>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleWithArraygR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleWithArray>) );
      instance.SetNew(&new_vectorlEConstExampleWithArraygR);
      instance.SetNewArray(&newArray_vectorlEConstExampleWithArraygR);
      instance.SetDelete(&delete_vectorlEConstExampleWithArraygR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleWithArraygR);
      instance.SetDestructor(&destruct_vectorlEConstExampleWithArraygR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleWithArray> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleWithArray>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleWithArraygR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleWithArray>*)0x0)->GetClass();
      vectorlEConstExampleWithArraygR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleWithArraygR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleWithArraygR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithArray> : new vector<ConstExampleWithArray>;
   }
   static void *newArray_vectorlEConstExampleWithArraygR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleWithArray>[nElements] : new vector<ConstExampleWithArray>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleWithArraygR(void *p) {
      delete ((vector<ConstExampleWithArray>*)p);
   }
   static void deleteArray_vectorlEConstExampleWithArraygR(void *p) {
      delete [] ((vector<ConstExampleWithArray>*)p);
   }
   static void destruct_vectorlEConstExampleWithArraygR(void *p) {
      typedef vector<ConstExampleWithArray> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleWithArray>

namespace ROOT {
   static TClass *vectorlEConstExampleReferencingTypegR_Dictionary();
   static void vectorlEConstExampleReferencingTypegR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleReferencingTypegR(void *p = 0);
   static void *newArray_vectorlEConstExampleReferencingTypegR(Long_t size, void *p);
   static void delete_vectorlEConstExampleReferencingTypegR(void *p);
   static void deleteArray_vectorlEConstExampleReferencingTypegR(void *p);
   static void destruct_vectorlEConstExampleReferencingTypegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleReferencingType>*)
   {
      vector<ConstExampleReferencingType> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleReferencingType>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleReferencingType>", -2, "vector", 386,
                  typeid(vector<ConstExampleReferencingType>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleReferencingTypegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleReferencingType>) );
      instance.SetNew(&new_vectorlEConstExampleReferencingTypegR);
      instance.SetNewArray(&newArray_vectorlEConstExampleReferencingTypegR);
      instance.SetDelete(&delete_vectorlEConstExampleReferencingTypegR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleReferencingTypegR);
      instance.SetDestructor(&destruct_vectorlEConstExampleReferencingTypegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleReferencingType> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleReferencingType>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleReferencingTypegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleReferencingType>*)0x0)->GetClass();
      vectorlEConstExampleReferencingTypegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleReferencingTypegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleReferencingTypegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleReferencingType> : new vector<ConstExampleReferencingType>;
   }
   static void *newArray_vectorlEConstExampleReferencingTypegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleReferencingType>[nElements] : new vector<ConstExampleReferencingType>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleReferencingTypegR(void *p) {
      delete ((vector<ConstExampleReferencingType>*)p);
   }
   static void deleteArray_vectorlEConstExampleReferencingTypegR(void *p) {
      delete [] ((vector<ConstExampleReferencingType>*)p);
   }
   static void destruct_vectorlEConstExampleReferencingTypegR(void *p) {
      typedef vector<ConstExampleReferencingType> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleReferencingType>

namespace ROOT {
   static TClass *vectorlEConstExampleMCgR_Dictionary();
   static void vectorlEConstExampleMCgR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleMCgR(void *p = 0);
   static void *newArray_vectorlEConstExampleMCgR(Long_t size, void *p);
   static void delete_vectorlEConstExampleMCgR(void *p);
   static void deleteArray_vectorlEConstExampleMCgR(void *p);
   static void destruct_vectorlEConstExampleMCgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleMC>*)
   {
      vector<ConstExampleMC> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleMC>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleMC>", -2, "vector", 386,
                  typeid(vector<ConstExampleMC>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleMCgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleMC>) );
      instance.SetNew(&new_vectorlEConstExampleMCgR);
      instance.SetNewArray(&newArray_vectorlEConstExampleMCgR);
      instance.SetDelete(&delete_vectorlEConstExampleMCgR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleMCgR);
      instance.SetDestructor(&destruct_vectorlEConstExampleMCgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleMC> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleMC>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleMCgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleMC>*)0x0)->GetClass();
      vectorlEConstExampleMCgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleMCgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleMCgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleMC> : new vector<ConstExampleMC>;
   }
   static void *newArray_vectorlEConstExampleMCgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleMC>[nElements] : new vector<ConstExampleMC>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleMCgR(void *p) {
      delete ((vector<ConstExampleMC>*)p);
   }
   static void deleteArray_vectorlEConstExampleMCgR(void *p) {
      delete [] ((vector<ConstExampleMC>*)p);
   }
   static void destruct_vectorlEConstExampleMCgR(void *p) {
      typedef vector<ConstExampleMC> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleMC>

namespace ROOT {
   static TClass *vectorlEConstExampleHitgR_Dictionary();
   static void vectorlEConstExampleHitgR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleHitgR(void *p = 0);
   static void *newArray_vectorlEConstExampleHitgR(Long_t size, void *p);
   static void delete_vectorlEConstExampleHitgR(void *p);
   static void deleteArray_vectorlEConstExampleHitgR(void *p);
   static void destruct_vectorlEConstExampleHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleHit>*)
   {
      vector<ConstExampleHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleHit>", -2, "vector", 386,
                  typeid(vector<ConstExampleHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleHitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleHit>) );
      instance.SetNew(&new_vectorlEConstExampleHitgR);
      instance.SetNewArray(&newArray_vectorlEConstExampleHitgR);
      instance.SetDelete(&delete_vectorlEConstExampleHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleHitgR);
      instance.SetDestructor(&destruct_vectorlEConstExampleHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleHit>*)0x0)->GetClass();
      vectorlEConstExampleHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleHit> : new vector<ConstExampleHit>;
   }
   static void *newArray_vectorlEConstExampleHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleHit>[nElements] : new vector<ConstExampleHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleHitgR(void *p) {
      delete ((vector<ConstExampleHit>*)p);
   }
   static void deleteArray_vectorlEConstExampleHitgR(void *p) {
      delete [] ((vector<ConstExampleHit>*)p);
   }
   static void destruct_vectorlEConstExampleHitgR(void *p) {
      typedef vector<ConstExampleHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleHit>

namespace ROOT {
   static TClass *vectorlEConstExampleForCyclicDependency2gR_Dictionary();
   static void vectorlEConstExampleForCyclicDependency2gR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleForCyclicDependency2gR(void *p = 0);
   static void *newArray_vectorlEConstExampleForCyclicDependency2gR(Long_t size, void *p);
   static void delete_vectorlEConstExampleForCyclicDependency2gR(void *p);
   static void deleteArray_vectorlEConstExampleForCyclicDependency2gR(void *p);
   static void destruct_vectorlEConstExampleForCyclicDependency2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleForCyclicDependency2>*)
   {
      vector<ConstExampleForCyclicDependency2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleForCyclicDependency2>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleForCyclicDependency2>", -2, "vector", 386,
                  typeid(vector<ConstExampleForCyclicDependency2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleForCyclicDependency2gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleForCyclicDependency2>) );
      instance.SetNew(&new_vectorlEConstExampleForCyclicDependency2gR);
      instance.SetNewArray(&newArray_vectorlEConstExampleForCyclicDependency2gR);
      instance.SetDelete(&delete_vectorlEConstExampleForCyclicDependency2gR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleForCyclicDependency2gR);
      instance.SetDestructor(&destruct_vectorlEConstExampleForCyclicDependency2gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleForCyclicDependency2> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleForCyclicDependency2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleForCyclicDependency2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleForCyclicDependency2>*)0x0)->GetClass();
      vectorlEConstExampleForCyclicDependency2gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleForCyclicDependency2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleForCyclicDependency2gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleForCyclicDependency2> : new vector<ConstExampleForCyclicDependency2>;
   }
   static void *newArray_vectorlEConstExampleForCyclicDependency2gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleForCyclicDependency2>[nElements] : new vector<ConstExampleForCyclicDependency2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleForCyclicDependency2gR(void *p) {
      delete ((vector<ConstExampleForCyclicDependency2>*)p);
   }
   static void deleteArray_vectorlEConstExampleForCyclicDependency2gR(void *p) {
      delete [] ((vector<ConstExampleForCyclicDependency2>*)p);
   }
   static void destruct_vectorlEConstExampleForCyclicDependency2gR(void *p) {
      typedef vector<ConstExampleForCyclicDependency2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleForCyclicDependency2>

namespace ROOT {
   static TClass *vectorlEConstExampleForCyclicDependency1gR_Dictionary();
   static void vectorlEConstExampleForCyclicDependency1gR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleForCyclicDependency1gR(void *p = 0);
   static void *newArray_vectorlEConstExampleForCyclicDependency1gR(Long_t size, void *p);
   static void delete_vectorlEConstExampleForCyclicDependency1gR(void *p);
   static void deleteArray_vectorlEConstExampleForCyclicDependency1gR(void *p);
   static void destruct_vectorlEConstExampleForCyclicDependency1gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleForCyclicDependency1>*)
   {
      vector<ConstExampleForCyclicDependency1> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleForCyclicDependency1>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleForCyclicDependency1>", -2, "vector", 386,
                  typeid(vector<ConstExampleForCyclicDependency1>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleForCyclicDependency1gR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleForCyclicDependency1>) );
      instance.SetNew(&new_vectorlEConstExampleForCyclicDependency1gR);
      instance.SetNewArray(&newArray_vectorlEConstExampleForCyclicDependency1gR);
      instance.SetDelete(&delete_vectorlEConstExampleForCyclicDependency1gR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleForCyclicDependency1gR);
      instance.SetDestructor(&destruct_vectorlEConstExampleForCyclicDependency1gR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleForCyclicDependency1> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleForCyclicDependency1>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleForCyclicDependency1gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleForCyclicDependency1>*)0x0)->GetClass();
      vectorlEConstExampleForCyclicDependency1gR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleForCyclicDependency1gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleForCyclicDependency1gR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleForCyclicDependency1> : new vector<ConstExampleForCyclicDependency1>;
   }
   static void *newArray_vectorlEConstExampleForCyclicDependency1gR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleForCyclicDependency1>[nElements] : new vector<ConstExampleForCyclicDependency1>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleForCyclicDependency1gR(void *p) {
      delete ((vector<ConstExampleForCyclicDependency1>*)p);
   }
   static void deleteArray_vectorlEConstExampleForCyclicDependency1gR(void *p) {
      delete [] ((vector<ConstExampleForCyclicDependency1>*)p);
   }
   static void destruct_vectorlEConstExampleForCyclicDependency1gR(void *p) {
      typedef vector<ConstExampleForCyclicDependency1> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleForCyclicDependency1>

namespace ROOT {
   static TClass *vectorlEConstExampleClustergR_Dictionary();
   static void vectorlEConstExampleClustergR_TClassManip(TClass*);
   static void *new_vectorlEConstExampleClustergR(void *p = 0);
   static void *newArray_vectorlEConstExampleClustergR(Long_t size, void *p);
   static void delete_vectorlEConstExampleClustergR(void *p);
   static void deleteArray_vectorlEConstExampleClustergR(void *p);
   static void destruct_vectorlEConstExampleClustergR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstExampleCluster>*)
   {
      vector<ConstExampleCluster> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstExampleCluster>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstExampleCluster>", -2, "vector", 386,
                  typeid(vector<ConstExampleCluster>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstExampleClustergR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstExampleCluster>) );
      instance.SetNew(&new_vectorlEConstExampleClustergR);
      instance.SetNewArray(&newArray_vectorlEConstExampleClustergR);
      instance.SetDelete(&delete_vectorlEConstExampleClustergR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstExampleClustergR);
      instance.SetDestructor(&destruct_vectorlEConstExampleClustergR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstExampleCluster> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstExampleCluster>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstExampleClustergR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstExampleCluster>*)0x0)->GetClass();
      vectorlEConstExampleClustergR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstExampleClustergR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstExampleClustergR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleCluster> : new vector<ConstExampleCluster>;
   }
   static void *newArray_vectorlEConstExampleClustergR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstExampleCluster>[nElements] : new vector<ConstExampleCluster>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstExampleClustergR(void *p) {
      delete ((vector<ConstExampleCluster>*)p);
   }
   static void deleteArray_vectorlEConstExampleClustergR(void *p) {
      delete [] ((vector<ConstExampleCluster>*)p);
   }
   static void destruct_vectorlEConstExampleClustergR(void *p) {
      typedef vector<ConstExampleCluster> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstExampleCluster>

namespace ROOT {
   static TClass *vectorlEConstEventInfogR_Dictionary();
   static void vectorlEConstEventInfogR_TClassManip(TClass*);
   static void *new_vectorlEConstEventInfogR(void *p = 0);
   static void *newArray_vectorlEConstEventInfogR(Long_t size, void *p);
   static void delete_vectorlEConstEventInfogR(void *p);
   static void deleteArray_vectorlEConstEventInfogR(void *p);
   static void destruct_vectorlEConstEventInfogR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ConstEventInfo>*)
   {
      vector<ConstEventInfo> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ConstEventInfo>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ConstEventInfo>", -2, "vector", 386,
                  typeid(vector<ConstEventInfo>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEConstEventInfogR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ConstEventInfo>) );
      instance.SetNew(&new_vectorlEConstEventInfogR);
      instance.SetNewArray(&newArray_vectorlEConstEventInfogR);
      instance.SetDelete(&delete_vectorlEConstEventInfogR);
      instance.SetDeleteArray(&deleteArray_vectorlEConstEventInfogR);
      instance.SetDestructor(&destruct_vectorlEConstEventInfogR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ConstEventInfo> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ConstEventInfo>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEConstEventInfogR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ConstEventInfo>*)0x0)->GetClass();
      vectorlEConstEventInfogR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEConstEventInfogR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEConstEventInfogR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstEventInfo> : new vector<ConstEventInfo>;
   }
   static void *newArray_vectorlEConstEventInfogR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ConstEventInfo>[nElements] : new vector<ConstEventInfo>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEConstEventInfogR(void *p) {
      delete ((vector<ConstEventInfo>*)p);
   }
   static void deleteArray_vectorlEConstEventInfogR(void *p) {
      delete [] ((vector<ConstEventInfo>*)p);
   }
   static void destruct_vectorlEConstEventInfogR(void *p) {
      typedef vector<ConstEventInfo> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ConstEventInfo>

namespace {
  void TriggerDictionaryInitialization_libTestDataModelDict_Impl() {
    static const char* headers[] = {
"0",
0
    };
    static const char* includePaths[] = {
"/home/romanov/eic/soft/podio/src/v00-13/tests",
"/home/romanov/eic/soft/podio/src/v00-13/tests",
"/home/romanov/eic/soft/podio/src/v00-13/tests",
"/home/romanov/eic/soft/podio/src/v00-13/include",
"/home/romanov/eic/soft/root/root-v6-20-04/include",
"/home/romanov/eic/soft/root/root-v6-20-04/include/",
"/home/romanov/eic/soft/podio/src/v00-13/cmake-build-debug/tests/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libTestDataModelDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoData.h")))  __attribute__((annotate("$clingAutoload$datamodel/EventInfoConst.h")))  EventInfoData;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/EventInfoConst.h")))  EventInfoObj;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoConst.h")))  ConstEventInfo;
class EventInfo;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHitConst.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ConstExampleHit;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ConstExampleCluster;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ExampleClusterData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Data.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Const.h")))  ExampleForCyclicDependency1Data;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Const.h")))  ConstExampleForCyclicDependency2;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Data.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Const.h")))  ExampleForCyclicDependency2Data;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Const.h")))  ConstExampleForCyclicDependency1;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHitData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ExampleHitData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleMCConst.h")))  ConstExampleMC;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleMCData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleMCConst.h")))  ExampleMCData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeConst.h")))  ConstExampleReferencingType;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeConst.h")))  ExampleReferencingTypeData;
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespaceConst.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ConstExampleWithNamespace;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ExampleWithARelationData;}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayConst.h")))  ExampleWithArrayData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentConst.h")))  ExampleWithComponentData;
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespaceData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ExampleWithNamespaceData;}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationConst.h")))  ExampleWithOneRelationData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithStringData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithStringConst.h")))  ExampleWithStringData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberData.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberConst.h")))  ExampleWithVectorMemberData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayConst.h")))  ExampleWithArrayObj;
class ExampleWithArrayCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayConst.h")))  ConstExampleWithArray;
class ExampleWithArray;
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ExampleWithARelationObj;}
namespace ex42{class ExampleWithARelationCollection;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ConstExampleWithARelation;}
namespace ex42{class ExampleWithARelation;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespaceObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ExampleWithNamespaceObj;}
namespace ex42{class ExampleWithNamespaceCollection;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespace.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  ExampleWithNamespace;}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithStringObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithStringConst.h")))  ExampleWithStringObj;
class ExampleWithStringCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithStringConst.h")))  ConstExampleWithString;
class ExampleWithString;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Obj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Const.h")))  ExampleForCyclicDependency2Obj;
class ExampleForCyclicDependency2Collection;
class ExampleForCyclicDependency2;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Obj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Const.h")))  ExampleForCyclicDependency1Obj;
class ExampleForCyclicDependency1Collection;
class ExampleForCyclicDependency1;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentConst.h")))  ExampleWithComponentObj;
class ExampleWithComponentCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentConst.h")))  ConstExampleWithComponent;
class ExampleWithComponent;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationConst.h")))  ExampleWithOneRelationObj;
class ExampleWithOneRelationCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationConst.h")))  ConstExampleWithOneRelation;
class ExampleWithOneRelation;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberConst.h")))  ExampleWithVectorMemberObj;
class ExampleWithVectorMemberCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberConst.h")))  ConstExampleWithVectorMember;
class ExampleWithVectorMember;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeConst.h")))  ExampleReferencingTypeObj;
class ExampleReferencingTypeCollection;
class ExampleReferencingType;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ExampleClusterObj;
class ExampleClusterCollection;
class ExampleCluster;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleMCObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleMCConst.h")))  ExampleMCObj;
class ExampleMCCollection;
class ExampleMC;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHitObj.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ExampleHitObj;
class ExampleHitCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHit.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterConst.h")))  ExampleHit;
class EventInfoCollection;
namespace ex2{class NamespaceInNamespaceStruct;}
namespace ex2{class __attribute__((annotate("$clingAutoload$datamodel/NamespaceStruct.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationConst.h")))  NamespaceStruct;}
class __attribute__((annotate("$clingAutoload$datamodel/NotSoSimpleStruct.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayConst.h")))  NotSoSimpleStruct;
class __attribute__((annotate("$clingAutoload$datamodel/SimpleStruct.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayConst.h")))  SimpleStruct;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTestDataModelDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfo_H
#define DATAMODEL_EventInfo_H

#include "datamodel/EventInfoConst.h"
#include "datamodel/EventInfoObj.h"

#include "podio/ObjectID.h"
#include <ostream>





class EventInfoCollection;
class EventInfoCollectionIterator;
class ConstEventInfo;

/** @class EventInfo
 *  Event info
 *  @author: B. Hegner
 */
class EventInfo {

  friend EventInfoCollection;
  friend EventInfoCollectionIterator;
  friend ConstEventInfo;

public:

  /// default constructor
  EventInfo();
  EventInfo(int Number);

  /// constructor from existing EventInfoObj
  EventInfo(EventInfoObj* obj);

  /// copy constructor
  EventInfo(const EventInfo& other);

  /// copy-assignment operator
  EventInfo& operator=(const EventInfo& other);

  /// support cloning (deep-copy)
  EventInfo clone() const;

  /// destructor
  ~EventInfo();

  /// conversion to const object
  operator ConstEventInfo() const;

public:

  /// Access the event number
  const int& Number() const;



  /// Set the event number
  void Number(int value);




void setNumber(int n) { Number( n ) ; } 

int getNumber() const;

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const EventInfo& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstEventInfo& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const EventInfo& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  EventInfoObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstEventInfo& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoCollection_H
#define DATAMODEL_EventInfoCollection_H

// datamodel specific includes
#include "datamodel/EventInfoData.h"
#include "datamodel/EventInfo.h"
#include "datamodel/EventInfoObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using EventInfoDataContainer = std::vector<EventInfoData>;
using EventInfoObjPointerContainer = std::deque<EventInfoObj*>;

class EventInfoCollectionIterator {
public:
  EventInfoCollectionIterator(int index, const EventInfoObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const EventInfoCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const EventInfo operator*() const;
  const EventInfo* operator->() const;
  const EventInfoCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable EventInfo m_object;
  const EventInfoObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class EventInfoCollection : public podio::CollectionBase {

public:
  using const_iterator = const EventInfoCollectionIterator;

  EventInfoCollection();
//  EventInfoCollection(const EventInfoCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  EventInfoCollection(EventInfoVector* data, int collectionID);
  ~EventInfoCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoCollection* operator->() { return (EventInfoCollection*) this; }

  /// Append a new object to the collection, and return this object.
  EventInfo create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  EventInfo create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("EventInfo"); }

  /// Returns the const object of given index
  const EventInfo operator[](unsigned int index) const;
  /// Returns the object of a given index
  EventInfo operator[](unsigned int index);
  /// Returns the const object of given index
  const EventInfo at(unsigned int index) const;
  /// Returns the object of given index
  EventInfo at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstEventInfo object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (EventInfoObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<EventInfoData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<int, arraysize> Number() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  EventInfoObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  EventInfoDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const EventInfoCollection& v);

template<typename... Args>
EventInfo EventInfoCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new EventInfoObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return EventInfo(obj);
}

template<size_t arraysize>
const std::array<int, arraysize> EventInfoCollection::Number() const {
  std::array<int, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.Number;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstEventInfo_H
#define DATAMODEL_ConstEventInfo_H

#include "datamodel/EventInfoObj.h"

#include "podio/ObjectID.h"





class EventInfo;
class EventInfoCollection;
class EventInfoCollectionIterator;

/** @class ConstEventInfo
 *  Event info
 *  @author: B. Hegner
 */
class ConstEventInfo {

  friend EventInfo;
  friend EventInfoCollection;
  friend EventInfoCollectionIterator;

public:
  /// default constructor
  ConstEventInfo();
  ConstEventInfo(int Number);

  /// constructor from existing EventInfoObj
  ConstEventInfo(EventInfoObj* obj);

  /// copy constructor
  ConstEventInfo(const ConstEventInfo& other);

  /// copy-assignment operator
  ConstEventInfo& operator=(const ConstEventInfo& other);

  /// support cloning (deep-copy)
  ConstEventInfo clone() const;

  /// destructor
  ~ConstEventInfo();


public:

  /// Access the event number
  const int& Number() const;




int getNumber() const;

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstEventInfo& other) const { return m_obj == other.m_obj; }
  bool operator==(const EventInfo& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstEventInfo& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  EventInfoObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoDATA_H
#define DATAMODEL_EventInfoDATA_H




/** @class EventInfoData
 *  Event info
 *  @author: B. Hegner
 */
class EventInfoData {
public:
  int Number; ///< event number

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoOBJ_H
#define DATAMODEL_EventInfoOBJ_H

// data model specific includes
#include "datamodel/EventInfoData.h"

#include "podio/ObjBase.h"




class EventInfo;
class ConstEventInfo;

class EventInfoObj : public podio::ObjBase {
public:
  /// constructor
  EventInfoObj();
  /// copy constructor (does a deep-copy of relation containers)
  EventInfoObj(const EventInfoObj&);
  /// constructor from ObjectID and EventInfoData
  /// does not initialize the internal relation containers
  EventInfoObj(const podio::ObjectID id, EventInfoData data);
  virtual ~EventInfoObj();

public:
  EventInfoData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleCluster_H
#define DATAMODEL_ExampleCluster_H

#include "datamodel/ExampleClusterConst.h"
#include "datamodel/ExampleClusterObj.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleHit.h"
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleClusterCollection;
class ExampleClusterCollectionIterator;
class ConstExampleCluster;

/** @class ExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class ExampleCluster {

  friend ExampleClusterCollection;
  friend ExampleClusterCollectionIterator;
  friend ConstExampleCluster;

public:

  /// default constructor
  ExampleCluster();
  ExampleCluster(double energy);

  /// constructor from existing ExampleClusterObj
  ExampleCluster(ExampleClusterObj* obj);

  /// copy constructor
  ExampleCluster(const ExampleCluster& other);

  /// copy-assignment operator
  ExampleCluster& operator=(const ExampleCluster& other);

  /// support cloning (deep-copy)
  ExampleCluster clone() const;

  /// destructor
  ~ExampleCluster();

  /// conversion to const object
  operator ConstExampleCluster() const;

public:

  /// Access the cluster energy
  const double& energy() const;



  /// Set the cluster energy
  void energy(double value);



  void addHits(ConstExampleHit);
  unsigned int Hits_size() const;
  ConstExampleHit Hits(unsigned int) const;
  std::vector<ConstExampleHit>::const_iterator Hits_begin() const;
  std::vector<ConstExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ConstExampleHit> Hits() const;
  void addClusters(ConstExampleCluster);
  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleCluster& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleCluster& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleClusterObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleCluster& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterCollection_H
#define DATAMODEL_ExampleClusterCollection_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleClusterObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleClusterDataContainer = std::vector<ExampleClusterData>;
using ExampleClusterObjPointerContainer = std::deque<ExampleClusterObj*>;

class ExampleClusterCollectionIterator {
public:
  ExampleClusterCollectionIterator(int index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleClusterCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleCluster operator*() const;
  const ExampleCluster* operator->() const;
  const ExampleClusterCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleClusterCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleClusterCollectionIterator;

  ExampleClusterCollection();
//  ExampleClusterCollection(const ExampleClusterCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleClusterCollection(ExampleClusterVector* data, int collectionID);
  ~ExampleClusterCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleClusterCollection* operator->() { return (ExampleClusterCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleCluster create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleCluster create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleCluster"); }

  /// Returns the const object of given index
  const ExampleCluster operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleCluster operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleCluster at(unsigned int index) const;
  /// Returns the object of given index
  ExampleCluster at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleCluster object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleClusterObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleClusterData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<double, arraysize> energy() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleClusterObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleHit>* m_rel_Hits; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleHit>*> m_rel_Hits_tmp; ///< Relation buffer for internal book-keeping
  std::vector<::ConstExampleCluster>* m_rel_Clusters; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleCluster>*> m_rel_Clusters_tmp; ///< Relation buffer for internal book-keeping

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleClusterDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleClusterCollection& v);

template<typename... Args>
ExampleCluster ExampleClusterCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleClusterObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleCluster(obj);
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleClusterCollection::energy() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.energy;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleCluster_H
#define DATAMODEL_ConstExampleCluster_H

#include "datamodel/ExampleClusterObj.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleHit.h"
#include <vector>
#include "podio/ObjectID.h"





class ExampleCluster;
class ExampleClusterCollection;
class ExampleClusterCollectionIterator;

/** @class ConstExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class ConstExampleCluster {

  friend ExampleCluster;
  friend ExampleClusterCollection;
  friend ExampleClusterCollectionIterator;

public:
  /// default constructor
  ConstExampleCluster();
  ConstExampleCluster(double energy);

  /// constructor from existing ExampleClusterObj
  ConstExampleCluster(ExampleClusterObj* obj);

  /// copy constructor
  ConstExampleCluster(const ConstExampleCluster& other);

  /// copy-assignment operator
  ConstExampleCluster& operator=(const ConstExampleCluster& other);

  /// support cloning (deep-copy)
  ConstExampleCluster clone() const;

  /// destructor
  ~ConstExampleCluster();


public:

  /// Access the cluster energy
  const double& energy() const;



  unsigned int Hits_size() const;
  ConstExampleHit Hits(unsigned int) const;
  std::vector<ConstExampleHit>::const_iterator Hits_begin() const;
  std::vector<ConstExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ConstExampleHit> Hits() const;
  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleCluster& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleCluster& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleClusterObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterDATA_H
#define DATAMODEL_ExampleClusterDATA_H




/** @class ExampleClusterData
 *  Cluster
 *  @author: B. Hegner
 */
class ExampleClusterData {
public:
  double energy; ///< cluster energy

  unsigned int Hits_begin;
  unsigned int Hits_end;
  unsigned int Clusters_begin;
  unsigned int Clusters_end;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterOBJ_H
#define DATAMODEL_ExampleClusterOBJ_H

// data model specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleHit.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleCluster;
class ConstExampleCluster;

class ExampleClusterObj : public podio::ObjBase {
public:
  /// constructor
  ExampleClusterObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleClusterObj(const ExampleClusterObj&);
  /// constructor from ObjectID and ExampleClusterData
  /// does not initialize the internal relation containers
  ExampleClusterObj(const podio::ObjectID id, ExampleClusterData data);
  virtual ~ExampleClusterObj();

public:
  ExampleClusterData data;
  std::vector<ConstExampleHit>* m_Hits;
  std::vector<ConstExampleCluster>* m_Clusters;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1_H
#define DATAMODEL_ExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Const.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
class ExampleForCyclicDependency2;
class ConstExampleForCyclicDependency2;




class ExampleForCyclicDependency1Collection;
class ExampleForCyclicDependency1CollectionIterator;
class ConstExampleForCyclicDependency1;

/** @class ExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency1 {

  friend ExampleForCyclicDependency1Collection;
  friend ExampleForCyclicDependency1CollectionIterator;
  friend ConstExampleForCyclicDependency1;

public:

  /// default constructor
  ExampleForCyclicDependency1();

  /// constructor from existing ExampleForCyclicDependency1Obj
  ExampleForCyclicDependency1(ExampleForCyclicDependency1Obj* obj);

  /// copy constructor
  ExampleForCyclicDependency1(const ExampleForCyclicDependency1& other);

  /// copy-assignment operator
  ExampleForCyclicDependency1& operator=(const ExampleForCyclicDependency1& other);

  /// support cloning (deep-copy)
  ExampleForCyclicDependency1 clone() const;

  /// destructor
  ~ExampleForCyclicDependency1();

  /// conversion to const object
  operator ConstExampleForCyclicDependency1() const;

public:


  /// Access the a ref
  const ConstExampleForCyclicDependency2 ref() const;


  /// Set the a ref
  void ref(ConstExampleForCyclicDependency2 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleForCyclicDependency1& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleForCyclicDependency1Obj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleForCyclicDependency1& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1Collection_H
#define DATAMODEL_ExampleForCyclicDependency1Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleForCyclicDependency1DataContainer = std::vector<ExampleForCyclicDependency1Data>;
using ExampleForCyclicDependency1ObjPointerContainer = std::deque<ExampleForCyclicDependency1Obj*>;

class ExampleForCyclicDependency1CollectionIterator {
public:
  ExampleForCyclicDependency1CollectionIterator(int index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleForCyclicDependency1 operator*() const;
  const ExampleForCyclicDependency1* operator->() const;
  const ExampleForCyclicDependency1CollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency1Collection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleForCyclicDependency1CollectionIterator;

  ExampleForCyclicDependency1Collection();
//  ExampleForCyclicDependency1Collection(const ExampleForCyclicDependency1Collection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Vector* data, int collectionID);
  ~ExampleForCyclicDependency1Collection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency1Collection* operator->() { return (ExampleForCyclicDependency1Collection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleForCyclicDependency1 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleForCyclicDependency1 create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleForCyclicDependency1"); }

  /// Returns the const object of given index
  const ExampleForCyclicDependency1 operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleForCyclicDependency1 operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleForCyclicDependency1 at(unsigned int index) const;
  /// Returns the object of given index
  ExampleForCyclicDependency1 at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleForCyclicDependency1 object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleForCyclicDependency1Obj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleForCyclicDependency1Data>* _getBuffer() { return m_data; }


private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleForCyclicDependency1ObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleForCyclicDependency2>* m_rel_ref; ///< Relation buffer for read / write

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleForCyclicDependency1DataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v);

template<typename... Args>
ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleForCyclicDependency1Obj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleForCyclicDependency1(obj);
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleForCyclicDependency1_H
#define DATAMODEL_ConstExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Obj.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency2;
class ConstExampleForCyclicDependency2;




class ExampleForCyclicDependency1;
class ExampleForCyclicDependency1Collection;
class ExampleForCyclicDependency1CollectionIterator;

/** @class ConstExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ConstExampleForCyclicDependency1 {

  friend ExampleForCyclicDependency1;
  friend ExampleForCyclicDependency1Collection;
  friend ExampleForCyclicDependency1CollectionIterator;

public:
  /// default constructor
  ConstExampleForCyclicDependency1();

  /// constructor from existing ExampleForCyclicDependency1Obj
  ConstExampleForCyclicDependency1(ExampleForCyclicDependency1Obj* obj);

  /// copy constructor
  ConstExampleForCyclicDependency1(const ConstExampleForCyclicDependency1& other);

  /// copy-assignment operator
  ConstExampleForCyclicDependency1& operator=(const ConstExampleForCyclicDependency1& other);

  /// support cloning (deep-copy)
  ConstExampleForCyclicDependency1 clone() const;

  /// destructor
  ~ConstExampleForCyclicDependency1();


public:


  /// Access the a ref
  const ConstExampleForCyclicDependency2 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency1& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleForCyclicDependency1Obj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1DATA_H
#define DATAMODEL_ExampleForCyclicDependency1DATA_H




/** @class ExampleForCyclicDependency1Data
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency1Data {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1OBJ_H
#define DATAMODEL_ExampleForCyclicDependency1OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"

#include "podio/ObjBase.h"

// forward declarations
class ConstExampleForCyclicDependency2;



class ExampleForCyclicDependency1;
class ConstExampleForCyclicDependency1;

class ExampleForCyclicDependency1Obj : public podio::ObjBase {
public:
  /// constructor
  ExampleForCyclicDependency1Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency1Obj(const ExampleForCyclicDependency1Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency1Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency1Obj(const podio::ObjectID id, ExampleForCyclicDependency1Data data);
  virtual ~ExampleForCyclicDependency1Obj();

public:
  ExampleForCyclicDependency1Data data;
  ConstExampleForCyclicDependency2* m_ref;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2_H
#define DATAMODEL_ExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Const.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
class ExampleForCyclicDependency1;
class ConstExampleForCyclicDependency1;




class ExampleForCyclicDependency2Collection;
class ExampleForCyclicDependency2CollectionIterator;
class ConstExampleForCyclicDependency2;

/** @class ExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency2 {

  friend ExampleForCyclicDependency2Collection;
  friend ExampleForCyclicDependency2CollectionIterator;
  friend ConstExampleForCyclicDependency2;

public:

  /// default constructor
  ExampleForCyclicDependency2();

  /// constructor from existing ExampleForCyclicDependency2Obj
  ExampleForCyclicDependency2(ExampleForCyclicDependency2Obj* obj);

  /// copy constructor
  ExampleForCyclicDependency2(const ExampleForCyclicDependency2& other);

  /// copy-assignment operator
  ExampleForCyclicDependency2& operator=(const ExampleForCyclicDependency2& other);

  /// support cloning (deep-copy)
  ExampleForCyclicDependency2 clone() const;

  /// destructor
  ~ExampleForCyclicDependency2();

  /// conversion to const object
  operator ConstExampleForCyclicDependency2() const;

public:


  /// Access the a ref
  const ConstExampleForCyclicDependency1 ref() const;


  /// Set the a ref
  void ref(ConstExampleForCyclicDependency1 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleForCyclicDependency2& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleForCyclicDependency2Obj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleForCyclicDependency2& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2Collection_H
#define DATAMODEL_ExampleForCyclicDependency2Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleForCyclicDependency2DataContainer = std::vector<ExampleForCyclicDependency2Data>;
using ExampleForCyclicDependency2ObjPointerContainer = std::deque<ExampleForCyclicDependency2Obj*>;

class ExampleForCyclicDependency2CollectionIterator {
public:
  ExampleForCyclicDependency2CollectionIterator(int index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleForCyclicDependency2 operator*() const;
  const ExampleForCyclicDependency2* operator->() const;
  const ExampleForCyclicDependency2CollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency2Collection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleForCyclicDependency2CollectionIterator;

  ExampleForCyclicDependency2Collection();
//  ExampleForCyclicDependency2Collection(const ExampleForCyclicDependency2Collection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Vector* data, int collectionID);
  ~ExampleForCyclicDependency2Collection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency2Collection* operator->() { return (ExampleForCyclicDependency2Collection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleForCyclicDependency2 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleForCyclicDependency2 create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleForCyclicDependency2"); }

  /// Returns the const object of given index
  const ExampleForCyclicDependency2 operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleForCyclicDependency2 operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleForCyclicDependency2 at(unsigned int index) const;
  /// Returns the object of given index
  ExampleForCyclicDependency2 at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleForCyclicDependency2 object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleForCyclicDependency2Obj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleForCyclicDependency2Data>* _getBuffer() { return m_data; }


private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleForCyclicDependency2ObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleForCyclicDependency1>* m_rel_ref; ///< Relation buffer for read / write

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleForCyclicDependency2DataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2Collection& v);

template<typename... Args>
ExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleForCyclicDependency2Obj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleForCyclicDependency2(obj);
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleForCyclicDependency2_H
#define DATAMODEL_ConstExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Obj.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency1;
class ConstExampleForCyclicDependency1;




class ExampleForCyclicDependency2;
class ExampleForCyclicDependency2Collection;
class ExampleForCyclicDependency2CollectionIterator;

/** @class ConstExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ConstExampleForCyclicDependency2 {

  friend ExampleForCyclicDependency2;
  friend ExampleForCyclicDependency2Collection;
  friend ExampleForCyclicDependency2CollectionIterator;

public:
  /// default constructor
  ConstExampleForCyclicDependency2();

  /// constructor from existing ExampleForCyclicDependency2Obj
  ConstExampleForCyclicDependency2(ExampleForCyclicDependency2Obj* obj);

  /// copy constructor
  ConstExampleForCyclicDependency2(const ConstExampleForCyclicDependency2& other);

  /// copy-assignment operator
  ConstExampleForCyclicDependency2& operator=(const ConstExampleForCyclicDependency2& other);

  /// support cloning (deep-copy)
  ConstExampleForCyclicDependency2 clone() const;

  /// destructor
  ~ConstExampleForCyclicDependency2();


public:


  /// Access the a ref
  const ConstExampleForCyclicDependency1 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency2& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleForCyclicDependency2Obj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2DATA_H
#define DATAMODEL_ExampleForCyclicDependency2DATA_H




/** @class ExampleForCyclicDependency2Data
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency2Data {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2OBJ_H
#define DATAMODEL_ExampleForCyclicDependency2OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"

#include "podio/ObjBase.h"

// forward declarations
class ConstExampleForCyclicDependency1;



class ExampleForCyclicDependency2;
class ConstExampleForCyclicDependency2;

class ExampleForCyclicDependency2Obj : public podio::ObjBase {
public:
  /// constructor
  ExampleForCyclicDependency2Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency2Obj(const ExampleForCyclicDependency2Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency2Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency2Obj(const podio::ObjectID id, ExampleForCyclicDependency2Data data);
  virtual ~ExampleForCyclicDependency2Obj();

public:
  ExampleForCyclicDependency2Data data;
  ConstExampleForCyclicDependency1* m_ref;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_H
#define DATAMODEL_ExampleHit_H

#include "datamodel/ExampleHitConst.h"
#include "datamodel/ExampleHitObj.h"

#include "podio/ObjectID.h"
#include <ostream>





class ExampleHitCollection;
class ExampleHitCollectionIterator;
class ConstExampleHit;

/** @class ExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class ExampleHit {

  friend ExampleHitCollection;
  friend ExampleHitCollectionIterator;
  friend ConstExampleHit;

public:

  /// default constructor
  ExampleHit();
  ExampleHit(unsigned long long cellID, double x, double y, double z, double energy);

  /// constructor from existing ExampleHitObj
  ExampleHit(ExampleHitObj* obj);

  /// copy constructor
  ExampleHit(const ExampleHit& other);

  /// copy-assignment operator
  ExampleHit& operator=(const ExampleHit& other);

  /// support cloning (deep-copy)
  ExampleHit clone() const;

  /// destructor
  ~ExampleHit();

  /// conversion to const object
  operator ConstExampleHit() const;

public:

  /// Access the cellID
  const unsigned long long& cellID() const;

  /// Access the x-coordinate
  const double& x() const;

  /// Access the y-coordinate
  const double& y() const;

  /// Access the z-coordinate
  const double& z() const;

  /// Access the measured energy deposit
  const double& energy() const;



  /// Set the cellID
  void cellID(unsigned long long value);

  /// Set the x-coordinate
  void x(double value);

  /// Set the y-coordinate
  void y(double value);

  /// Set the z-coordinate
  void z(double value);

  /// Set the measured energy deposit
  void energy(double value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleHitObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleHit& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitCollection_H
#define DATAMODEL_ExampleHitCollection_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHit.h"
#include "datamodel/ExampleHitObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleHitDataContainer = std::vector<ExampleHitData>;
using ExampleHitObjPointerContainer = std::deque<ExampleHitObj*>;

class ExampleHitCollectionIterator {
public:
  ExampleHitCollectionIterator(int index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleHit operator*() const;
  const ExampleHit* operator->() const;
  const ExampleHitCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleHitCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleHitCollectionIterator;

  ExampleHitCollection();
//  ExampleHitCollection(const ExampleHitCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleHitCollection(ExampleHitVector* data, int collectionID);
  ~ExampleHitCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleHitCollection* operator->() { return (ExampleHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleHit create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleHit"); }

  /// Returns the const object of given index
  const ExampleHit operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleHit operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleHit at(unsigned int index) const;
  /// Returns the object of given index
  ExampleHit at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleHit object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleHitObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleHitData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<unsigned long long, arraysize> cellID() const;
  template<size_t arraysize>
  const std::array<double, arraysize> x() const;
  template<size_t arraysize>
  const std::array<double, arraysize> y() const;
  template<size_t arraysize>
  const std::array<double, arraysize> z() const;
  template<size_t arraysize>
  const std::array<double, arraysize> energy() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleHitObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleHitDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleHitCollection& v);

template<typename... Args>
ExampleHit ExampleHitCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleHitObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleHit(obj);
}

template<size_t arraysize>
const std::array<unsigned long long, arraysize> ExampleHitCollection::cellID() const {
  std::array<unsigned long long, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.cellID;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleHitCollection::x() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.x;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleHitCollection::y() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.y;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleHitCollection::z() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.z;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleHitCollection::energy() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.energy;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleHit_H
#define DATAMODEL_ConstExampleHit_H

#include "datamodel/ExampleHitObj.h"

#include "podio/ObjectID.h"





class ExampleHit;
class ExampleHitCollection;
class ExampleHitCollectionIterator;

/** @class ConstExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class ConstExampleHit {

  friend ExampleHit;
  friend ExampleHitCollection;
  friend ExampleHitCollectionIterator;

public:
  /// default constructor
  ConstExampleHit();
  ConstExampleHit(unsigned long long cellID, double x, double y, double z, double energy);

  /// constructor from existing ExampleHitObj
  ConstExampleHit(ExampleHitObj* obj);

  /// copy constructor
  ConstExampleHit(const ConstExampleHit& other);

  /// copy-assignment operator
  ConstExampleHit& operator=(const ConstExampleHit& other);

  /// support cloning (deep-copy)
  ConstExampleHit clone() const;

  /// destructor
  ~ConstExampleHit();


public:

  /// Access the cellID
  const unsigned long long& cellID() const;

  /// Access the x-coordinate
  const double& x() const;

  /// Access the y-coordinate
  const double& y() const;

  /// Access the z-coordinate
  const double& z() const;

  /// Access the measured energy deposit
  const double& energy() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleHitObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitDATA_H
#define DATAMODEL_ExampleHitDATA_H




/** @class ExampleHitData
 *  Example Hit
 *  @author: B. Hegner
 */
class ExampleHitData {
public:
  unsigned long long cellID; ///< cellID
  double x; ///< x-coordinate
  double y; ///< y-coordinate
  double z; ///< z-coordinate
  double energy; ///< measured energy deposit

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitOBJ_H
#define DATAMODEL_ExampleHitOBJ_H

// data model specific includes
#include "datamodel/ExampleHitData.h"

#include "podio/ObjBase.h"




class ExampleHit;
class ConstExampleHit;

class ExampleHitObj : public podio::ObjBase {
public:
  /// constructor
  ExampleHitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleHitObj(const ExampleHitObj&);
  /// constructor from ObjectID and ExampleHitData
  /// does not initialize the internal relation containers
  ExampleHitObj(const podio::ObjectID id, ExampleHitData data);
  virtual ~ExampleHitObj();

public:
  ExampleHitData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMC_H
#define DATAMODEL_ExampleMC_H

#include "datamodel/ExampleMCConst.h"
#include "datamodel/ExampleMCObj.h"

#include "datamodel/ExampleMC.h"
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleMCCollection;
class ExampleMCCollectionIterator;
class ConstExampleMC;

/** @class ExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ExampleMC {

  friend ExampleMCCollection;
  friend ExampleMCCollectionIterator;
  friend ConstExampleMC;

public:

  /// default constructor
  ExampleMC();
  ExampleMC(double energy, int PDG);

  /// constructor from existing ExampleMCObj
  ExampleMC(ExampleMCObj* obj);

  /// copy constructor
  ExampleMC(const ExampleMC& other);

  /// copy-assignment operator
  ExampleMC& operator=(const ExampleMC& other);

  /// support cloning (deep-copy)
  ExampleMC clone() const;

  /// destructor
  ~ExampleMC();

  /// conversion to const object
  operator ConstExampleMC() const;

public:

  /// Access the energy
  const double& energy() const;

  /// Access the PDG code
  const int& PDG() const;



  /// Set the energy
  void energy(double value);

  /// Set the PDG code
  void PDG(int value);



  void addparents(ConstExampleMC);
  unsigned int parents_size() const;
  ConstExampleMC parents(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator parents_begin() const;
  std::vector<ConstExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ConstExampleMC> parents() const;
  void adddaughters(ConstExampleMC);
  unsigned int daughters_size() const;
  ConstExampleMC daughters(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator daughters_begin() const;
  std::vector<ConstExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ConstExampleMC> daughters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleMC& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleMC& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleMCObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleMC& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCCollection_H
#define DATAMODEL_ExampleMCCollection_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMC.h"
#include "datamodel/ExampleMCObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleMCDataContainer = std::vector<ExampleMCData>;
using ExampleMCObjPointerContainer = std::deque<ExampleMCObj*>;

class ExampleMCCollectionIterator {
public:
  ExampleMCCollectionIterator(int index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleMCCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleMC operator*() const;
  const ExampleMC* operator->() const;
  const ExampleMCCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleMCCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleMCCollectionIterator;

  ExampleMCCollection();
//  ExampleMCCollection(const ExampleMCCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleMCCollection(ExampleMCVector* data, int collectionID);
  ~ExampleMCCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleMCCollection* operator->() { return (ExampleMCCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleMC create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleMC create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleMC"); }

  /// Returns the const object of given index
  const ExampleMC operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleMC operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleMC at(unsigned int index) const;
  /// Returns the object of given index
  ExampleMC at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleMC object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleMCObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleMCData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<double, arraysize> energy() const;
  template<size_t arraysize>
  const std::array<int, arraysize> PDG() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleMCObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleMC>* m_rel_parents; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleMC>*> m_rel_parents_tmp; ///< Relation buffer for internal book-keeping
  std::vector<::ConstExampleMC>* m_rel_daughters; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleMC>*> m_rel_daughters_tmp; ///< Relation buffer for internal book-keeping

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleMCDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleMCCollection& v);

template<typename... Args>
ExampleMC ExampleMCCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleMCObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleMC(obj);
}

template<size_t arraysize>
const std::array<double, arraysize> ExampleMCCollection::energy() const {
  std::array<double, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.energy;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<int, arraysize> ExampleMCCollection::PDG() const {
  std::array<int, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.PDG;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleMC_H
#define DATAMODEL_ConstExampleMC_H

#include "datamodel/ExampleMCObj.h"

#include "datamodel/ExampleMC.h"
#include <vector>
#include "podio/ObjectID.h"





class ExampleMC;
class ExampleMCCollection;
class ExampleMCCollectionIterator;

/** @class ConstExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ConstExampleMC {

  friend ExampleMC;
  friend ExampleMCCollection;
  friend ExampleMCCollectionIterator;

public:
  /// default constructor
  ConstExampleMC();
  ConstExampleMC(double energy, int PDG);

  /// constructor from existing ExampleMCObj
  ConstExampleMC(ExampleMCObj* obj);

  /// copy constructor
  ConstExampleMC(const ConstExampleMC& other);

  /// copy-assignment operator
  ConstExampleMC& operator=(const ConstExampleMC& other);

  /// support cloning (deep-copy)
  ConstExampleMC clone() const;

  /// destructor
  ~ConstExampleMC();


public:

  /// Access the energy
  const double& energy() const;

  /// Access the PDG code
  const int& PDG() const;



  unsigned int parents_size() const;
  ConstExampleMC parents(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator parents_begin() const;
  std::vector<ConstExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ConstExampleMC> parents() const;
  unsigned int daughters_size() const;
  ConstExampleMC daughters(unsigned int) const;
  std::vector<ConstExampleMC>::const_iterator daughters_begin() const;
  std::vector<ConstExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ConstExampleMC> daughters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleMC& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleMC& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleMCObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCDATA_H
#define DATAMODEL_ExampleMCDATA_H




/** @class ExampleMCData
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ExampleMCData {
public:
  double energy; ///< energy
  int PDG; ///< PDG code

  unsigned int parents_begin;
  unsigned int parents_end;
  unsigned int daughters_begin;
  unsigned int daughters_end;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCOBJ_H
#define DATAMODEL_ExampleMCOBJ_H

// data model specific includes
#include "datamodel/ExampleMCData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleMC;
class ConstExampleMC;

class ExampleMCObj : public podio::ObjBase {
public:
  /// constructor
  ExampleMCObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleMCObj(const ExampleMCObj&);
  /// constructor from ObjectID and ExampleMCData
  /// does not initialize the internal relation containers
  ExampleMCObj(const podio::ObjectID id, ExampleMCData data);
  virtual ~ExampleMCObj();

public:
  ExampleMCData data;
  std::vector<ConstExampleMC>* m_parents;
  std::vector<ConstExampleMC>* m_daughters;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingType_H
#define DATAMODEL_ExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeConst.h"
#include "datamodel/ExampleReferencingTypeObj.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleReferencingType.h"
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionIterator;
class ConstExampleReferencingType;

/** @class ExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingType {

  friend ExampleReferencingTypeCollection;
  friend ExampleReferencingTypeCollectionIterator;
  friend ConstExampleReferencingType;

public:

  /// default constructor
  ExampleReferencingType();

  /// constructor from existing ExampleReferencingTypeObj
  ExampleReferencingType(ExampleReferencingTypeObj* obj);

  /// copy constructor
  ExampleReferencingType(const ExampleReferencingType& other);

  /// copy-assignment operator
  ExampleReferencingType& operator=(const ExampleReferencingType& other);

  /// support cloning (deep-copy)
  ExampleReferencingType clone() const;

  /// destructor
  ~ExampleReferencingType();

  /// conversion to const object
  operator ConstExampleReferencingType() const;

public:





  void addClusters(ConstExampleCluster);
  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;
  void addRefs(ConstExampleReferencingType);
  unsigned int Refs_size() const;
  ConstExampleReferencingType Refs(unsigned int) const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ConstExampleReferencingType> Refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleReferencingType& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleReferencingType& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleReferencingTypeObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleReferencingType& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeCollection_H
#define DATAMODEL_ExampleReferencingTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingType.h"
#include "datamodel/ExampleReferencingTypeObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleReferencingTypeDataContainer = std::vector<ExampleReferencingTypeData>;
using ExampleReferencingTypeObjPointerContainer = std::deque<ExampleReferencingTypeObj*>;

class ExampleReferencingTypeCollectionIterator {
public:
  ExampleReferencingTypeCollectionIterator(int index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleReferencingType operator*() const;
  const ExampleReferencingType* operator->() const;
  const ExampleReferencingTypeCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleReferencingTypeCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleReferencingTypeCollectionIterator;

  ExampleReferencingTypeCollection();
//  ExampleReferencingTypeCollection(const ExampleReferencingTypeCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleReferencingTypeCollection(ExampleReferencingTypeVector* data, int collectionID);
  ~ExampleReferencingTypeCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleReferencingTypeCollection* operator->() { return (ExampleReferencingTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleReferencingType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleReferencingType create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleReferencingType"); }

  /// Returns the const object of given index
  const ExampleReferencingType operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleReferencingType operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleReferencingType at(unsigned int index) const;
  /// Returns the object of given index
  ExampleReferencingType at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleReferencingType object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleReferencingTypeObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleReferencingTypeData>* _getBuffer() { return m_data; }


private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleReferencingTypeObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleCluster>* m_rel_Clusters; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleCluster>*> m_rel_Clusters_tmp; ///< Relation buffer for internal book-keeping
  std::vector<::ConstExampleReferencingType>* m_rel_Refs; ///< Relation buffer for read / write
  std::vector<std::vector<::ConstExampleReferencingType>*> m_rel_Refs_tmp; ///< Relation buffer for internal book-keeping

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleReferencingTypeDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingTypeCollection& v);

template<typename... Args>
ExampleReferencingType ExampleReferencingTypeCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleReferencingTypeObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleReferencingType(obj);
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleReferencingType_H
#define DATAMODEL_ConstExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeObj.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleReferencingType.h"
#include <vector>
#include "podio/ObjectID.h"





class ExampleReferencingType;
class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionIterator;

/** @class ConstExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ConstExampleReferencingType {

  friend ExampleReferencingType;
  friend ExampleReferencingTypeCollection;
  friend ExampleReferencingTypeCollectionIterator;

public:
  /// default constructor
  ConstExampleReferencingType();

  /// constructor from existing ExampleReferencingTypeObj
  ConstExampleReferencingType(ExampleReferencingTypeObj* obj);

  /// copy constructor
  ConstExampleReferencingType(const ConstExampleReferencingType& other);

  /// copy-assignment operator
  ConstExampleReferencingType& operator=(const ConstExampleReferencingType& other);

  /// support cloning (deep-copy)
  ConstExampleReferencingType clone() const;

  /// destructor
  ~ConstExampleReferencingType();


public:



  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;
  unsigned int Refs_size() const;
  ConstExampleReferencingType Refs(unsigned int) const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ConstExampleReferencingType> Refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleReferencingType& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleReferencingType& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleReferencingTypeObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeDATA_H
#define DATAMODEL_ExampleReferencingTypeDATA_H




/** @class ExampleReferencingTypeData
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingTypeData {
public:

  unsigned int Clusters_begin;
  unsigned int Clusters_end;
  unsigned int Refs_begin;
  unsigned int Refs_end;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeOBJ_H
#define DATAMODEL_ExampleReferencingTypeOBJ_H

// data model specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleCluster.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleReferencingType;
class ConstExampleReferencingType;

class ExampleReferencingTypeObj : public podio::ObjBase {
public:
  /// constructor
  ExampleReferencingTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleReferencingTypeObj(const ExampleReferencingTypeObj&);
  /// constructor from ObjectID and ExampleReferencingTypeData
  /// does not initialize the internal relation containers
  ExampleReferencingTypeObj(const podio::ObjectID id, ExampleReferencingTypeData data);
  virtual ~ExampleReferencingTypeObj();

public:
  ExampleReferencingTypeData data;
  std::vector<ConstExampleCluster>* m_Clusters;
  std::vector<ConstExampleReferencingType>* m_Refs;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelation_H
#define DATAMODEL_ExampleWithARelation_H

#include "datamodel/ExampleWithARelationConst.h"
#include "datamodel/ExampleWithARelationObj.h"

#include "datamodel/ExampleWithNamespace.h"
#include <vector>
#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class ConstExampleWithNamespace;
}


namespace ex42 {


class ExampleWithARelationCollection;
class ExampleWithARelationCollectionIterator;
class ConstExampleWithARelation;

/** @class ExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ExampleWithARelation {

  friend ExampleWithARelationCollection;
  friend ExampleWithARelationCollectionIterator;
  friend ConstExampleWithARelation;

public:

  /// default constructor
  ExampleWithARelation();
  ExampleWithARelation(float number);

  /// constructor from existing ExampleWithARelationObj
  ExampleWithARelation(ExampleWithARelationObj* obj);

  /// copy constructor
  ExampleWithARelation(const ExampleWithARelation& other);

  /// copy-assignment operator
  ExampleWithARelation& operator=(const ExampleWithARelation& other);

  /// support cloning (deep-copy)
  ExampleWithARelation clone() const;

  /// destructor
  ~ExampleWithARelation();

  /// conversion to const object
  operator ConstExampleWithARelation() const;

public:

  /// Access the just a number
  const float& number() const;


  /// Access the a ref in a namespace
  const ::ex42::ConstExampleWithNamespace ref() const;

  /// Set the just a number
  void number(float value);


  /// Set the a ref in a namespace
  void ref(::ex42::ConstExampleWithNamespace value);

  void addrefs(::ex42::ConstExampleWithNamespace);
  unsigned int refs_size() const;
  ::ex42::ConstExampleWithNamespace refs(unsigned int) const;
  std::vector<::ex42::ConstExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<::ex42::ConstExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<::ex42::ConstExampleWithNamespace> refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithARelation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithARelation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithARelationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithARelation& value);

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationCollection_H
#define DATAMODEL_ExampleWithARelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/ExampleWithARelationObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>

namespace ex42 {


using ExampleWithARelationDataContainer = std::vector<ExampleWithARelationData>;
using ExampleWithARelationObjPointerContainer = std::deque<ExampleWithARelationObj*>;

class ExampleWithARelationCollectionIterator {
public:
  ExampleWithARelationCollectionIterator(int index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithARelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithARelation operator*() const;
  const ExampleWithARelation* operator->() const;
  const ExampleWithARelationCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithARelationCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithARelationCollectionIterator;

  ExampleWithARelationCollection();
//  ExampleWithARelationCollection(const ExampleWithARelationCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithARelationCollection(ExampleWithARelationVector* data, int collectionID);
  ~ExampleWithARelationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithARelationCollection* operator->() { return (ExampleWithARelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithARelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithARelation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ex42::ExampleWithARelation"); }

  /// Returns the const object of given index
  const ExampleWithARelation operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithARelation operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithARelation at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithARelation at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithARelation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithARelationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithARelationData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<float, arraysize> number() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithARelationObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<ex42::ConstExampleWithNamespace>* m_rel_refs; ///< Relation buffer for read / write
  std::vector<std::vector<ex42::ConstExampleWithNamespace>*> m_rel_refs_tmp; ///< Relation buffer for internal book-keeping
  std::vector<ex42::ConstExampleWithNamespace>* m_rel_ref; ///< Relation buffer for read / write

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithARelationDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelationCollection& v);

template<typename... Args>
ExampleWithARelation ExampleWithARelationCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithARelationObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithARelation(obj);
}

template<size_t arraysize>
const std::array<float, arraysize> ExampleWithARelationCollection::number() const {
  std::array<float, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.number;
  }
  return tmp;
}


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithARelation_H
#define DATAMODEL_ConstExampleWithARelation_H

#include "datamodel/ExampleWithARelationObj.h"

#include "datamodel/ExampleWithNamespace.h"
#include <vector>
#include "podio/ObjectID.h"

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class ConstExampleWithNamespace;
}


namespace ex42 {


class ExampleWithARelation;
class ExampleWithARelationCollection;
class ExampleWithARelationCollectionIterator;

/** @class ConstExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ConstExampleWithARelation {

  friend ExampleWithARelation;
  friend ExampleWithARelationCollection;
  friend ExampleWithARelationCollectionIterator;

public:
  /// default constructor
  ConstExampleWithARelation();
  ConstExampleWithARelation(float number);

  /// constructor from existing ExampleWithARelationObj
  ConstExampleWithARelation(ExampleWithARelationObj* obj);

  /// copy constructor
  ConstExampleWithARelation(const ConstExampleWithARelation& other);

  /// copy-assignment operator
  ConstExampleWithARelation& operator=(const ConstExampleWithARelation& other);

  /// support cloning (deep-copy)
  ConstExampleWithARelation clone() const;

  /// destructor
  ~ConstExampleWithARelation();


public:

  /// Access the just a number
  const float& number() const;


  /// Access the a ref in a namespace
  const ::ex42::ConstExampleWithNamespace ref() const;

  unsigned int refs_size() const;
  ::ex42::ConstExampleWithNamespace refs(unsigned int) const;
  std::vector<::ex42::ConstExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<::ex42::ConstExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<::ex42::ConstExampleWithNamespace> refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithARelation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithARelation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithARelationObj* m_obj;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationDATA_H
#define DATAMODEL_ExampleWithARelationDATA_H


namespace ex42 {


/** @class ExampleWithARelationData
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ExampleWithARelationData {
public:
  float number; ///< just a number

  unsigned int refs_begin;
  unsigned int refs_end;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationOBJ_H
#define DATAMODEL_ExampleWithARelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>
// forward declarations
namespace ex42 {
class ConstExampleWithNamespace;
}


namespace ex42 {

class ExampleWithARelation;
class ConstExampleWithARelation;

class ExampleWithARelationObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithARelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithARelationObj(const ExampleWithARelationObj&);
  /// constructor from ObjectID and ExampleWithARelationData
  /// does not initialize the internal relation containers
  ExampleWithARelationObj(const podio::ObjectID id, ExampleWithARelationData data);
  virtual ~ExampleWithARelationObj();

public:
  ExampleWithARelationData data;
  ::ex42::ConstExampleWithNamespace* m_ref;
  std::vector<::ex42::ConstExampleWithNamespace>* m_refs;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArray_H
#define DATAMODEL_ExampleWithArray_H

#include "datamodel/ExampleWithArrayConst.h"
#include "datamodel/ExampleWithArrayObj.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithArrayCollection;
class ExampleWithArrayCollectionIterator;
class ConstExampleWithArray;

/** @class ExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArray {

  friend ExampleWithArrayCollection;
  friend ExampleWithArrayCollectionIterator;
  friend ConstExampleWithArray;

public:

  /// default constructor
  ExampleWithArray();
  ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// constructor from existing ExampleWithArrayObj
  ExampleWithArray(ExampleWithArrayObj* obj);

  /// copy constructor
  ExampleWithArray(const ExampleWithArray& other);

  /// copy-assignment operator
  ExampleWithArray& operator=(const ExampleWithArray& other);

  /// support cloning (deep-copy)
  ExampleWithArray clone() const;

  /// destructor
  ~ExampleWithArray();

  /// conversion to const object
  operator ConstExampleWithArray() const;

public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  const int& myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  const int& anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  const int& snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  const int& snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;


  /// Set the component that contains an array
  void arrayStruct(NotSoSimpleStruct value);
  /// Get reference to component that contains an array
  NotSoSimpleStruct& arrayStruct();
  /// Get reference to the member of component that contains an array
  SimpleStruct& data();
  /// Set the member of  component that contains an array
  void data(SimpleStruct value);

  /// Set the array-member without space to test regex
  void myArray(std::array<int, 4> value);
  void myArray(size_t i, int value);
  /// Get reference to array-member without space to test regex
  std::array<int, 4>& myArray();

  /// Set the array-member with space to test regex
  void anotherArray2(std::array<int, 4> value);
  void anotherArray2(size_t i, int value);
  /// Get reference to array-member with space to test regex
  std::array<int, 4>& anotherArray2();

  /// Set the snail case to test regex
  void snail_case_array(std::array<int, 4> value);
  void snail_case_array(size_t i, int value);
  /// Get reference to snail case to test regex
  std::array<int, 4>& snail_case_array();

  /// Set the mixing things up for regex
  void snail_case_Array3(std::array<int, 4> value);
  void snail_case_Array3(size_t i, int value);
  /// Get reference to mixing things up for regex
  std::array<int, 4>& snail_case_Array3();

  /// Set the an array containing structs
  void structArray(std::array<ex2::NamespaceStruct, 4> value);
  void structArray(size_t i, ex2::NamespaceStruct value);
  /// Get reference to an array containing structs
  std::array<ex2::NamespaceStruct, 4>& structArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithArray& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArray& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithArrayObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithArray& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayCollection_H
#define DATAMODEL_ExampleWithArrayCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArray.h"
#include "datamodel/ExampleWithArrayObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleWithArrayDataContainer = std::vector<ExampleWithArrayData>;
using ExampleWithArrayObjPointerContainer = std::deque<ExampleWithArrayObj*>;

class ExampleWithArrayCollectionIterator {
public:
  ExampleWithArrayCollectionIterator(int index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithArrayCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithArray operator*() const;
  const ExampleWithArray* operator->() const;
  const ExampleWithArrayCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithArrayCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithArrayCollectionIterator;

  ExampleWithArrayCollection();
//  ExampleWithArrayCollection(const ExampleWithArrayCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithArrayCollection(ExampleWithArrayVector* data, int collectionID);
  ~ExampleWithArrayCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayCollection* operator->() { return (ExampleWithArrayCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithArray create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithArray create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleWithArray"); }

  /// Returns the const object of given index
  const ExampleWithArray operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithArray operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithArray at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithArray at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithArray object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithArrayObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithArrayData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<NotSoSimpleStruct, arraysize> arrayStruct() const;
  template<size_t arraysize>
  const std::array<std::array<int, 4>, arraysize> myArray() const;
  template<size_t arraysize>
  const std::array<std::array<int, 4>, arraysize> anotherArray2() const;
  template<size_t arraysize>
  const std::array<std::array<int, 4>, arraysize> snail_case_array() const;
  template<size_t arraysize>
  const std::array<std::array<int, 4>, arraysize> snail_case_Array3() const;
  template<size_t arraysize>
  const std::array<std::array<ex2::NamespaceStruct, 4>, arraysize> structArray() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithArrayObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithArrayDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayCollection& v);

template<typename... Args>
ExampleWithArray ExampleWithArrayCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithArrayObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithArray(obj);
}

template<size_t arraysize>
const std::array<NotSoSimpleStruct, arraysize> ExampleWithArrayCollection::arrayStruct() const {
  std::array<NotSoSimpleStruct, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.arrayStruct;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<int, 4>, arraysize> ExampleWithArrayCollection::myArray() const {
  std::array<std::array<int, 4>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.myArray;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<int, 4>, arraysize> ExampleWithArrayCollection::anotherArray2() const {
  std::array<std::array<int, 4>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.anotherArray2;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<int, 4>, arraysize> ExampleWithArrayCollection::snail_case_array() const {
  std::array<std::array<int, 4>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.snail_case_array;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<int, 4>, arraysize> ExampleWithArrayCollection::snail_case_Array3() const {
  std::array<std::array<int, 4>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.snail_case_Array3;
  }
  return tmp;
}

template<size_t arraysize>
const std::array<std::array<ex2::NamespaceStruct, 4>, arraysize> ExampleWithArrayCollection::structArray() const {
  std::array<std::array<ex2::NamespaceStruct, 4>, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.structArray;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithArray_H
#define DATAMODEL_ConstExampleWithArray_H

#include "datamodel/ExampleWithArrayObj.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>
#include "podio/ObjectID.h"





class ExampleWithArray;
class ExampleWithArrayCollection;
class ExampleWithArrayCollectionIterator;

/** @class ConstExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ConstExampleWithArray {

  friend ExampleWithArray;
  friend ExampleWithArrayCollection;
  friend ExampleWithArrayCollectionIterator;

public:
  /// default constructor
  ConstExampleWithArray();
  ConstExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// constructor from existing ExampleWithArrayObj
  ConstExampleWithArray(ExampleWithArrayObj* obj);

  /// copy constructor
  ConstExampleWithArray(const ConstExampleWithArray& other);

  /// copy-assignment operator
  ConstExampleWithArray& operator=(const ConstExampleWithArray& other);

  /// support cloning (deep-copy)
  ConstExampleWithArray clone() const;

  /// destructor
  ~ConstExampleWithArray();


public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  const int& myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  const int& anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  const int& snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  const int& snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArray& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithArray& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithArrayObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayDATA_H
#define DATAMODEL_ExampleWithArrayDATA_H

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>



/** @class ExampleWithArrayData
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArrayData {
public:
  NotSoSimpleStruct arrayStruct; ///< component that contains an array
  std::array<int, 4> myArray; ///< array-member without space to test regex
  std::array<int, 4> anotherArray2; ///< array-member with space to test regex
  std::array<int, 4> snail_case_array; ///< snail case to test regex
  std::array<int, 4> snail_case_Array3; ///< mixing things up for regex
  std::array<ex2::NamespaceStruct, 4> structArray; ///< an array containing structs

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayOBJ_H
#define DATAMODEL_ExampleWithArrayOBJ_H

// data model specific includes
#include "datamodel/ExampleWithArrayData.h"

#include "podio/ObjBase.h"




class ExampleWithArray;
class ConstExampleWithArray;

class ExampleWithArrayObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithArrayObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayObj(const ExampleWithArrayObj&);
  /// constructor from ObjectID and ExampleWithArrayData
  /// does not initialize the internal relation containers
  ExampleWithArrayObj(const podio::ObjectID id, ExampleWithArrayData data);
  virtual ~ExampleWithArrayObj();

public:
  ExampleWithArrayData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponent_H
#define DATAMODEL_ExampleWithComponent_H

#include "datamodel/ExampleWithComponentConst.h"
#include "datamodel/ExampleWithComponentObj.h"

#include "datamodel/NotSoSimpleStruct.h"
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithComponentCollection;
class ExampleWithComponentCollectionIterator;
class ConstExampleWithComponent;

/** @class ExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ExampleWithComponent {

  friend ExampleWithComponentCollection;
  friend ExampleWithComponentCollectionIterator;
  friend ConstExampleWithComponent;

public:

  /// default constructor
  ExampleWithComponent();
  ExampleWithComponent(NotSoSimpleStruct component);

  /// constructor from existing ExampleWithComponentObj
  ExampleWithComponent(ExampleWithComponentObj* obj);

  /// copy constructor
  ExampleWithComponent(const ExampleWithComponent& other);

  /// copy-assignment operator
  ExampleWithComponent& operator=(const ExampleWithComponent& other);

  /// support cloning (deep-copy)
  ExampleWithComponent clone() const;

  /// destructor
  ~ExampleWithComponent();

  /// conversion to const object
  operator ConstExampleWithComponent() const;

public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;



  /// Set the a component
  void component(NotSoSimpleStruct value);
  /// Get reference to a component
  NotSoSimpleStruct& component();
  /// Get reference to the member of a component
  SimpleStruct& data();
  /// Set the member of  a component
  void data(SimpleStruct value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithComponent& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithComponent& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithComponentObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithComponent& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentCollection_H
#define DATAMODEL_ExampleWithComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponent.h"
#include "datamodel/ExampleWithComponentObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleWithComponentDataContainer = std::vector<ExampleWithComponentData>;
using ExampleWithComponentObjPointerContainer = std::deque<ExampleWithComponentObj*>;

class ExampleWithComponentCollectionIterator {
public:
  ExampleWithComponentCollectionIterator(int index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithComponent operator*() const;
  const ExampleWithComponent* operator->() const;
  const ExampleWithComponentCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithComponentCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithComponentCollectionIterator;

  ExampleWithComponentCollection();
//  ExampleWithComponentCollection(const ExampleWithComponentCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithComponentCollection(ExampleWithComponentVector* data, int collectionID);
  ~ExampleWithComponentCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithComponentCollection* operator->() { return (ExampleWithComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithComponent create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleWithComponent"); }

  /// Returns the const object of given index
  const ExampleWithComponent operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithComponent operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithComponent at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithComponent at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithComponent object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithComponentObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithComponentData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<NotSoSimpleStruct, arraysize> component() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithComponentObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithComponentDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponentCollection& v);

template<typename... Args>
ExampleWithComponent ExampleWithComponentCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithComponentObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithComponent(obj);
}

template<size_t arraysize>
const std::array<NotSoSimpleStruct, arraysize> ExampleWithComponentCollection::component() const {
  std::array<NotSoSimpleStruct, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.component;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithComponent_H
#define DATAMODEL_ConstExampleWithComponent_H

#include "datamodel/ExampleWithComponentObj.h"

#include "datamodel/NotSoSimpleStruct.h"
#include "podio/ObjectID.h"





class ExampleWithComponent;
class ExampleWithComponentCollection;
class ExampleWithComponentCollectionIterator;

/** @class ConstExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ConstExampleWithComponent {

  friend ExampleWithComponent;
  friend ExampleWithComponentCollection;
  friend ExampleWithComponentCollectionIterator;

public:
  /// default constructor
  ConstExampleWithComponent();
  ConstExampleWithComponent(NotSoSimpleStruct component);

  /// constructor from existing ExampleWithComponentObj
  ConstExampleWithComponent(ExampleWithComponentObj* obj);

  /// copy constructor
  ConstExampleWithComponent(const ConstExampleWithComponent& other);

  /// copy-assignment operator
  ConstExampleWithComponent& operator=(const ConstExampleWithComponent& other);

  /// support cloning (deep-copy)
  ConstExampleWithComponent clone() const;

  /// destructor
  ~ConstExampleWithComponent();


public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithComponent& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithComponent& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithComponentObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentDATA_H
#define DATAMODEL_ExampleWithComponentDATA_H

#include "datamodel/NotSoSimpleStruct.h"



/** @class ExampleWithComponentData
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ExampleWithComponentData {
public:
  NotSoSimpleStruct component; ///< a component

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentOBJ_H
#define DATAMODEL_ExampleWithComponentOBJ_H

// data model specific includes
#include "datamodel/ExampleWithComponentData.h"

#include "podio/ObjBase.h"




class ExampleWithComponent;
class ConstExampleWithComponent;

class ExampleWithComponentObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithComponentObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithComponentObj(const ExampleWithComponentObj&);
  /// constructor from ObjectID and ExampleWithComponentData
  /// does not initialize the internal relation containers
  ExampleWithComponentObj(const podio::ObjectID id, ExampleWithComponentData data);
  virtual ~ExampleWithComponentObj();

public:
  ExampleWithComponentData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespace_H
#define DATAMODEL_ExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceConst.h"
#include "datamodel/ExampleWithNamespaceObj.h"

#include "datamodel/NamespaceStruct.h"
#include "podio/ObjectID.h"
#include <ostream>



namespace ex42 {


class ExampleWithNamespaceCollection;
class ExampleWithNamespaceCollectionIterator;
class ConstExampleWithNamespace;

/** @class ExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespace {

  friend ExampleWithNamespaceCollection;
  friend ExampleWithNamespaceCollectionIterator;
  friend ConstExampleWithNamespace;

public:

  /// default constructor
  ExampleWithNamespace();
  ExampleWithNamespace(ex2::NamespaceStruct data);

  /// constructor from existing ExampleWithNamespaceObj
  ExampleWithNamespace(ExampleWithNamespaceObj* obj);

  /// copy constructor
  ExampleWithNamespace(const ExampleWithNamespace& other);

  /// copy-assignment operator
  ExampleWithNamespace& operator=(const ExampleWithNamespace& other);

  /// support cloning (deep-copy)
  ExampleWithNamespace clone() const;

  /// destructor
  ~ExampleWithNamespace();

  /// conversion to const object
  operator ConstExampleWithNamespace() const;

public:

  /// Access the a component
  const ex2::NamespaceStruct& data() const;
  /// Access the member of a component
  const int& x() const;
  /// Access the member of a component
  const int& y() const;



  /// Set the a component
  void data(ex2::NamespaceStruct value);
  /// Get reference to a component
  ex2::NamespaceStruct& data();
  /// Set the member of a component
  void x(int value);
  /// Set the member of a component
  void y(int value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithNamespace& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithNamespaceObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithNamespace& value);

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceCollection_H
#define DATAMODEL_ExampleWithNamespaceCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespace.h"
#include "datamodel/ExampleWithNamespaceObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>

namespace ex42 {


using ExampleWithNamespaceDataContainer = std::vector<ExampleWithNamespaceData>;
using ExampleWithNamespaceObjPointerContainer = std::deque<ExampleWithNamespaceObj*>;

class ExampleWithNamespaceCollectionIterator {
public:
  ExampleWithNamespaceCollectionIterator(int index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithNamespace operator*() const;
  const ExampleWithNamespace* operator->() const;
  const ExampleWithNamespaceCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithNamespaceCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithNamespaceCollectionIterator;

  ExampleWithNamespaceCollection();
//  ExampleWithNamespaceCollection(const ExampleWithNamespaceCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithNamespaceCollection(ExampleWithNamespaceVector* data, int collectionID);
  ~ExampleWithNamespaceCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithNamespaceCollection* operator->() { return (ExampleWithNamespaceCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithNamespace create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithNamespace create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ex42::ExampleWithNamespace"); }

  /// Returns the const object of given index
  const ExampleWithNamespace operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithNamespace operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithNamespace at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithNamespace at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithNamespace object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithNamespaceObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithNamespaceData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<ex2::NamespaceStruct, arraysize> data() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithNamespaceObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithNamespaceDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespaceCollection& v);

template<typename... Args>
ExampleWithNamespace ExampleWithNamespaceCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithNamespaceObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithNamespace(obj);
}

template<size_t arraysize>
const std::array<ex2::NamespaceStruct, arraysize> ExampleWithNamespaceCollection::data() const {
  std::array<ex2::NamespaceStruct, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.data;
  }
  return tmp;
}


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithNamespace_H
#define DATAMODEL_ConstExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceObj.h"

#include "datamodel/NamespaceStruct.h"
#include "podio/ObjectID.h"



namespace ex42 {


class ExampleWithNamespace;
class ExampleWithNamespaceCollection;
class ExampleWithNamespaceCollectionIterator;

/** @class ConstExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ConstExampleWithNamespace {

  friend ExampleWithNamespace;
  friend ExampleWithNamespaceCollection;
  friend ExampleWithNamespaceCollectionIterator;

public:
  /// default constructor
  ConstExampleWithNamespace();
  ConstExampleWithNamespace(ex2::NamespaceStruct data);

  /// constructor from existing ExampleWithNamespaceObj
  ConstExampleWithNamespace(ExampleWithNamespaceObj* obj);

  /// copy constructor
  ConstExampleWithNamespace(const ConstExampleWithNamespace& other);

  /// copy-assignment operator
  ConstExampleWithNamespace& operator=(const ConstExampleWithNamespace& other);

  /// support cloning (deep-copy)
  ConstExampleWithNamespace clone() const;

  /// destructor
  ~ConstExampleWithNamespace();


public:

  /// Access the a component
  const ex2::NamespaceStruct& data() const;
  /// Access the member of a component
  const int& x() const;
  /// Access the member of a component
  const int& y() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithNamespace& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithNamespaceObj* m_obj;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceDATA_H
#define DATAMODEL_ExampleWithNamespaceDATA_H

#include "datamodel/NamespaceStruct.h"

namespace ex42 {


/** @class ExampleWithNamespaceData
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespaceData {
public:
  ::ex2::NamespaceStruct data; ///< a component

};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceOBJ_H
#define DATAMODEL_ExampleWithNamespaceOBJ_H

// data model specific includes
#include "datamodel/ExampleWithNamespaceData.h"

#include "podio/ObjBase.h"



namespace ex42 {

class ExampleWithNamespace;
class ConstExampleWithNamespace;

class ExampleWithNamespaceObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithNamespaceObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithNamespaceObj(const ExampleWithNamespaceObj&);
  /// constructor from ObjectID and ExampleWithNamespaceData
  /// does not initialize the internal relation containers
  ExampleWithNamespaceObj(const podio::ObjectID id, ExampleWithNamespaceData data);
  virtual ~ExampleWithNamespaceObj();

public:
  ExampleWithNamespaceData data;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelation_H
#define DATAMODEL_ExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationConst.h"
#include "datamodel/ExampleWithOneRelationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
class ExampleCluster;
class ConstExampleCluster;




class ExampleWithOneRelationCollection;
class ExampleWithOneRelationCollectionIterator;
class ConstExampleWithOneRelation;

/** @class ExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelation {

  friend ExampleWithOneRelationCollection;
  friend ExampleWithOneRelationCollectionIterator;
  friend ConstExampleWithOneRelation;

public:

  /// default constructor
  ExampleWithOneRelation();

  /// constructor from existing ExampleWithOneRelationObj
  ExampleWithOneRelation(ExampleWithOneRelationObj* obj);

  /// copy constructor
  ExampleWithOneRelation(const ExampleWithOneRelation& other);

  /// copy-assignment operator
  ExampleWithOneRelation& operator=(const ExampleWithOneRelation& other);

  /// support cloning (deep-copy)
  ExampleWithOneRelation clone() const;

  /// destructor
  ~ExampleWithOneRelation();

  /// conversion to const object
  operator ConstExampleWithOneRelation() const;

public:


  /// Access the a particular cluster
  const ConstExampleCluster cluster() const;


  /// Set the a particular cluster
  void cluster(ConstExampleCluster value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithOneRelation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithOneRelationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithOneRelation& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationCollection_H
#define DATAMODEL_ExampleWithOneRelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelation.h"
#include "datamodel/ExampleWithOneRelationObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleWithOneRelationDataContainer = std::vector<ExampleWithOneRelationData>;
using ExampleWithOneRelationObjPointerContainer = std::deque<ExampleWithOneRelationObj*>;

class ExampleWithOneRelationCollectionIterator {
public:
  ExampleWithOneRelationCollectionIterator(int index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithOneRelation operator*() const;
  const ExampleWithOneRelation* operator->() const;
  const ExampleWithOneRelationCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithOneRelationCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithOneRelationCollectionIterator;

  ExampleWithOneRelationCollection();
//  ExampleWithOneRelationCollection(const ExampleWithOneRelationCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithOneRelationCollection(ExampleWithOneRelationVector* data, int collectionID);
  ~ExampleWithOneRelationCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithOneRelationCollection* operator->() { return (ExampleWithOneRelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithOneRelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithOneRelation create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleWithOneRelation"); }

  /// Returns the const object of given index
  const ExampleWithOneRelation operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithOneRelation operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithOneRelation at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithOneRelation at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithOneRelation object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithOneRelationObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithOneRelationData>* _getBuffer() { return m_data; }


private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithOneRelationObjPointerContainer m_entries;

  // members to handle 1-to-N-relations
  std::vector<::ConstExampleCluster>* m_rel_cluster; ///< Relation buffer for read / write

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithOneRelationDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelationCollection& v);

template<typename... Args>
ExampleWithOneRelation ExampleWithOneRelationCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithOneRelationObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithOneRelation(obj);
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithOneRelation_H
#define DATAMODEL_ConstExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationObj.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleCluster;
class ConstExampleCluster;




class ExampleWithOneRelation;
class ExampleWithOneRelationCollection;
class ExampleWithOneRelationCollectionIterator;

/** @class ConstExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ConstExampleWithOneRelation {

  friend ExampleWithOneRelation;
  friend ExampleWithOneRelationCollection;
  friend ExampleWithOneRelationCollectionIterator;

public:
  /// default constructor
  ConstExampleWithOneRelation();

  /// constructor from existing ExampleWithOneRelationObj
  ConstExampleWithOneRelation(ExampleWithOneRelationObj* obj);

  /// copy constructor
  ConstExampleWithOneRelation(const ConstExampleWithOneRelation& other);

  /// copy-assignment operator
  ConstExampleWithOneRelation& operator=(const ConstExampleWithOneRelation& other);

  /// support cloning (deep-copy)
  ConstExampleWithOneRelation clone() const;

  /// destructor
  ~ConstExampleWithOneRelation();


public:


  /// Access the a particular cluster
  const ConstExampleCluster cluster() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithOneRelation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithOneRelationObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationDATA_H
#define DATAMODEL_ExampleWithOneRelationDATA_H




/** @class ExampleWithOneRelationData
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelationData {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationOBJ_H
#define DATAMODEL_ExampleWithOneRelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithOneRelationData.h"

#include "podio/ObjBase.h"

// forward declarations
class ConstExampleCluster;



class ExampleWithOneRelation;
class ConstExampleWithOneRelation;

class ExampleWithOneRelationObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithOneRelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithOneRelationObj(const ExampleWithOneRelationObj&);
  /// constructor from ObjectID and ExampleWithOneRelationData
  /// does not initialize the internal relation containers
  ExampleWithOneRelationObj(const podio::ObjectID id, ExampleWithOneRelationData data);
  virtual ~ExampleWithOneRelationObj();

public:
  ExampleWithOneRelationData data;
  ConstExampleCluster* m_cluster;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithString_H
#define DATAMODEL_ExampleWithString_H

#include "datamodel/ExampleWithStringConst.h"
#include "datamodel/ExampleWithStringObj.h"

#include <string>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithStringCollection;
class ExampleWithStringCollectionIterator;
class ConstExampleWithString;

/** @class ExampleWithString
 *  Type with a string
 *  @author: Benedikt Hegner
 */
class ExampleWithString {

  friend ExampleWithStringCollection;
  friend ExampleWithStringCollectionIterator;
  friend ConstExampleWithString;

public:

  /// default constructor
  ExampleWithString();
  ExampleWithString(std::string theString);

  /// constructor from existing ExampleWithStringObj
  ExampleWithString(ExampleWithStringObj* obj);

  /// copy constructor
  ExampleWithString(const ExampleWithString& other);

  /// copy-assignment operator
  ExampleWithString& operator=(const ExampleWithString& other);

  /// support cloning (deep-copy)
  ExampleWithString clone() const;

  /// destructor
  ~ExampleWithString();

  /// conversion to const object
  operator ConstExampleWithString() const;

public:

  /// Access the the string
  const std::string& theString() const;



  /// Set the the string
  void theString(std::string value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithStringObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithString& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithString& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithString& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithStringObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithString& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithStringCollection_H
#define DATAMODEL_ExampleWithStringCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithStringData.h"
#include "datamodel/ExampleWithString.h"
#include "datamodel/ExampleWithStringObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleWithStringDataContainer = std::vector<ExampleWithStringData>;
using ExampleWithStringObjPointerContainer = std::deque<ExampleWithStringObj*>;

class ExampleWithStringCollectionIterator {
public:
  ExampleWithStringCollectionIterator(int index, const ExampleWithStringObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithStringCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithString operator*() const;
  const ExampleWithString* operator->() const;
  const ExampleWithStringCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithString m_object;
  const ExampleWithStringObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithStringCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithStringCollectionIterator;

  ExampleWithStringCollection();
//  ExampleWithStringCollection(const ExampleWithStringCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithStringCollection(ExampleWithStringVector* data, int collectionID);
  ~ExampleWithStringCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithStringCollection* operator->() { return (ExampleWithStringCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithString create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithString create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleWithString"); }

  /// Returns the const object of given index
  const ExampleWithString operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithString operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithString at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithString at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithString object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithStringObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithStringData>* _getBuffer() { return m_data; }

  template<size_t arraysize>
  const std::array<std::string, arraysize> theString() const;

private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithStringObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithStringDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithStringCollection& v);

template<typename... Args>
ExampleWithString ExampleWithStringCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithStringObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithString(obj);
}

template<size_t arraysize>
const std::array<std::string, arraysize> ExampleWithStringCollection::theString() const {
  std::array<std::string, arraysize> tmp;
  const auto valid_size = std::min(arraysize, m_entries.size());
  for (unsigned i = 0; i < valid_size; ++i) {
    tmp[i] = m_entries[i]->data.theString;
  }
  return tmp;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithString_H
#define DATAMODEL_ConstExampleWithString_H

#include "datamodel/ExampleWithStringObj.h"

#include <string>
#include "podio/ObjectID.h"





class ExampleWithString;
class ExampleWithStringCollection;
class ExampleWithStringCollectionIterator;

/** @class ConstExampleWithString
 *  Type with a string
 *  @author: Benedikt Hegner
 */
class ConstExampleWithString {

  friend ExampleWithString;
  friend ExampleWithStringCollection;
  friend ExampleWithStringCollectionIterator;

public:
  /// default constructor
  ConstExampleWithString();
  ConstExampleWithString(std::string theString);

  /// constructor from existing ExampleWithStringObj
  ConstExampleWithString(ExampleWithStringObj* obj);

  /// copy constructor
  ConstExampleWithString(const ConstExampleWithString& other);

  /// copy-assignment operator
  ConstExampleWithString& operator=(const ConstExampleWithString& other);

  /// support cloning (deep-copy)
  ConstExampleWithString clone() const;

  /// destructor
  ~ConstExampleWithString();


public:

  /// Access the the string
  const std::string& theString() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithStringObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithString& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithString& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithString& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithStringObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithStringDATA_H
#define DATAMODEL_ExampleWithStringDATA_H

#include <string>



/** @class ExampleWithStringData
 *  Type with a string
 *  @author: Benedikt Hegner
 */
class ExampleWithStringData {
public:
  std::string theString; ///< the string

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithStringOBJ_H
#define DATAMODEL_ExampleWithStringOBJ_H

// data model specific includes
#include "datamodel/ExampleWithStringData.h"

#include "podio/ObjBase.h"




class ExampleWithString;
class ConstExampleWithString;

class ExampleWithStringObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithStringObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithStringObj(const ExampleWithStringObj&);
  /// constructor from ObjectID and ExampleWithStringData
  /// does not initialize the internal relation containers
  ExampleWithStringObj(const podio::ObjectID id, ExampleWithStringData data);
  virtual ~ExampleWithStringObj();

public:
  ExampleWithStringData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMember_H
#define DATAMODEL_ExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberConst.h"
#include "datamodel/ExampleWithVectorMemberObj.h"

#include <vector>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithVectorMemberCollection;
class ExampleWithVectorMemberCollectionIterator;
class ConstExampleWithVectorMember;

/** @class ExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ExampleWithVectorMember {

  friend ExampleWithVectorMemberCollection;
  friend ExampleWithVectorMemberCollectionIterator;
  friend ConstExampleWithVectorMember;

public:

  /// default constructor
  ExampleWithVectorMember();

  /// constructor from existing ExampleWithVectorMemberObj
  ExampleWithVectorMember(ExampleWithVectorMemberObj* obj);

  /// copy constructor
  ExampleWithVectorMember(const ExampleWithVectorMember& other);

  /// copy-assignment operator
  ExampleWithVectorMember& operator=(const ExampleWithVectorMember& other);

  /// support cloning (deep-copy)
  ExampleWithVectorMember clone() const;

  /// destructor
  ~ExampleWithVectorMember();

  /// conversion to const object
  operator ConstExampleWithVectorMember() const;

public:





  void addcount(int);
  unsigned int count_size() const;
  int count(unsigned int) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithVectorMember& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithVectorMemberObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithVectorMember& value);



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberCollection_H
#define DATAMODEL_ExampleWithVectorMemberCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMember.h"
#include "datamodel/ExampleWithVectorMemberObj.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>



using ExampleWithVectorMemberDataContainer = std::vector<ExampleWithVectorMemberData>;
using ExampleWithVectorMemberObjPointerContainer = std::deque<ExampleWithVectorMemberObj*>;

class ExampleWithVectorMemberCollectionIterator {
public:
  ExampleWithVectorMemberCollectionIterator(int index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(nullptr), m_collection(collection) {}

  bool operator!=(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  const ExampleWithVectorMember operator*() const;
  const ExampleWithVectorMember* operator->() const;
  const ExampleWithVectorMemberCollectionIterator& operator++() const;

private:
  mutable int m_index;
  mutable ExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};

/**
A Collection is identified by an ID.
*/
class ExampleWithVectorMemberCollection : public podio::CollectionBase {

public:
  using const_iterator = const ExampleWithVectorMemberCollectionIterator;

  ExampleWithVectorMemberCollection();
//  ExampleWithVectorMemberCollection(const ExampleWithVectorMemberCollection& ) = delete; // deletion doesn't work w/ ROOT IO ! :-(
//  ExampleWithVectorMemberCollection(ExampleWithVectorMemberVector* data, int collectionID);
  ~ExampleWithVectorMemberCollection();

  void clear() override final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithVectorMemberCollection* operator->() { return (ExampleWithVectorMemberCollection*) this; }

  /// Append a new object to the collection, and return this object.
  ExampleWithVectorMember create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  ExampleWithVectorMember create(Args&&... args);

  /// number of elements in the collection
  size_t size() const override final;

  /// fully qualified type name of elements - with namespace
  std::string getValueTypeName() const override { return std::string("ExampleWithVectorMember"); }

  /// Returns the const object of given index
  const ExampleWithVectorMember operator[](unsigned int index) const;
  /// Returns the object of a given index
  ExampleWithVectorMember operator[](unsigned int index);
  /// Returns the const object of given index
  const ExampleWithVectorMember at(unsigned int index) const;
  /// Returns the object of given index
  ExampleWithVectorMember at(unsigned int index);


  /// Append object to the collection
  void push_back(ConstExampleWithVectorMember object);

  void prepareForWrite() override final;
  void prepareAfterRead() override final;
  void setBuffer(void* address) override final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) override final;

  podio::CollRefCollection* referenceCollections() override final { return &m_refCollections; }

  podio::VectorMembersInfo* vectorMembers() override { return &m_vecmem_info; }

  void setID(unsigned ID) override final {
    m_collectionID = ID;
    std::for_each(m_entries.begin(),m_entries.end(),
                  [ID] (ExampleWithVectorMemberObj* obj) { obj->id = {obj->id.index, static_cast<int>(ID)}; }
    );
  };

  unsigned getID() const override final {
    return m_collectionID;
  }

  bool isValid() const override final {
    return m_isValid;
  }

  // support for the iterator protocol
  const const_iterator begin() const {
    return const_iterator(0, &m_entries);
  }
  const const_iterator end() const {
    return const_iterator(m_entries.size(), &m_entries);
  }

  /// returns the address of the pointer to the data buffer
  void* getBufferAddress() override final { return (void*)&m_data; }

  /// Returns the pointer to the data buffer
  std::vector<ExampleWithVectorMemberData>* _getBuffer() { return m_data; }


private:
  bool m_isValid;
  bool m_isReadFromFile{false};
  int m_collectionID;
  ExampleWithVectorMemberObjPointerContainer m_entries;

  // members to handle 1-to-N-relations

  // members to handle vector members
  std::vector<int>* m_vec_count; /// combined vector of all objects in collection
  std::vector<std::vector<int>*> m_vecs_count; /// pointers to individual member vectors
  // members to handle streaming
  podio::CollRefCollection m_refCollections;
  podio::VectorMembersInfo m_vecmem_info;
  ExampleWithVectorMemberDataContainer* m_data;
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMemberCollection& v);

template<typename... Args>
ExampleWithVectorMember ExampleWithVectorMemberCollection::create(Args&&... args) {
  const int size = m_entries.size();
  auto obj = new ExampleWithVectorMemberObj({size, m_collectionID}, {args...});
  m_entries.push_back(obj);
  return ExampleWithVectorMember(obj);
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ConstExampleWithVectorMember_H
#define DATAMODEL_ConstExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberObj.h"

#include <vector>
#include "podio/ObjectID.h"





class ExampleWithVectorMember;
class ExampleWithVectorMemberCollection;
class ExampleWithVectorMemberCollectionIterator;

/** @class ConstExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ConstExampleWithVectorMember {

  friend ExampleWithVectorMember;
  friend ExampleWithVectorMemberCollection;
  friend ExampleWithVectorMemberCollectionIterator;

public:
  /// default constructor
  ConstExampleWithVectorMember();

  /// constructor from existing ExampleWithVectorMemberObj
  ConstExampleWithVectorMember(ExampleWithVectorMemberObj* obj);

  /// copy constructor
  ConstExampleWithVectorMember(const ConstExampleWithVectorMember& other);

  /// copy-assignment operator
  ConstExampleWithVectorMember& operator=(const ConstExampleWithVectorMember& other);

  /// support cloning (deep-copy)
  ConstExampleWithVectorMember clone() const;

  /// destructor
  ~ConstExampleWithVectorMember();


public:



  unsigned int count_size() const;
  int count(unsigned int) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithVectorMember& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithVectorMemberObj* m_obj;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberDATA_H
#define DATAMODEL_ExampleWithVectorMemberDATA_H




/** @class ExampleWithVectorMemberData
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ExampleWithVectorMemberData {
public:

  unsigned int count_begin;
  unsigned int count_end;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberOBJ_H
#define DATAMODEL_ExampleWithVectorMemberOBJ_H

// data model specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleWithVectorMember;
class ConstExampleWithVectorMember;

class ExampleWithVectorMemberObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithVectorMemberObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithVectorMemberObj(const ExampleWithVectorMemberObj&);
  /// constructor from ObjectID and ExampleWithVectorMemberData
  /// does not initialize the internal relation containers
  ExampleWithVectorMemberObj(const podio::ObjectID id, ExampleWithVectorMemberData data);
  virtual ~ExampleWithVectorMemberObj();

public:
  ExampleWithVectorMemberData data;
  std::vector<int>* m_count;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceInNamespaceStruct_H
#define DATAMODEL_NamespaceInNamespaceStruct_H

#include "datamodel/NamespaceStruct.h"
#include <ostream>

namespace ex2 {


class NamespaceInNamespaceStruct {
public:
  ::ex2::NamespaceStruct data;


};

inline std::ostream& operator<<(std::ostream& o, const ex2::NamespaceInNamespaceStruct& value) {
  o << value.data << " ";

  return o;
}

} // namespace ex2



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceStruct_H
#define DATAMODEL_NamespaceStruct_H

#include <ostream>

namespace ex2 {


class NamespaceStruct {
public:
  int x;
  int y;


};

inline std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStruct& value) {
  o << value.x << " ";
  o << value.y << " ";

  return o;
}

} // namespace ex2



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NotSoSimpleStruct_H
#define DATAMODEL_NotSoSimpleStruct_H

#include "datamodel/SimpleStruct.h"
#include <ostream>



class NotSoSimpleStruct {
public:
  SimpleStruct data; ///< component members can have descriptions


};

inline std::ostream& operator<<(std::ostream& o, const NotSoSimpleStruct& value) {
  o << value.data << " ";

  return o;
}




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_SimpleStruct_H
#define DATAMODEL_SimpleStruct_H

#include <array>
#include <ostream>



class SimpleStruct {
public:
  int x;
  int y;
  int z;
  std::array<int, 4> p;

 SimpleStruct() : x(0),y(0),z(0) {}
 SimpleStruct( const int* v) : x(v[0]),y(v[1]),z(v[2]) {} 

};

inline std::ostream& operator<<(std::ostream& o, const SimpleStruct& value) {
  o << value.x << " ";
  o << value.y << " ";
  o << value.z << " ";
  for (int i = 0; i < 4; ++i) {
    o << value.p[i] << "|";
  }
  o << " ";

  return o;
}




#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ConstEventInfo", payloadCode, "@",
"ConstExampleCluster", payloadCode, "@",
"ConstExampleForCyclicDependency1", payloadCode, "@",
"ConstExampleForCyclicDependency2", payloadCode, "@",
"ConstExampleHit", payloadCode, "@",
"ConstExampleMC", payloadCode, "@",
"ConstExampleReferencingType", payloadCode, "@",
"ConstExampleWithArray", payloadCode, "@",
"ConstExampleWithComponent", payloadCode, "@",
"ConstExampleWithOneRelation", payloadCode, "@",
"ConstExampleWithString", payloadCode, "@",
"ConstExampleWithVectorMember", payloadCode, "@",
"EventInfo", payloadCode, "@",
"EventInfoCollection", payloadCode, "@",
"EventInfoData", payloadCode, "@",
"EventInfoObj", payloadCode, "@",
"ExampleCluster", payloadCode, "@",
"ExampleClusterCollection", payloadCode, "@",
"ExampleClusterData", payloadCode, "@",
"ExampleClusterObj", payloadCode, "@",
"ExampleForCyclicDependency1", payloadCode, "@",
"ExampleForCyclicDependency1Collection", payloadCode, "@",
"ExampleForCyclicDependency1Data", payloadCode, "@",
"ExampleForCyclicDependency1Obj", payloadCode, "@",
"ExampleForCyclicDependency2", payloadCode, "@",
"ExampleForCyclicDependency2Collection", payloadCode, "@",
"ExampleForCyclicDependency2Data", payloadCode, "@",
"ExampleForCyclicDependency2Obj", payloadCode, "@",
"ExampleHit", payloadCode, "@",
"ExampleHitCollection", payloadCode, "@",
"ExampleHitData", payloadCode, "@",
"ExampleHitObj", payloadCode, "@",
"ExampleMC", payloadCode, "@",
"ExampleMCCollection", payloadCode, "@",
"ExampleMCData", payloadCode, "@",
"ExampleMCObj", payloadCode, "@",
"ExampleReferencingType", payloadCode, "@",
"ExampleReferencingTypeCollection", payloadCode, "@",
"ExampleReferencingTypeData", payloadCode, "@",
"ExampleReferencingTypeObj", payloadCode, "@",
"ExampleWithArray", payloadCode, "@",
"ExampleWithArrayCollection", payloadCode, "@",
"ExampleWithArrayData", payloadCode, "@",
"ExampleWithArrayObj", payloadCode, "@",
"ExampleWithComponent", payloadCode, "@",
"ExampleWithComponentCollection", payloadCode, "@",
"ExampleWithComponentData", payloadCode, "@",
"ExampleWithComponentObj", payloadCode, "@",
"ExampleWithOneRelation", payloadCode, "@",
"ExampleWithOneRelationCollection", payloadCode, "@",
"ExampleWithOneRelationData", payloadCode, "@",
"ExampleWithOneRelationObj", payloadCode, "@",
"ExampleWithString", payloadCode, "@",
"ExampleWithStringCollection", payloadCode, "@",
"ExampleWithStringData", payloadCode, "@",
"ExampleWithStringObj", payloadCode, "@",
"ExampleWithVectorMember", payloadCode, "@",
"ExampleWithVectorMemberCollection", payloadCode, "@",
"ExampleWithVectorMemberData", payloadCode, "@",
"ExampleWithVectorMemberObj", payloadCode, "@",
"NotSoSimpleStruct", payloadCode, "@",
"SimpleStruct", payloadCode, "@",
"ex2::NamespaceInNamespaceStruct", payloadCode, "@",
"ex2::NamespaceStruct", payloadCode, "@",
"ex42::ConstExampleWithARelation", payloadCode, "@",
"ex42::ConstExampleWithNamespace", payloadCode, "@",
"ex42::ExampleWithARelation", payloadCode, "@",
"ex42::ExampleWithARelationCollection", payloadCode, "@",
"ex42::ExampleWithARelationData", payloadCode, "@",
"ex42::ExampleWithARelationObj", payloadCode, "@",
"ex42::ExampleWithNamespace", payloadCode, "@",
"ex42::ExampleWithNamespaceCollection", payloadCode, "@",
"ex42::ExampleWithNamespaceData", payloadCode, "@",
"ex42::ExampleWithNamespaceObj", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTestDataModelDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTestDataModelDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTestDataModelDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTestDataModelDict() {
  TriggerDictionaryInitialization_libTestDataModelDict_Impl();
}
