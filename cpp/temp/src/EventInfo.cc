// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "EventInfo.h"
#include "EventInfoConst.h"
#include "EventInfoObj.h"
#include "EventInfoData.h"
#include "EventInfoCollection.h"


#include <ostream>



EventInfo::EventInfo() : m_obj(new EventInfoObj()) {
  m_obj->acquire();
}

EventInfo::EventInfo(int Number) : m_obj(new EventInfoObj()) {
  m_obj->acquire();
  m_obj->data.Number = Number;
}

EventInfo::EventInfo(const EventInfo& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

EventInfo& EventInfo::operator=(const EventInfo& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

EventInfo::EventInfo( EventInfoObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

EventInfo EventInfo::clone() const {
  return {new EventInfoObj(*m_obj)};
}

EventInfo::~EventInfo() {
  if (m_obj) m_obj->release();
}
EventInfo::operator ConstEventInfo() const { return ConstEventInfo(m_obj); }

const int& EventInfo::Number() const { return m_obj->data.Number; }


void EventInfo::Number(int value) { m_obj->data.Number = value; }





int EventInfo::getNumber() const { return Number(); }


bool EventInfo::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID EventInfo::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool EventInfo::operator==(const ConstEventInfo& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstEventInfo& value) {
  o << " id: " << value.id() << '\n';
  o << " Number : " << value.Number() << '\n';



  return o;
}


