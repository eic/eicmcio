// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ConstExampleReferencingType_H
#define SRC_ConstExampleReferencingType_H

#include "ExampleReferencingTypeObj.h"

#include <vector>
#include "podio/ObjectID.h"





class ExampleReferencingType;
class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionIterator;

/** @class ConstExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ConstExampleReferencingType {

  friend ExampleReferencingType;
  friend ExampleReferencingTypeCollection;
  friend ExampleReferencingTypeCollectionIterator;

public:
  /// default constructor
  ConstExampleReferencingType();

  /// constructor from existing ExampleReferencingTypeObj
  ConstExampleReferencingType(ExampleReferencingTypeObj* obj);

  /// copy constructor
  ConstExampleReferencingType(const ConstExampleReferencingType& other);

  /// copy-assignment operator
  ConstExampleReferencingType& operator=(const ConstExampleReferencingType& other);

  /// support cloning (deep-copy)
  ConstExampleReferencingType clone() const;

  /// destructor
  ~ConstExampleReferencingType();


public:



  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;
  unsigned int Refs_size() const;
  ConstExampleReferencingType Refs(unsigned int) const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ConstExampleReferencingType> Refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleReferencingType& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleReferencingType& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleReferencingTypeObj* m_obj;
};



#endif
