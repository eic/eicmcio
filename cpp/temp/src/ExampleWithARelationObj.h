// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithARelationOBJ_H
#define SRC_ExampleWithARelationOBJ_H

// data model specific includes
#include "ExampleWithARelationData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>
// forward declarations
namespace ex42 {
class ConstExampleWithNamespace;
}


namespace ex42 {

class ExampleWithARelation;
class ConstExampleWithARelation;

class ExampleWithARelationObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithARelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithARelationObj(const ExampleWithARelationObj&);
  /// constructor from ObjectID and ExampleWithARelationData
  /// does not initialize the internal relation containers
  ExampleWithARelationObj(const podio::ObjectID id, ExampleWithARelationData data);
  virtual ~ExampleWithARelationObj();

public:
  ExampleWithARelationData data;
  ::ex42::ConstExampleWithNamespace* m_ref;
  std::vector<::ex42::ConstExampleWithNamespace>* m_refs;
};

} // namespace ex42


#endif
