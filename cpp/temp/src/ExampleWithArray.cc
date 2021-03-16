// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithArray.h"
#include "ExampleWithArrayConst.h"
#include "ExampleWithArrayObj.h"
#include "ExampleWithArrayData.h"
#include "ExampleWithArrayCollection.h"


#include <ostream>



ExampleWithArray::ExampleWithArray() : m_obj(new ExampleWithArrayObj()) {
  m_obj->acquire();
}

ExampleWithArray::ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray) : m_obj(new ExampleWithArrayObj()) {
  m_obj->acquire();
  m_obj->data.arrayStruct = arrayStruct;
  m_obj->data.myArray = myArray;
  m_obj->data.anotherArray2 = anotherArray2;
  m_obj->data.snail_case_array = snail_case_array;
  m_obj->data.snail_case_Array3 = snail_case_Array3;
  m_obj->data.structArray = structArray;
}

ExampleWithArray::ExampleWithArray(const ExampleWithArray& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithArray& ExampleWithArray::operator=(const ExampleWithArray& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithArray::ExampleWithArray( ExampleWithArrayObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithArray ExampleWithArray::clone() const {
  return {new ExampleWithArrayObj(*m_obj)};
}

ExampleWithArray::~ExampleWithArray() {
  if (m_obj) m_obj->release();
}
ExampleWithArray::operator ConstExampleWithArray() const { return ConstExampleWithArray(m_obj); }

const NotSoSimpleStruct& ExampleWithArray::arrayStruct() const { return m_obj->data.arrayStruct; }
const SimpleStruct& ExampleWithArray::data() const { return m_obj->data.arrayStruct.data; }
const std::array<int, 4>& ExampleWithArray::myArray() const { return m_obj->data.myArray; }
const int& ExampleWithArray::myArray(size_t i) const { return m_obj->data.myArray.at(i); }
const std::array<int, 4>& ExampleWithArray::anotherArray2() const { return m_obj->data.anotherArray2; }
const int& ExampleWithArray::anotherArray2(size_t i) const { return m_obj->data.anotherArray2.at(i); }
const std::array<int, 4>& ExampleWithArray::snail_case_array() const { return m_obj->data.snail_case_array; }
const int& ExampleWithArray::snail_case_array(size_t i) const { return m_obj->data.snail_case_array.at(i); }
const std::array<int, 4>& ExampleWithArray::snail_case_Array3() const { return m_obj->data.snail_case_Array3; }
const int& ExampleWithArray::snail_case_Array3(size_t i) const { return m_obj->data.snail_case_Array3.at(i); }
const std::array<ex2::NamespaceStruct, 4>& ExampleWithArray::structArray() const { return m_obj->data.structArray; }
const ex2::NamespaceStruct& ExampleWithArray::structArray(size_t i) const { return m_obj->data.structArray.at(i); }


void ExampleWithArray::arrayStruct(NotSoSimpleStruct value) { m_obj->data.arrayStruct = value; }
NotSoSimpleStruct& ExampleWithArray::arrayStruct() { return m_obj->data.arrayStruct; }
void ExampleWithArray::data(SimpleStruct value) { m_obj->data.arrayStruct.data = value; }
SimpleStruct& ExampleWithArray::data() { return m_obj->data.arrayStruct.data; }
void ExampleWithArray::myArray(std::array<int, 4> value) { m_obj->data.myArray = value; }
void ExampleWithArray::myArray(size_t i, int value) { m_obj->data.myArray.at(i) = value; }
std::array<int, 4>& ExampleWithArray::myArray() { return m_obj->data.myArray; }
void ExampleWithArray::anotherArray2(std::array<int, 4> value) { m_obj->data.anotherArray2 = value; }
void ExampleWithArray::anotherArray2(size_t i, int value) { m_obj->data.anotherArray2.at(i) = value; }
std::array<int, 4>& ExampleWithArray::anotherArray2() { return m_obj->data.anotherArray2; }
void ExampleWithArray::snail_case_array(std::array<int, 4> value) { m_obj->data.snail_case_array = value; }
void ExampleWithArray::snail_case_array(size_t i, int value) { m_obj->data.snail_case_array.at(i) = value; }
std::array<int, 4>& ExampleWithArray::snail_case_array() { return m_obj->data.snail_case_array; }
void ExampleWithArray::snail_case_Array3(std::array<int, 4> value) { m_obj->data.snail_case_Array3 = value; }
void ExampleWithArray::snail_case_Array3(size_t i, int value) { m_obj->data.snail_case_Array3.at(i) = value; }
std::array<int, 4>& ExampleWithArray::snail_case_Array3() { return m_obj->data.snail_case_Array3; }
void ExampleWithArray::structArray(std::array<ex2::NamespaceStruct, 4> value) { m_obj->data.structArray = value; }
void ExampleWithArray::structArray(size_t i, ex2::NamespaceStruct value) { m_obj->data.structArray.at(i) = value; }
std::array<ex2::NamespaceStruct, 4>& ExampleWithArray::structArray() { return m_obj->data.structArray; }







bool ExampleWithArray::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithArray::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithArray::operator==(const ConstExampleWithArray& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithArray& value) {
  o << " id: " << value.id() << '\n';
  o << " arrayStruct : " << value.arrayStruct() << '\n';
  o << " arrayStruct: " << value.data() << '\n';
  o << " myArray : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.myArray()[i] << "|";
  }
  o << '\n';
  o << " anotherArray2 : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.anotherArray2()[i] << "|";
  }
  o << '\n';
  o << " snail_case_array : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.snail_case_array()[i] << "|";
  }
  o << '\n';
  o << " snail_case_Array3 : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.snail_case_Array3()[i] << "|";
  }
  o << '\n';
  o << " structArray : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.structArray()[i] << "|";
  }
  o << '\n';



  return o;
}


