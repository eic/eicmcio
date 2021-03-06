// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "ExampleWithVectorMember.h"
#include "ExampleWithVectorMemberConst.h"
#include "ExampleWithVectorMemberObj.h"
#include "ExampleWithVectorMemberData.h"
#include "ExampleWithVectorMemberCollection.h"


#include <ostream>



ConstExampleWithVectorMember::ConstExampleWithVectorMember() : m_obj(new ExampleWithVectorMemberObj()) {
  m_obj->acquire();
}


ConstExampleWithVectorMember::ConstExampleWithVectorMember(const ConstExampleWithVectorMember& other) : m_obj(other.m_obj) {
  m_obj->acquire();
}

ConstExampleWithVectorMember& ConstExampleWithVectorMember::operator=(const ConstExampleWithVectorMember& other) {
  if (m_obj) m_obj->release();
  m_obj = other.m_obj;
  return *this;
}

ConstExampleWithVectorMember::ConstExampleWithVectorMember( ExampleWithVectorMemberObj* obj) : m_obj(obj) {
  if (m_obj) m_obj->acquire();
}

ConstExampleWithVectorMember ConstExampleWithVectorMember::clone() const {
  return {new ExampleWithVectorMemberObj(*m_obj)};
}

ConstExampleWithVectorMember::~ConstExampleWithVectorMember() {
  if (m_obj) m_obj->release();
}



std::vector<int>::const_iterator ConstExampleWithVectorMember::count_begin() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_begin);
  return ret_value;
}

std::vector<int>::const_iterator ConstExampleWithVectorMember::count_end() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_end);
  return ret_value;
}

unsigned int ConstExampleWithVectorMember::count_size() const {
  return m_obj->data.count_end - m_obj->data.count_begin;
}

int ConstExampleWithVectorMember::count(unsigned int index) const {
  if (count_size() > index) {
    return m_obj->m_count->at(m_obj->data.count_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<int> ConstExampleWithVectorMember::count() const {
  auto begin = m_obj->m_count->begin();
  std::advance(begin, m_obj->data.count_begin);
  auto end = m_obj->m_count->begin();
  std::advance(end, m_obj->data.count_end);
  return {begin, end};
}





bool ConstExampleWithVectorMember::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ConstExampleWithVectorMember::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{podio::ObjectID::invalid, podio::ObjectID::invalid};
}

bool ConstExampleWithVectorMember::operator==(const ExampleWithVectorMember& other) const {
  return m_obj == other.m_obj;
}


