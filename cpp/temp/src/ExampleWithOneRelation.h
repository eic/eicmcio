// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithOneRelation_H
#define SRC_ExampleWithOneRelation_H

#include "ExampleWithOneRelationConst.h"
#include "ExampleWithOneRelationObj.h"

#include "podio/ObjectID.h"
#include <ostream>

// forward declarations
class ExampleCluster;
class ConstExampleCluster;




class ExampleWithOneRelationCollection;
class ExampleWithOneRelationCollectionIterator;
class ConstExampleWithOneRelation;

/** @class ExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelation {

  friend ExampleWithOneRelationCollection;
  friend ExampleWithOneRelationCollectionIterator;
  friend ConstExampleWithOneRelation;

public:

  /// default constructor
  ExampleWithOneRelation();

  /// constructor from existing ExampleWithOneRelationObj
  ExampleWithOneRelation(ExampleWithOneRelationObj* obj);

  /// copy constructor
  ExampleWithOneRelation(const ExampleWithOneRelation& other);

  /// copy-assignment operator
  ExampleWithOneRelation& operator=(const ExampleWithOneRelation& other);

  /// support cloning (deep-copy)
  ExampleWithOneRelation clone() const;

  /// destructor
  ~ExampleWithOneRelation();

  /// conversion to const object
  operator ConstExampleWithOneRelation() const;

public:


  /// Access the a particular cluster
  const ConstExampleCluster cluster() const;


  /// Set the a particular cluster
  void cluster(ConstExampleCluster value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleWithOneRelation& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleWithOneRelationObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleWithOneRelation& value);



#endif
