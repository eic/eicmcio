// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ExampleWithNamespaceOBJ_H
#define SRC_ExampleWithNamespaceOBJ_H

// data model specific includes
#include "ExampleWithNamespaceData.h"

#include "podio/ObjBase.h"



namespace ex42 {

class ExampleWithNamespace;
class ConstExampleWithNamespace;

class ExampleWithNamespaceObj : public podio::ObjBase {
public:
  /// constructor
  ExampleWithNamespaceObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithNamespaceObj(const ExampleWithNamespaceObj&);
  /// constructor from ObjectID and ExampleWithNamespaceData
  /// does not initialize the internal relation containers
  ExampleWithNamespaceObj(const podio::ObjectID id, ExampleWithNamespaceData data);
  virtual ~ExampleWithNamespaceObj();

public:
  ExampleWithNamespaceData data;
};

} // namespace ex42


#endif
