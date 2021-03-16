// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ConstExampleWithString_H
#define SRC_ConstExampleWithString_H

#include "ExampleWithStringObj.h"

#include <string>
#include "podio/ObjectID.h"





class ExampleWithString;
class ExampleWithStringCollection;
class ExampleWithStringCollectionIterator;

/** @class ConstExampleWithString
 *  Type with a string
 *  @author: Benedikt Hegner
 */
class ConstExampleWithString {

  friend ExampleWithString;
  friend ExampleWithStringCollection;
  friend ExampleWithStringCollectionIterator;

public:
  /// default constructor
  ConstExampleWithString();
  ConstExampleWithString(std::string theString);

  /// constructor from existing ExampleWithStringObj
  ConstExampleWithString(ExampleWithStringObj* obj);

  /// copy constructor
  ConstExampleWithString(const ConstExampleWithString& other);

  /// copy-assignment operator
  ConstExampleWithString& operator=(const ConstExampleWithString& other);

  /// support cloning (deep-copy)
  ConstExampleWithString clone() const;

  /// destructor
  ~ConstExampleWithString();


public:

  /// Access the the string
  const std::string& theString() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithStringObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleWithString& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithString& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleWithString& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithStringObj* m_obj;
};



#endif
