// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_EventInfoOBJ_H
#define SRC_EventInfoOBJ_H

// data model specific includes
#include "EventInfoData.h"

#include "podio/ObjBase.h"




class EventInfo;
class ConstEventInfo;

class EventInfoObj : public podio::ObjBase {
public:
  /// constructor
  EventInfoObj();
  /// copy constructor (does a deep-copy of relation containers)
  EventInfoObj(const EventInfoObj&);
  /// constructor from ObjectID and EventInfoData
  /// does not initialize the internal relation containers
  EventInfoObj(const podio::ObjectID id, EventInfoData data);
  virtual ~EventInfoObj();

public:
  EventInfoData data;
};



#endif
