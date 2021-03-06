// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithOneRelationOBJ_H
#define SRC_ExampleWithOneRelationOBJ_H

// data model specific includes
#include "ExampleWithOneRelationData.h"

#include "podio/ObjBase.h"

// forward declarations
class ConstExampleCluster;



class ExampleWithOneRelation;
class ConstExampleWithOneRelation;

class ExampleWithOneRelationObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithOneRelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithOneRelationObj(const ExampleWithOneRelationObj&);
  /// constructor from ObjectID and ExampleWithOneRelationData
  /// does not initialize the internal relation containers
  ExampleWithOneRelationObj(const podio::ObjectID id, ExampleWithOneRelationData data);
  virtual ~ExampleWithOneRelationObj();

public:
  ExampleWithOneRelationData data;
  ConstExampleCluster* m_cluster;
};



#endif
