// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleHit.h"
#include "ExampleHitConst.h"
#include "ExampleHitObj.h"
#include "ExampleHitData.h"
#include "ExampleHitCollection.h"


#include <ostream>



ExampleHit::ExampleHit() : m_obj(new ExampleHitObj()) {
  m_obj->acquire();
}

ExampleHit::ExampleHit(unsigned long long cellID, double x, double y, double z, double energy) : m_obj(new ExampleHitObj()) {
  m_obj->acquire();
  m_obj->data.cellID = cellID;
  m_obj->data.x = x;
  m_obj->data.y = y;
  m_obj->data.z = z;
  m_obj->data.energy = energy;
}

ExampleHit::ExampleHit(const ExampleHit& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleHit& ExampleHit::operator=(const ExampleHit& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleHit::ExampleHit( ExampleHitObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleHit ExampleHit::clone() const {
  return {new ExampleHitObj(*m_obj)};
}

ExampleHit::~ExampleHit() {
  if (m_obj) m_obj->release();
}
ExampleHit::operator ConstExampleHit() const { return ConstExampleHit(m_obj); }

const unsigned long long& ExampleHit::cellID() const { return m_obj->data.cellID; }
const double& ExampleHit::x() const { return m_obj->data.x; }
const double& ExampleHit::y() const { return m_obj->data.y; }
const double& ExampleHit::z() const { return m_obj->data.z; }
const double& ExampleHit::energy() const { return m_obj->data.energy; }


void ExampleHit::cellID(unsigned long long value) { m_obj->data.cellID = value; }
void ExampleHit::x(double value) { m_obj->data.x = value; }
void ExampleHit::y(double value) { m_obj->data.y = value; }
void ExampleHit::z(double value) { m_obj->data.z = value; }
void ExampleHit::energy(double value) { m_obj->data.energy = value; }







bool ExampleHit::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleHit::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleHit::operator==(const ConstExampleHit& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleHit& value) {
  o << " id: " << value.id() << '\n';
  o << " cellID : " << value.cellID() << '\n';
  o << " x : " << value.x() << '\n';
  o << " y : " << value.y() << '\n';
  o << " z : " << value.z() << '\n';
  o << " energy : " << value.energy() << '\n';



  return o;
}


