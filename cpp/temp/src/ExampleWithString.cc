// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithString.h"
#include "ExampleWithStringConst.h"
#include "ExampleWithStringObj.h"
#include "ExampleWithStringData.h"
#include "ExampleWithStringCollection.h"


#include <ostream>



ExampleWithString::ExampleWithString() : m_obj(new ExampleWithStringObj()) {
  m_obj->acquire();
}

ExampleWithString::ExampleWithString(std::string theString) : m_obj(new ExampleWithStringObj()) {
  m_obj->acquire();
  m_obj->data.theString = theString;
}

ExampleWithString::ExampleWithString(const ExampleWithString& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithString& ExampleWithString::operator=(const ExampleWithString& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithString::ExampleWithString( ExampleWithStringObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithString ExampleWithString::clone() const {
  return {new ExampleWithStringObj(*m_obj)};
}

ExampleWithString::~ExampleWithString() {
  if (m_obj) m_obj->release();
}
ExampleWithString::operator ConstExampleWithString() const { return ConstExampleWithString(m_obj); }

const std::string& ExampleWithString::theString() const { return m_obj->data.theString; }


void ExampleWithString::theString(std::string value) { m_obj->data.theString = value; }







bool ExampleWithString::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithString::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithString::operator==(const ConstExampleWithString& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithString& value) {
  o << " id: " << value.id() << '\n';
  o << " theString : " << value.theString() << '\n';



  return o;
}


