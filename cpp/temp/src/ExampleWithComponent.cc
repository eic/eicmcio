// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithComponent.h"
#include "ExampleWithComponentConst.h"
#include "ExampleWithComponentObj.h"
#include "ExampleWithComponentData.h"
#include "ExampleWithComponentCollection.h"


#include <ostream>



ExampleWithComponent::ExampleWithComponent() : m_obj(new ExampleWithComponentObj()) {
  m_obj->acquire();
}

ExampleWithComponent::ExampleWithComponent(NotSoSimpleStruct component) : m_obj(new ExampleWithComponentObj()) {
  m_obj->acquire();
  m_obj->data.component = component;
}

ExampleWithComponent::ExampleWithComponent(const ExampleWithComponent& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithComponent& ExampleWithComponent::operator=(const ExampleWithComponent& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithComponent::ExampleWithComponent( ExampleWithComponentObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithComponent ExampleWithComponent::clone() const {
  return {new ExampleWithComponentObj(*m_obj)};
}

ExampleWithComponent::~ExampleWithComponent() {
  if (m_obj) m_obj->release();
}
ExampleWithComponent::operator ConstExampleWithComponent() const { return ConstExampleWithComponent(m_obj); }

const NotSoSimpleStruct& ExampleWithComponent::component() const { return m_obj->data.component; }
const SimpleStruct& ExampleWithComponent::data() const { return m_obj->data.component.data; }


void ExampleWithComponent::component(NotSoSimpleStruct value) { m_obj->data.component = value; }
NotSoSimpleStruct& ExampleWithComponent::component() { return m_obj->data.component; }
void ExampleWithComponent::data(SimpleStruct value) { m_obj->data.component.data = value; }
SimpleStruct& ExampleWithComponent::data() { return m_obj->data.component.data; }







bool ExampleWithComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithComponent::operator==(const ConstExampleWithComponent& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithComponent& value) {
  o << " id: " << value.id() << '\n';
  o << " component : " << value.component() << '\n';
  o << " component: " << value.data() << '\n';



  return o;
}


