// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleClusterOBJ_H
#define SRC_ExampleClusterOBJ_H

// data model specific includes
#include "ExampleClusterData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleCluster;
class ConstExampleCluster;

class ExampleClusterObj : public podio::ObjBase {
public:
  /// constructor
  ExampleClusterObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleClusterObj(const ExampleClusterObj&);
  /// constructor from ObjectID and ExampleClusterData
  /// does not initialize the internal relation containers
  ExampleClusterObj(const podio::ObjectID id, ExampleClusterData data);
  virtual ~ExampleClusterObj();

public:
  ExampleClusterData data;
  std::vector<ConstExampleHit>* m_Hits;
  std::vector<ConstExampleCluster>* m_Clusters;
};



#endif
