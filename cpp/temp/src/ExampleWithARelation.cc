// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithARelation.h"
#include "ExampleWithARelationConst.h"
#include "ExampleWithARelationObj.h"
#include "ExampleWithARelationData.h"
#include "ExampleWithARelationCollection.h"


#include <ostream>

namespace ex42 {


ExampleWithARelation::ExampleWithARelation() : m_obj(new ExampleWithARelationObj()) {
  m_obj->acquire();
}

ExampleWithARelation::ExampleWithARelation(float number) : m_obj(new ExampleWithARelationObj()) {
  m_obj->acquire();
  m_obj->data.number = number;
}

ExampleWithARelation::ExampleWithARelation(const ExampleWithARelation& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithARelation& ExampleWithARelation::operator=(const ExampleWithARelation& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithARelation::ExampleWithARelation( ExampleWithARelationObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithARelation ExampleWithARelation::clone() const {
  return {new ExampleWithARelationObj(*m_obj)};
}

ExampleWithARelation::~ExampleWithARelation() {
  if (m_obj) m_obj->release();
}
ExampleWithARelation::operator ConstExampleWithARelation() const { return ConstExampleWithARelation(m_obj); }

const float& ExampleWithARelation::number() const { return m_obj->data.number; }

const ConstExampleWithNamespace ExampleWithARelation::ref() const {
  if (!m_obj->m_ref) {
    return ex42::ConstExampleWithNamespace(nullptr);
  }
  return ex42::ConstExampleWithNamespace(*(m_obj->m_ref));
}


void ExampleWithARelation::number(float value) { m_obj->data.number = value; }

void ExampleWithARelation::ref(ex42::ConstExampleWithNamespace value) {
  if (m_obj->m_ref) delete m_obj->m_ref;
  m_obj->m_ref = new ConstExampleWithNamespace(value);
}


void ExampleWithARelation::addrefs(::ex42::ConstExampleWithNamespace component) {
  m_obj->m_refs->push_back(component);
  m_obj->data.refs_end++;
}

std::vector<::ex42::ConstExampleWithNamespace>::const_iterator ExampleWithARelation::refs_begin() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_begin);
  return ret_value;
}

std::vector<::ex42::ConstExampleWithNamespace>::const_iterator ExampleWithARelation::refs_end() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_end);
  return ret_value;
}

unsigned int ExampleWithARelation::refs_size() const {
  return m_obj->data.refs_end - m_obj->data.refs_begin;
}

::ex42::ConstExampleWithNamespace ExampleWithARelation::refs(unsigned int index) const {
  if (refs_size() > index) {
    return m_obj->m_refs->at(m_obj->data.refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<::ex42::ConstExampleWithNamespace> ExampleWithARelation::refs() const {
  auto begin = m_obj->m_refs->begin();
  std::advance(begin, m_obj->data.refs_begin);
  auto end = m_obj->m_refs->begin();
  std::advance(end, m_obj->data.refs_end);
  return {begin, end};
}






bool ExampleWithARelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithARelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithARelation::operator==(const ConstExampleWithARelation& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithARelation& value) {
  o << " id: " << value.id() << '\n';
  o << " number : " << value.number() << '\n';

  o << " ref : " << value.ref().id() << '\n';

  o << " refs : ";
  for (unsigned i = 0; i < value.refs_size(); ++i) {
    o << value.refs(i) << " ";
  }
  o << '\n';

  return o;
}

} // namespace ex42

