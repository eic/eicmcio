// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleMC.h"
#include "ExampleMCConst.h"
#include "ExampleMCObj.h"
#include "ExampleMCData.h"
#include "ExampleMCCollection.h"


#include <ostream>



ConstExampleMC::ConstExampleMC() : m_obj(new ExampleMCObj()) {
  m_obj->acquire();
}

ConstExampleMC::ConstExampleMC(double energy, int PDG) : m_obj(new ExampleMCObj()) {
  m_obj->acquire();
  m_obj->data.energy = energy;
  m_obj->data.PDG = PDG;
}

ConstExampleMC::ConstExampleMC(const ConstExampleMC& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleMC& ConstExampleMC::operator=(const ConstExampleMC& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleMC::ConstExampleMC( ExampleMCObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleMC ConstExampleMC::clone() const {
  return {new ExampleMCObj(*m_obj)};
}

ConstExampleMC::~ConstExampleMC() {
  if (m_obj) m_obj->release();
}
const double& ConstExampleMC::energy() const { return m_obj->data.energy; }
const int& ConstExampleMC::PDG() const { return m_obj->data.PDG; }



std::vector<ConstExampleMC>::const_iterator ConstExampleMC::parents_begin() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_begin);
  return ret_value;
}

std::vector<ConstExampleMC>::const_iterator ConstExampleMC::parents_end() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_end);
  return ret_value;
}

unsigned int ConstExampleMC::parents_size() const {
  return m_obj->data.parents_end - m_obj->data.parents_begin;
}

ConstExampleMC ConstExampleMC::parents(unsigned int index) const {
  if (parents_size() > index) {
    return m_obj->m_parents->at(m_obj->data.parents_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleMC> ConstExampleMC::parents() const {
  auto begin = m_obj->m_parents->begin();
  std::advance(begin, m_obj->data.parents_begin);
  auto end = m_obj->m_parents->begin();
  std::advance(end, m_obj->data.parents_end);
  return {begin, end};
}


std::vector<ConstExampleMC>::const_iterator ConstExampleMC::daughters_begin() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_begin);
  return ret_value;
}

std::vector<ConstExampleMC>::const_iterator ConstExampleMC::daughters_end() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_end);
  return ret_value;
}

unsigned int ConstExampleMC::daughters_size() const {
  return m_obj->data.daughters_end - m_obj->data.daughters_begin;
}

ConstExampleMC ConstExampleMC::daughters(unsigned int index) const {
  if (daughters_size() > index) {
    return m_obj->m_daughters->at(m_obj->data.daughters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleMC> ConstExampleMC::daughters() const {
  auto begin = m_obj->m_daughters->begin();
  std::advance(begin, m_obj->data.daughters_begin);
  auto end = m_obj->m_daughters->begin();
  std::advance(end, m_obj->data.daughters_end);
  return {begin, end};
}





bool ConstExampleMC::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleMC::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleMC::operator==(const ExampleMC& other) const {
  return m_obj == other.m_obj;
}


