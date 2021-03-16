// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleForCyclicDependency2Obj.h"

ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj() :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(),
  m_ref(nullptr)
{  }

ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj(const podio::ObjectID id, ExampleForCyclicDependency2Data data) :
  ObjBase{id, 0}, data(data)
{  }

ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj(const ExampleForCyclicDependency2Obj& other) :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(other.data),
  m_ref(nullptr)
{
  if (other.m_ref) {
    m_ref = new ConstExampleForCyclicDependency1(*(other.m_ref));
  }
}

ExampleForCyclicDependency2Obj::~ExampleForCyclicDependency2Obj() {

  if (m_ref) delete m_ref;
}

