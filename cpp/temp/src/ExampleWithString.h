// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithString_H
#define SRC_ExampleWithString_H

#include "ExampleWithStringConst.h"
#include "ExampleWithStringObj.h"

#include <string>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleWithStringCollection;
class ExampleWithStringCollectionIterator;
class ConstExampleWithString;

/** @class ExampleWithString
 *  Type with a string
 *  @author: Benedikt Hegner
 */
class ExampleWithString {

  friend ExampleWithStringCollection;
  friend ExampleWithStringCollectionIterator;
  friend ConstExampleWithString;

public:

  /// default constructor
  ExampleWithString();
  ExampleWithString(std::string theString);

  /// constructor from existing ExampleWithStringObj
  ExampleWithString(ExampleWithStringObj* obj);

  /// copy constructor
  ExampleWithString(const ExampleWithString& other);

  /// copy-assignment operator
  ExampleWithString& operator=(const ExampleWithString& other);

  /// support cloning (deep-copy)
  ExampleWithString clone() const;

  /// destructor
  ~ExampleWithString();

  /// conversion to const object
  operator ConstExampleWithString() const;

public:

  /// Access the the string
  const std::string& theString() const;



  /// Set the the string
  void theString(std::string value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithStringObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithString& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithString& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithString& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithStringObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithString& value);



#endif
