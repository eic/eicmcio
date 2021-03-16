// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithNamespace.h"
#include "ExampleWithNamespaceConst.h"
#include "ExampleWithNamespaceObj.h"
#include "ExampleWithNamespaceData.h"
#include "ExampleWithNamespaceCollection.h"


#include <ostream>

namespace ex42 {


ConstExampleWithNamespace::ConstExampleWithNamespace() : m_obj(new ExampleWithNamespaceObj()) {
  m_obj->acquire();
}

ConstExampleWithNamespace::ConstExampleWithNamespace(ex2::NamespaceStruct data) : m_obj(new ExampleWithNamespaceObj()) {
  m_obj->acquire();
  m_obj->data.data = data;
}

ConstExampleWithNamespace::ConstExampleWithNamespace(const ConstExampleWithNamespace& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithNamespace& ConstExampleWithNamespace::operator=(const ConstExampleWithNamespace& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithNamespace::ConstExampleWithNamespace( ExampleWithNamespaceObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithNamespace ConstExampleWithNamespace::clone() const {
  return {new ExampleWithNamespaceObj(*m_obj)};
}

ConstExampleWithNamespace::~ConstExampleWithNamespace() {
  if (m_obj) m_obj->release();
}
const ex2::NamespaceStruct& ConstExampleWithNamespace::data() const { return m_obj->data.data; }
const int& ConstExampleWithNamespace::x() const { return m_obj->data.data.x; }
const int& ConstExampleWithNamespace::y() const { return m_obj->data.data.y; }






bool ConstExampleWithNamespace::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithNamespace::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithNamespace::operator==(const ExampleWithNamespace& other) const {
  return m_obj == other.m_obj;
}

} // namespace ex42

