// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleCluster.h"
#include "ExampleClusterConst.h"
#include "ExampleClusterObj.h"
#include "ExampleClusterData.h"
#include "ExampleClusterCollection.h"


#include <ostream>



ConstExampleCluster::ConstExampleCluster() : m_obj(new ExampleClusterObj()) {
  m_obj->acquire();
}

ConstExampleCluster::ConstExampleCluster(double energy) : m_obj(new ExampleClusterObj()) {
  m_obj->acquire();
  m_obj->data.energy = energy;
}

ConstExampleCluster::ConstExampleCluster(const ConstExampleCluster& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleCluster& ConstExampleCluster::operator=(const ConstExampleCluster& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleCluster::ConstExampleCluster( ExampleClusterObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleCluster ConstExampleCluster::clone() const {
  return {new ExampleClusterObj(*m_obj)};
}

ConstExampleCluster::~ConstExampleCluster() {
  if (m_obj) m_obj->release();
}
const double& ConstExampleCluster::energy() const { return m_obj->data.energy; }



std::vector<ConstExampleHit>::const_iterator ConstExampleCluster::Hits_begin() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_begin);
  return ret_value;
}

std::vector<ConstExampleHit>::const_iterator ConstExampleCluster::Hits_end() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_end);
  return ret_value;
}

unsigned int ConstExampleCluster::Hits_size() const {
  return m_obj->data.Hits_end - m_obj->data.Hits_begin;
}

ConstExampleHit ConstExampleCluster::Hits(unsigned int index) const {
  if (Hits_size() > index) {
    return m_obj->m_Hits->at(m_obj->data.Hits_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleHit> ConstExampleCluster::Hits() const {
  auto begin = m_obj->m_Hits->begin();
  std::advance(begin, m_obj->data.Hits_begin);
  auto end = m_obj->m_Hits->begin();
  std::advance(end, m_obj->data.Hits_end);
  return {begin, end};
}


std::vector<ConstExampleCluster>::const_iterator ConstExampleCluster::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ConstExampleCluster>::const_iterator ConstExampleCluster::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

unsigned int ConstExampleCluster::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ConstExampleCluster ConstExampleCluster::Clusters(unsigned int index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleCluster> ConstExampleCluster::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}





bool ConstExampleCluster::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleCluster::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleCluster::operator==(const ExampleCluster& other) const {
  return m_obj == other.m_obj;
}

