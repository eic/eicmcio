// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleReferencingTypeOBJ_H
#define SRC_ExampleReferencingTypeOBJ_H

// data model specific includes
#include "ExampleReferencingTypeData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleReferencingType;
class ConstExampleReferencingType;

class ExampleReferencingTypeObj : public podio::ObjBase {
public:
  /// constructor
  ExampleReferencingTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleReferencingTypeObj(const ExampleReferencingTypeObj&);
  /// constructor from ObjectID and ExampleReferencingTypeData
  /// does not initialize the internal relation containers
  ExampleReferencingTypeObj(const podio::ObjectID id, ExampleReferencingTypeData data);
  virtual ~ExampleReferencingTypeObj();

public:
  ExampleReferencingTypeData data;
  std::vector<ConstExampleCluster>* m_Clusters;
  std::vector<ConstExampleReferencingType>* m_Refs;
};



#endif
