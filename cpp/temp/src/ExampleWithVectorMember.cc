// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithVectorMember.h"
#include "ExampleWithVectorMemberConst.h"
#include "ExampleWithVectorMemberObj.h"
#include "ExampleWithVectorMemberData.h"
#include "ExampleWithVectorMemberCollection.h"


#include <ostream>



ExampleWithVectorMember::ExampleWithVectorMember() : m_obj(new ExampleWithVectorMemberObj()) {
  m_obj->acquire();
}


ExampleWithVectorMember::ExampleWithVectorMember(const ExampleWithVectorMember& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ExampleWithVectorMember& ExampleWithVectorMember::operator=(const ExampleWithVectorMember& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ExampleWithVectorMember::ExampleWithVectorMember( ExampleWithVectorMemberObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ExampleWithVectorMember ExampleWithVectorMember::clone() const {
  return {new ExampleWithVectorMemberObj(*m_obj)};
}

ExampleWithVectorMember::~ExampleWithVectorMember() {
  if (m_obj) m_obj->release();
}
ExampleWithVectorMember::operator ConstExampleWithVectorMember() const { return ConstExampleWithVectorMember(m_obj); }





void ExampleWithVectorMember::addcount(int component) {
  m_obj->m_count->push_back(component);
  m_obj->data.count_end++;
}

std::vector<int>::const_iterator ExampleWithVectorMember::count_begin() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_begin);
  return ret_value;
}

std::vector<int>::const_iterator ExampleWithVectorMember::count_end() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_end);
  return ret_value;
}

unsigned int ExampleWithVectorMember::count_size() const {
  return m_obj->data.count_end - m_obj->data.count_begin;
}

int ExampleWithVectorMember::count(unsigned int index) const {
  if (count_size() > index) {
    return m_obj->m_count->at(m_obj->data.count_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<int> ExampleWithVectorMember::count() const {
  auto begin = m_obj->m_count->begin();
  std::advance(begin, m_obj->data.count_begin);
  auto end = m_obj->m_count->begin();
  std::advance(end, m_obj->data.count_end);
  return {begin, end};
}






bool ExampleWithVectorMember::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithVectorMember::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ExampleWithVectorMember::operator==(const ConstExampleWithVectorMember& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ConstExampleWithVectorMember& value) {
  o << " id: " << value.id() << '\n';


  o << " count : ";
  for (unsigned i = 0; i < value.count_size(); ++i) {
    o << value.count(i) << " ";
  }
  o << '\n';

  return o;
}


