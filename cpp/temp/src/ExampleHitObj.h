// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleHitOBJ_H
#define SRC_ExampleHitOBJ_H

// data model specific includes
#include "ExampleHitData.h"

#include "podio/ObjBase.h"




class ExampleHit;
class ConstExampleHit;

class ExampleHitObj : public podio::ObjBase {
public:
  /// constructor
  ExampleHitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleHitObj(const ExampleHitObj&);
  /// constructor from ObjectID and ExampleHitData
  /// does not initialize the internal relation containers
  ExampleHitObj(const podio::ObjectID id, ExampleHitData data);
  virtual ~ExampleHitObj();

public:
  ExampleHitData data;
};



#endif
