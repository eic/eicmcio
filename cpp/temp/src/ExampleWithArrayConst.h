// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ConstExampleWithArray_H
#define SRC_ConstExampleWithArray_H

#include "ExampleWithArrayObj.h"

#include <array>
#include "podio/ObjectID.h"





class ExampleWithArray;
class ExampleWithArrayCollection;
class ExampleWithArrayCollectionIterator;

/** @class ConstExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ConstExampleWithArray {

  friend ExampleWithArray;
  friend ExampleWithArrayCollection;
  friend ExampleWithArrayCollectionIterator;

public:
  /// default constructor
  ConstExampleWithArray();
  ConstExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// constructor from existing ExampleWithArrayObj
  ConstExampleWithArray(ExampleWithArrayObj* obj);

  /// copy constructor
  ConstExampleWithArray(const ConstExampleWithArray& other);

  /// copy-assignment operator
  ConstExampleWithArray& operator=(const ConstExampleWithArray& other);

  /// support cloning (deep-copy)
  ConstExampleWithArray clone() const;

  /// destructor
  ~ConstExampleWithArray();


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




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArray& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithArray& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithArrayObj* m_obj;
};



#endif
