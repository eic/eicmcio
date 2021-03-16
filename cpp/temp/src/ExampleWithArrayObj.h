// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithArrayOBJ_H
#define SRC_ExampleWithArrayOBJ_H

// data model specific includes
#include "ExampleWithArrayData.h"

#include "podio/ObjBase.h"




class ExampleWithArray;
class ConstExampleWithArray;

class ExampleWithArrayObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithArrayObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayObj(const ExampleWithArrayObj&);
  /// constructor from ObjectID and ExampleWithArrayData
  /// does not initialize the internal relation containers
  ExampleWithArrayObj(const podio::ObjectID id, ExampleWithArrayData data);
  virtual ~ExampleWithArrayObj();

public:
  ExampleWithArrayData data;
};



#endif
