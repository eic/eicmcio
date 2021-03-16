// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithComponent.h"
#include "ExampleWithComponentConst.h"
#include "ExampleWithComponentObj.h"
#include "ExampleWithComponentData.h"
#include "ExampleWithComponentCollection.h"


#include <ostream>



ConstExampleWithComponent::ConstExampleWithComponent() : m_obj(new ExampleWithComponentObj()) {
  m_obj->acquire();
}

ConstExampleWithComponent::ConstExampleWithComponent(NotSoSimpleStruct component) : m_obj(new ExampleWithComponentObj()) {
  m_obj->acquire();
  m_obj->data.component = component;
}

ConstExampleWithComponent::ConstExampleWithComponent(const ConstExampleWithComponent& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithComponent& ConstExampleWithComponent::operator=(const ConstExampleWithComponent& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithComponent::ConstExampleWithComponent( ExampleWithComponentObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithComponent ConstExampleWithComponent::clone() const {
  return {new ExampleWithComponentObj(*m_obj)};
}

ConstExampleWithComponent::~ConstExampleWithComponent() {
  if (m_obj) m_obj->release();
}
const NotSoSimpleStruct& ConstExampleWithComponent::component() const { return m_obj->data.component; }
const SimpleStruct& ConstExampleWithComponent::data() const { return m_obj->data.component.data; }






bool ConstExampleWithComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithComponent::operator==(const ExampleWithComponent& other) const {
  return m_obj == other.m_obj;
}


