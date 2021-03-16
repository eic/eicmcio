// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithArray_H
#define SRC_ExampleWithArray_H

#include "ExampleWithArrayConst.h"
#include "ExampleWithArrayObj.h"

#include <array>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithArrayCollection;
class ExampleWithArrayCollectionIterator;
class ConstExampleWithArray;

/** @class ExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArray {

  friend ExampleWithArrayCollection;
  friend ExampleWithArrayCollectionIterator;
  friend ConstExampleWithArray;

public:

  /// default constructor
  ExampleWithArray();
  ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// constructor from existing ExampleWithArrayObj
  ExampleWithArray(ExampleWithArrayObj* obj);

  /// copy constructor
  ExampleWithArray(const ExampleWithArray& other);

  /// copy-assignment operator
  ExampleWithArray& operator=(const ExampleWithArray& other);

  /// support cloning (deep-copy)
  ExampleWithArray clone() const;

  /// destructor
  ~ExampleWithArray();

  /// conversion to const object
  operator ConstExampleWithArray() const;

public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  const int& myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  const int& anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  const int& snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  const int& snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;


  /// Set the component that contains an array
  void arrayStruct(NotSoSimpleStruct value);
  /// Get reference to component that contains an array
  NotSoSimpleStruct& arrayStruct();
  /// Get reference to the member of component that contains an array
  SimpleStruct& data();
  /// Set the member of  component that contains an array
  void data(SimpleStruct value);

  /// Set the array-member without space to test regex
  void myArray(std::array<int, 4> value);
  void myArray(size_t i, int value);
  /// Get reference to array-member without space to test regex
  std::array<int, 4>& myArray();

  /// Set the array-member with space to test regex
  void anotherArray2(std::array<int, 4> value);
  void anotherArray2(size_t i, int value);
  /// Get reference to array-member with space to test regex
  std::array<int, 4>& anotherArray2();

  /// Set the snail case to test regex
  void snail_case_array(std::array<int, 4> value);
  void snail_case_array(size_t i, int value);
  /// Get reference to snail case to test regex
  std::array<int, 4>& snail_case_array();

  /// Set the mixing things up for regex
  void snail_case_Array3(std::array<int, 4> value);
  void snail_case_Array3(size_t i, int value);
  /// Get reference to mixing things up for regex
  std::array<int, 4>& snail_case_Array3();

  /// Set the an array containing structs
  void structArray(std::array<ex2::NamespaceStruct, 4> value);
  void structArray(size_t i, ex2::NamespaceStruct value);
  /// Get reference to an array containing structs
  std::array<ex2::NamespaceStruct, 4>& structArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithArray& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArray& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithArrayObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithArray& value);



#endif
