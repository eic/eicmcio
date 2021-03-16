// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithString.h"
#include "ExampleWithStringConst.h"
#include "ExampleWithStringObj.h"
#include "ExampleWithStringData.h"
#include "ExampleWithStringCollection.h"


#include <ostream>



ConstExampleWithString::ConstExampleWithString() : m_obj(new ExampleWithStringObj()) {
  m_obj->acquire();
}

ConstExampleWithString::ConstExampleWithString(std::string theString) : m_obj(new ExampleWithStringObj()) {
  m_obj->acquire();
  m_obj->data.theString = theString;
}

ConstExampleWithString::ConstExampleWithString(const ConstExampleWithString& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithString& ConstExampleWithString::operator=(const ConstExampleWithString& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithString::ConstExampleWithString( ExampleWithStringObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithString ConstExampleWithString::clone() const {
  return {new ExampleWithStringObj(*m_obj)};
}

ConstExampleWithString::~ConstExampleWithString() {
  if (m_obj) m_obj->release();
}
const std::string& ConstExampleWithString::theString() const { return m_obj->data.theString; }






bool ConstExampleWithString::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithString::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithString::operator==(const ExampleWithString& other) const {
  return m_obj == other.m_obj;
}


