// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleReferencingType.h"
#include "ExampleReferencingTypeConst.h"
#include "ExampleReferencingTypeObj.h"
#include "ExampleReferencingTypeData.h"
#include "ExampleReferencingTypeCollection.h"


#include <ostream>



ExampleReferencingType::ExampleReferencingType() : m_obj(new ExampleReferencingTypeObj()) {
  m_obj->acquire();
}


ExampleReferencingType::ExampleReferencingType(const ExampleReferencingType& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleReferencingType& ExampleReferencingType::operator=(const ExampleReferencingType& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleReferencingType::ExampleReferencingType( ExampleReferencingTypeObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleReferencingType ExampleReferencingType::clone() const {
  return {new ExampleReferencingTypeObj(*m_obj)};
}

ExampleReferencingType::~ExampleReferencingType() {
  if (m_obj) m_obj->release();
}
ExampleReferencingType::operator ConstExampleReferencingType() const { return ConstExampleReferencingType(m_obj); }





void ExampleReferencingType::addClusters(ConstExampleCluster component) {
  m_obj->m_Clusters->push_back(component);
  m_obj->data.Clusters_end++;
}

std::vector<ConstExampleCluster>::const_iterator ExampleReferencingType::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ConstExampleCluster>::const_iterator ExampleReferencingType::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

unsigned int ExampleReferencingType::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ConstExampleCluster ExampleReferencingType::Clusters(unsigned int index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleCluster> ExampleReferencingType::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}

void ExampleReferencingType::addRefs(ConstExampleReferencingType component) {
  m_obj->m_Refs->push_back(component);
  m_obj->data.Refs_end++;
}

std::vector<ConstExampleReferencingType>::const_iterator ExampleReferencingType::Refs_begin() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_begin);
  return ret_value;
}

std::vector<ConstExampleReferencingType>::const_iterator ExampleReferencingType::Refs_end() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_end);
  return ret_value;
}

unsigned int ExampleReferencingType::Refs_size() const {
  return m_obj->data.Refs_end - m_obj->data.Refs_begin;
}

ConstExampleReferencingType ExampleReferencingType::Refs(unsigned int index) const {
  if (Refs_size() > index) {
    return m_obj->m_Refs->at(m_obj->data.Refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleReferencingType> ExampleReferencingType::Refs() const {
  auto begin = m_obj->m_Refs->begin();
  std::advance(begin, m_obj->data.Refs_begin);
  auto end = m_obj->m_Refs->begin();
  std::advance(end, m_obj->data.Refs_end);
  return {begin, end};
}






bool ExampleReferencingType::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleReferencingType::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleReferencingType::operator==(const ConstExampleReferencingType& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleReferencingType& value) {
  o << " id: " << value.id() << '\n';


  o << " Clusters : ";
  for (unsigned i = 0; i < value.Clusters_size(); ++i) {
    o << value.Clusters(i) << " ";
  }
  o << '\n';
  o << " Refs : ";
  for (unsigned i = 0; i < value.Refs_size(); ++i) {
    o << value.Refs(i).id() << " ";
  }
  o << '\n';

  return o;
}


