// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleMCOBJ_H
#define SRC_ExampleMCOBJ_H

// data model specific includes
#include "ExampleMCData.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/ObjBase.h"
#include <vector>



class ExampleMC;
class ConstExampleMC;

class ExampleMCObj : public podio::ObjBase {
public:
  /// constructor
  ExampleMCObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleMCObj(const ExampleMCObj&);
  /// constructor from ObjectID and ExampleMCData
  /// does not initialize the internal relation containers
  ExampleMCObj(const podio::ObjectID id, ExampleMCData data);
  virtual ~ExampleMCObj();

public:
  ExampleMCData data;
  std::vector<ConstExampleMC>* m_parents;
  std::vector<ConstExampleMC>* m_daughters;
};



#endif
