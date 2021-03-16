// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleCluster.h"
#include "ExampleClusterConst.h"
#include "ExampleClusterObj.h"
#include "ExampleClusterData.h"
#include "ExampleClusterCollection.h"


#include <ostream>



ExampleCluster::ExampleCluster() : m_obj(new ExampleClusterObj()) {
  m_obj->acquire();
}

ExampleCluster::ExampleCluster(double energy) : m_obj(new ExampleClusterObj()) {
  m_obj->acquire();
  m_obj->data.energy = energy;
}

ExampleCluster::ExampleCluster(const ExampleCluster& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleCluster& ExampleCluster::operator=(const ExampleCluster& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleCluster::ExampleCluster( ExampleClusterObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleCluster ExampleCluster::clone() const {
  return {new ExampleClusterObj(*m_obj)};
}

ExampleCluster::~ExampleCluster() {
  if (m_obj) m_obj->release();
}
ExampleCluster::operator ConstExampleCluster() const { return ConstExampleCluster(m_obj); }

const double& ExampleCluster::energy() const { return m_obj->data.energy; }


void ExampleCluster::energy(double value) { m_obj->data.energy = value; }


void ExampleCluster::addHits(ConstExampleHit component) {
  m_obj->m_Hits->push_back(component);
  m_obj->data.Hits_end++;
}

std::vector<ConstExampleHit>::const_iterator ExampleCluster::Hits_begin() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_begin);
  return ret_value;
}

std::vector<ConstExampleHit>::const_iterator ExampleCluster::Hits_end() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_end);
  return ret_value;
}

unsigned int ExampleCluster::Hits_size() const {
  return m_obj->data.Hits_end - m_obj->data.Hits_begin;
}

ConstExampleHit ExampleCluster::Hits(unsigned int index) const {
  if (Hits_size() > index) {
    return m_obj->m_Hits->at(m_obj->data.Hits_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleHit> ExampleCluster::Hits() const {
  auto begin = m_obj->m_Hits->begin();
  std::advance(begin, m_obj->data.Hits_begin);
  auto end = m_obj->m_Hits->begin();
  std::advance(end, m_obj->data.Hits_end);
  return {begin, end};
}

void ExampleCluster::addClusters(ConstExampleCluster component) {
  m_obj->m_Clusters->push_back(component);
  m_obj->data.Clusters_end++;
}

std::vector<ConstExampleCluster>::const_iterator ExampleCluster::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ConstExampleCluster>::const_iterator ExampleCluster::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

unsigned int ExampleCluster::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ConstExampleCluster ExampleCluster::Clusters(unsigned int index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleCluster> ExampleCluster::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}






bool ExampleCluster::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleCluster::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleCluster::operator==(const ConstExampleCluster& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleCluster& value) {
  o << " id: " << value.id() << '\n';
  o << " energy : " << value.energy() << '\n';


  o << " Hits : ";
  for (unsigned i = 0; i < value.Hits_size(); ++i) {
    o << value.Hits(i) << " ";
  }
  o << '\n';
  o << " Clusters : ";
  for (unsigned i = 0; i < value.Clusters_size(); ++i) {
    o << value.Clusters(i).id() << " ";
  }
  o << '\n';

  return o;
}


