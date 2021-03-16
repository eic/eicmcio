// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithArray.h"
#include "ExampleWithArrayConst.h"
#include "ExampleWithArrayObj.h"
#include "ExampleWithArrayData.h"
#include "ExampleWithArrayCollection.h"


#include <ostream>



ConstExampleWithArray::ConstExampleWithArray() : m_obj(new ExampleWithArrayObj()) {
  m_obj->acquire();
}

ConstExampleWithArray::ConstExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray) : m_obj(new ExampleWithArrayObj()) {
  m_obj->acquire();
  m_obj->data.arrayStruct = arrayStruct;
  m_obj->data.myArray = myArray;
  m_obj->data.anotherArray2 = anotherArray2;
  m_obj->data.snail_case_array = snail_case_array;
  m_obj->data.snail_case_Array3 = snail_case_Array3;
  m_obj->data.structArray = structArray;
}

ConstExampleWithArray::ConstExampleWithArray(const ConstExampleWithArray& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithArray& ConstExampleWithArray::operator=(const ConstExampleWithArray& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithArray::ConstExampleWithArray( ExampleWithArrayObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithArray ConstExampleWithArray::clone() const {
  return {new ExampleWithArrayObj(*m_obj)};
}

ConstExampleWithArray::~ConstExampleWithArray() {
  if (m_obj) m_obj->release();
}
const NotSoSimpleStruct& ConstExampleWithArray::arrayStruct() const { return m_obj->data.arrayStruct; }
const SimpleStruct& ConstExampleWithArray::data() const { return m_obj->data.arrayStruct.data; }
const std::array<int, 4>& ConstExampleWithArray::myArray() const { return m_obj->data.myArray; }
const int& ConstExampleWithArray::myArray(size_t i) const { return m_obj->data.myArray.at(i); }
const std::array<int, 4>& ConstExampleWithArray::anotherArray2() const { return m_obj->data.anotherArray2; }
const int& ConstExampleWithArray::anotherArray2(size_t i) const { return m_obj->data.anotherArray2.at(i); }
const std::array<int, 4>& ConstExampleWithArray::snail_case_array() const { return m_obj->data.snail_case_array; }
const int& ConstExampleWithArray::snail_case_array(size_t i) const { return m_obj->data.snail_case_array.at(i); }
const std::array<int, 4>& ConstExampleWithArray::snail_case_Array3() const { return m_obj->data.snail_case_Array3; }
const int& ConstExampleWithArray::snail_case_Array3(size_t i) const { return m_obj->data.snail_case_Array3.at(i); }
const std::array<ex2::NamespaceStruct, 4>& ConstExampleWithArray::structArray() const { return m_obj->data.structArray; }
const ex2::NamespaceStruct& ConstExampleWithArray::structArray(size_t i) const { return m_obj->data.structArray.at(i); }






bool ConstExampleWithArray::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithArray::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithArray::operator==(const ExampleWithArray& other) const {
  return m_obj == other.m_obj;
}


