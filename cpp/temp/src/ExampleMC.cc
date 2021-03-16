// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleMC.h"
#include "ExampleMCConst.h"
#include "ExampleMCObj.h"
#include "ExampleMCData.h"
#include "ExampleMCCollection.h"


#include <ostream>



ExampleMC::ExampleMC() : m_obj(new ExampleMCObj()) {
  m_obj->acquire();
}

ExampleMC::ExampleMC(double energy, int PDG) : m_obj(new ExampleMCObj()) {
  m_obj->acquire();
  m_obj->data.energy = energy;
  m_obj->data.PDG = PDG;
}

ExampleMC::ExampleMC(const ExampleMC& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleMC& ExampleMC::operator=(const ExampleMC& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleMC::ExampleMC( ExampleMCObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleMC ExampleMC::clone() const {
  return {new ExampleMCObj(*m_obj)};
}

ExampleMC::~ExampleMC() {
  if (m_obj) m_obj->release();
}
ExampleMC::operator ConstExampleMC() const { return ConstExampleMC(m_obj); }

const double& ExampleMC::energy() const { return m_obj->data.energy; }
const int& ExampleMC::PDG() const { return m_obj->data.PDG; }


void ExampleMC::energy(double value) { m_obj->data.energy = value; }
void ExampleMC::PDG(int value) { m_obj->data.PDG = value; }


void ExampleMC::addparents(ConstExampleMC component) {
  m_obj->m_parents->push_back(component);
  m_obj->data.parents_end++;
}

std::vector<ConstExampleMC>::const_iterator ExampleMC::parents_begin() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_begin);
  return ret_value;
}

std::vector<ConstExampleMC>::const_iterator ExampleMC::parents_end() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_end);
  return ret_value;
}

unsigned int ExampleMC::parents_size() const {
  return m_obj->data.parents_end - m_obj->data.parents_begin;
}

ConstExampleMC ExampleMC::parents(unsigned int index) const {
  if (parents_size() > index) {
    return m_obj->m_parents->at(m_obj->data.parents_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleMC> ExampleMC::parents() const {
  auto begin = m_obj->m_parents->begin();
  std::advance(begin, m_obj->data.parents_begin);
  auto end = m_obj->m_parents->begin();
  std::advance(end, m_obj->data.parents_end);
  return {begin, end};
}

void ExampleMC::adddaughters(ConstExampleMC component) {
  m_obj->m_daughters->push_back(component);
  m_obj->data.daughters_end++;
}

std::vector<ConstExampleMC>::const_iterator ExampleMC::daughters_begin() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_begin);
  return ret_value;
}

std::vector<ConstExampleMC>::const_iterator ExampleMC::daughters_end() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_end);
  return ret_value;
}

unsigned int ExampleMC::daughters_size() const {
  return m_obj->data.daughters_end - m_obj->data.daughters_begin;
}

ConstExampleMC ExampleMC::daughters(unsigned int index) const {
  if (daughters_size() > index) {
    return m_obj->m_daughters->at(m_obj->data.daughters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ConstExampleMC> ExampleMC::daughters() const {
  auto begin = m_obj->m_daughters->begin();
  std::advance(begin, m_obj->data.daughters_begin);
  auto end = m_obj->m_daughters->begin();
  std::advance(end, m_obj->data.daughters_end);
  return {begin, end};
}






bool ExampleMC::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleMC::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleMC::operator==(const ConstExampleMC& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleMC& value) {
  o << " id: " << value.id() << '\n';
  o << " energy : " << value.energy() << '\n';
  o << " PDG : " << value.PDG() << '\n';


  o << " parents : ";
  for (unsigned i = 0; i < value.parents_size(); ++i) {
    o << value.parents(i).id() << " ";
  }
  o << '\n';
  o << " daughters : ";
  for (unsigned i = 0; i < value.daughters_size(); ++i) {
    o << value.daughters(i).id() << " ";
  }
  o << '\n';

  return o;
}


