// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleWithComponentCollection.h"


// standard includes
#include <stdexcept>
#include <iomanip>



ExampleWithComponentCollection::ExampleWithComponentCollection() :
  m_isValid(false), m_isReadFromFile(false), m_collectionID(0), m_entries(),
  m_data(new ExampleWithComponentDataContainer()) {
}

ExampleWithComponentCollection::~ExampleWithComponentCollection() {
  clear();
  if (m_data) delete m_data;
}

const ExampleWithComponent ExampleWithComponentCollection::operator[](unsigned int index) const {
  return ExampleWithComponent(m_entries[index]);
}

const ExampleWithComponent ExampleWithComponentCollection::at(unsigned int index) const {
  return ExampleWithComponent(m_entries.at(index));
}

ExampleWithComponent ExampleWithComponentCollection::operator[](unsigned int index) {
  return ExampleWithComponent(m_entries[index]);
}

ExampleWithComponent ExampleWithComponentCollection::at(unsigned int index) {
  return ExampleWithComponent(m_entries.at(index));
}

size_t ExampleWithComponentCollection::size() const {
  return m_entries.size();
}

ExampleWithComponent ExampleWithComponentCollection::create() {
  auto obj = m_entries.emplace_back(new ExampleWithComponentObj());

  obj->id = {int(m_entries.size() - 1), m_collectionID};
  return ExampleWithComponent(obj);
}

void ExampleWithComponentCollection::clear() {
  m_data->clear();
  for (auto& obj : m_entries) { delete obj; }
  m_entries.clear();
}

void ExampleWithComponentCollection::prepareForWrite() {
  const auto size = m_entries.size();
  m_data->reserve(size);
  for (auto& obj : m_entries) { m_data->push_back(obj->data); }

  // if the collection has been read from a file the rest of the information is
  // already in the correct format and we have to skip it, since the temporary
  // buffers are invalid
  if (m_isReadFromFile) return;
  for (auto& pointer : m_refCollections) { pointer->clear(); }


}

void ExampleWithComponentCollection::prepareAfterRead() {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleWithComponentObj({index, m_collectionID}, data);

    m_entries.emplace_back(obj);
    ++index;
  }

  // at this point we are done with the I/O buffer and can safely clear it to not
  // have a redundant (but now useless) copy of the data
  m_data->clear();
  m_isValid = true;
  m_isReadFromFile = true;
}

bool ExampleWithComponentCollection::setReferences(const podio::ICollectionProvider* collectionProvider) {

  return true; //TODO: check success
}

void ExampleWithComponentCollection::push_back(ConstExampleWithComponent object) {
  const int size = m_entries.size();
  auto obj = object.m_obj;
  if (obj->id.index == podio::ObjectID::untracked) {
    obj->id = {size, m_collectionID};
    m_entries.push_back(obj);

  } else {
    throw std::invalid_argument("Object already in a collection. Cannot add it to a second collection");
  }
}

void ExampleWithComponentCollection::setBuffer(void* address) {
  if (m_data) delete m_data;
  m_data = static_cast<ExampleWithComponentDataContainer*>(address);
}

const ExampleWithComponent ExampleWithComponentCollectionIterator::operator*() const {
  m_object.m_obj = (*m_collection)[m_index];
  return m_object;
}

const ExampleWithComponent* ExampleWithComponentCollectionIterator::operator->() const {
  m_object.m_obj = (*m_collection)[m_index];
  return &m_object;
}

const ExampleWithComponentCollectionIterator& ExampleWithComponentCollectionIterator::operator++() const {
  ++m_index;
  return *this;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithComponentCollection& v) {
  const auto old_flags = o.flags();
  o << "          id:component [ data]:" << '\n';

  for (size_t i = 0; i < v.size(); ++i) {
    o << std::scientific << std::showpos << std::setw(12) << v[i].id() << " "
      << std::setw(12) << v[i].component() << " "
      << std::endl;




  }

  o.flags(old_flags);
  return o;
}


