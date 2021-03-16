// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleReferencingType_H
#define SRC_ExampleReferencingType_H

#include "ExampleReferencingTypeConst.h"
#include "ExampleReferencingTypeObj.h"

#include <vector>
#include "podio/ObjectID.h"
#include <ostream>





class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionIterator;
class ConstExampleReferencingType;

/** @class ExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingType {

  friend ExampleReferencingTypeCollection;
  friend ExampleReferencingTypeCollectionIterator;
  friend ConstExampleReferencingType;

public:

  /// default constructor
  ExampleReferencingType();

  /// constructor from existing ExampleReferencingTypeObj
  ExampleReferencingType(ExampleReferencingTypeObj* obj);

  /// copy constructor
  ExampleReferencingType(const ExampleReferencingType& other);

  /// copy-assignment operator
  ExampleReferencingType& operator=(const ExampleReferencingType& other);

  /// support cloning (deep-copy)
  ExampleReferencingType clone() const;

  /// destructor
  ~ExampleReferencingType();

  /// conversion to const object
  operator ConstExampleReferencingType() const;

public:





  void addClusters(ConstExampleCluster);
  unsigned int Clusters_size() const;
  ConstExampleCluster Clusters(unsigned int) const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ConstExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ConstExampleCluster> Clusters() const;
  void addRefs(ConstExampleReferencingType);
  unsigned int Refs_size() const;
  ConstExampleReferencingType Refs(unsigned int) const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ConstExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ConstExampleReferencingType> Refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ConstExampleReferencingType& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleReferencingType& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleReferencingTypeObj* m_obj;
};

std::ostream& operator<<(std::ostream& o, const ConstExampleReferencingType& value);



#endif
