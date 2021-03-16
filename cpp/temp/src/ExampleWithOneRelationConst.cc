// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithOneRelation.h"
#include "ExampleWithOneRelationConst.h"
#include "ExampleWithOneRelationObj.h"
#include "ExampleWithOneRelationData.h"
#include "ExampleWithOneRelationCollection.h"


#include <ostream>



ConstExampleWithOneRelation::ConstExampleWithOneRelation() : m_obj(new ExampleWithOneRelationObj()) {
  m_obj->acquire();
}


ConstExampleWithOneRelation::ConstExampleWithOneRelation(const ConstExampleWithOneRelation& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithOneRelation& ConstExampleWithOneRelation::operator=(const ConstExampleWithOneRelation& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithOneRelation::ConstExampleWithOneRelation( ExampleWithOneRelationObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithOneRelation ConstExampleWithOneRelation::clone() const {
  return {new ExampleWithOneRelationObj(*m_obj)};
}

ConstExampleWithOneRelation::~ConstExampleWithOneRelation() {
  if (m_obj) m_obj->release();
}

const ConstExampleCluster ConstExampleWithOneRelation::cluster() const {
  if (!m_obj->m_cluster) {
    return ::ConstExampleCluster(nullptr);
  }
  return ::ConstExampleCluster(*(m_obj->m_cluster));
}






bool ConstExampleWithOneRelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithOneRelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithOneRelation::operator==(const ExampleWithOneRelation& other) const {
  return m_obj == other.m_obj;
}


