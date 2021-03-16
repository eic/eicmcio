// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithVectorMemberOBJ_H
#define SRC_ExampleWithVectorMemberOBJ_H

// data model specific includes
#include "ExampleWithVectorMemberData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleWithVectorMember;
class ConstExampleWithVectorMember;

class ExampleWithVectorMemberObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithVectorMemberObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithVectorMemberObj(const ExampleWithVectorMemberObj&);
  /// constructor from ObjectID and ExampleWithVectorMemberData
  /// does not initialize the internal relation containers
  ExampleWithVectorMemberObj(const podio::ObjectID id, ExampleWithVectorMemberData data);
  virtual ~ExampleWithVectorMemberObj();

public:
  ExampleWithVectorMemberData data;
  std::vector<int>* m_count;
};



#endif
