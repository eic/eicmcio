// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleForCyclicDependency1Obj.h"

ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj() :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(),
  m_ref(nullptr)
{  }

ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj(const podio::ObjectID id, ExampleForCyclicDependency1Data data) :
  ObjBase{id, 0}, data(data)
{  }

ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj(const ExampleForCyclicDependency1Obj& other) :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(other.data),
  m_ref(nullptr)
{
  if (other.m_ref) {
    m_ref = new ConstExampleForCyclicDependency2(*(other.m_ref));
  }
}

ExampleForCyclicDependency1Obj::~ExampleForCyclicDependency1Obj() {

  if (m_ref) delete m_ref;
}

