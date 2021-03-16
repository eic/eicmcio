// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithOneRelation.h"
#include "ExampleWithOneRelationConst.h"
#include "ExampleWithOneRelationObj.h"
#include "ExampleWithOneRelationData.h"
#include "ExampleWithOneRelationCollection.h"


#include <ostream>



ExampleWithOneRelation::ExampleWithOneRelation() : m_obj(new ExampleWithOneRelationObj()) {
  m_obj->acquire();
}


ExampleWithOneRelation::ExampleWithOneRelation(const ExampleWithOneRelation& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithOneRelation& ExampleWithOneRelation::operator=(const ExampleWithOneRelation& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithOneRelation::ExampleWithOneRelation( ExampleWithOneRelationObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithOneRelation ExampleWithOneRelation::clone() const {
  return {new ExampleWithOneRelationObj(*m_obj)};
}

ExampleWithOneRelation::~ExampleWithOneRelation() {
  if (m_obj) m_obj->release();
}
ExampleWithOneRelation::operator ConstExampleWithOneRelation() const { return ConstExampleWithOneRelation(m_obj); }


const ConstExampleCluster ExampleWithOneRelation::cluster() const {
  if (!m_obj->m_cluster) {
    return ::ConstExampleCluster(nullptr);
  }
  return ::ConstExampleCluster(*(m_obj->m_cluster));
}



void ExampleWithOneRelation::cluster(::ConstExampleCluster value) {
  if (m_obj->m_cluster) delete m_obj->m_cluster;
  m_obj->m_cluster = new ConstExampleCluster(value);
}







bool ExampleWithOneRelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithOneRelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithOneRelation::operator==(const ConstExampleWithOneRelation& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithOneRelation& value) {
  o << " id: " << value.id() << '\n';

  o << " cluster : " << value.cluster().id() << '\n';


  return o;
}


