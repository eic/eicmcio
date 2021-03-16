// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithNamespace.h"
#include "ExampleWithNamespaceConst.h"
#include "ExampleWithNamespaceObj.h"
#include "ExampleWithNamespaceData.h"
#include "ExampleWithNamespaceCollection.h"


#include <ostream>

namespace ex42 {


ExampleWithNamespace::ExampleWithNamespace() : m_obj(new ExampleWithNamespaceObj()) {
  m_obj->acquire();
}

ExampleWithNamespace::ExampleWithNamespace(ex2::NamespaceStruct data) : m_obj(new ExampleWithNamespaceObj()) {
  m_obj->acquire();
  m_obj->data.data = data;
}

ExampleWithNamespace::ExampleWithNamespace(const ExampleWithNamespace& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithNamespace& ExampleWithNamespace::operator=(const ExampleWithNamespace& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithNamespace::ExampleWithNamespace( ExampleWithNamespaceObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithNamespace ExampleWithNamespace::clone() const {
  return {new ExampleWithNamespaceObj(*m_obj)};
}

ExampleWithNamespace::~ExampleWithNamespace() {
  if (m_obj) m_obj->release();
}
ExampleWithNamespace::operator ConstExampleWithNamespace() const { return ConstExampleWithNamespace(m_obj); }

const ex2::NamespaceStruct& ExampleWithNamespace::data() const { return m_obj->data.data; }
const int& ExampleWithNamespace::x() const { return m_obj->data.data.x; }
const int& ExampleWithNamespace::y() const { return m_obj->data.data.y; }


void ExampleWithNamespace::data(ex2::NamespaceStruct value) { m_obj->data.data = value; }
ex2::NamespaceStruct& ExampleWithNamespace::data() { return m_obj->data.data; }
void ExampleWithNamespace::x(int value) { m_obj->data.data.x = value; }
void ExampleWithNamespace::y(int value) { m_obj->data.data.y = value; }







bool ExampleWithNamespace::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithNamespace::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithNamespace::operator==(const ConstExampleWithNamespace& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithNamespace& value) {
  o << " id: " << value.id() << '\n';
  o << " data : " << value.data() << '\n';
  o << " data: " << value.x() << '\n';
  o << " data: " << value.y() << '\n';



  return o;
}

} // namespace ex42

