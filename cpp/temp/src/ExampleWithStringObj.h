// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithStringOBJ_H
#define SRC_ExampleWithStringOBJ_H

// data model specific includes
#include "ExampleWithStringData.h"

#include "podio/ObjBase.h"




class ExampleWithString;
class ConstExampleWithString;

class ExampleWithStringObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithStringObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithStringObj(const ExampleWithStringObj&);
  /// constructor from ObjectID and ExampleWithStringData
  /// does not initialize the internal relation containers
  ExampleWithStringObj(const podio::ObjectID id, ExampleWithStringData data);
  virtual ~ExampleWithStringObj();

public:
  ExampleWithStringData data;
};



#endif
