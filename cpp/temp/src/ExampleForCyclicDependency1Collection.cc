// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleForCyclicDependency1Collection.h"


// standard includes
#include <stdexcept>
#include <iomanip>



ExampleForCyclicDependency1Collection::ExampleForCyclicDependency1Collection() :
  m_isValid(false), m_isReadFromFile(false), m_collectionID(0), m_entries(),
  m_rel_ref(new std::vector<::ConstExampleForCyclicDependency2>()),
  m_data(new ExampleForCyclicDependency1DataContainer()) {
  m_refCollections.push_back(new std::vector<podio::ObjectID>());
}

ExampleForCyclicDependency1Collection::~ExampleForCyclicDependency1Collection() {
  clear();
  if (m_data) delete m_data;
  for (auto& pointer : m_refCollections) { if (pointer) delete pointer; }
  if (m_rel_ref) delete m_rel_ref;
}

const ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::operator[](unsigned int index) const {
  return ExampleForCyclicDependency1(m_entries[index]);
}

const ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::at(unsigned int index) const {
  return ExampleForCyclicDependency1(m_entries.at(index));
}

ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::operator[](unsigned int index) {
  return ExampleForCyclicDependency1(m_entries[index]);
}

ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::at(unsigned int index) {
  return ExampleForCyclicDependency1(m_entries.at(index));
}

size_t ExampleForCyclicDependency1Collection::size() const {
  return m_entries.size();
}

ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create() {
  auto obj = m_entries.emplace_back(new ExampleForCyclicDependency1Obj());

  obj->id = {int(m_entries.size() - 1), m_collectionID};
  return ExampleForCyclicDependency1(obj);
}

void ExampleForCyclicDependency1Collection::clear() {
  m_data->clear();
  for (auto& pointer : m_refCollections) { pointer->clear(); }
  for (auto& item : (*m_rel_ref)) { item.unlink(); }
  m_rel_ref->clear();

  for (auto& obj : m_entries) { delete obj; }
  m_entries.clear();
}

void ExampleForCyclicDependency1Collection::prepareForWrite() {
  const auto size = m_entries.size();
  m_data->reserve(size);
  for (auto& obj : m_entries) { m_data->push_back(obj->data); }

  // if the collection has been read from a file the rest of the information is
  // already in the correct format and we have to skip it, since the temporary
  // buffers are invalid
  if (m_isReadFromFile) return;
  for (auto& pointer : m_refCollections) { pointer->clear(); }


  for (auto& obj : m_entries) {
    if (obj->m_ref) {
      m_refCollections[0]->emplace_back(obj->m_ref->getObjectID());
    } else {
       m_refCollections[0]->push_back({podio::ObjectID::invalid, podio::ObjectID::invalid});
    }
  }

}

void ExampleForCyclicDependency1Collection::prepareAfterRead() {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleForCyclicDependency1Obj({index, m_collectionID}, data);

    m_entries.emplace_back(obj);
    ++index;
  }

  // at this point we are done with the I/O buffer and can safely clear it to not
  // have a redundant (but now useless) copy of the data
  m_data->clear();
  m_isValid = true;
  m_isReadFromFile = true;
}

bool ExampleForCyclicDependency1Collection::setReferences(const podio::ICollectionProvider* collectionProvider) {
  for (unsigned int i = 0, size = m_entries.size(); i != size; ++i) {
    const auto id = (*m_refCollections[0])[i];
    if (id.index != podio::ObjectID::invalid) {
        CollectionBase* coll = nullptr;
      collectionProvider->get(id.collectionID, coll);
      ExampleForCyclicDependency2Collection* tmp_coll = static_cast<ExampleForCyclicDependency2Collection*>(coll);
      m_entries[i]->m_ref = new ConstExampleForCyclicDependency2((*tmp_coll)[id.index]);
    } else {
      m_entries[i]->m_ref = nullptr;
    }
  }


  return true; //TODO: check success
}

void ExampleForCyclicDependency1Collection::push_back(ConstExampleForCyclicDependency1 object) {
  const int size = m_entries.size();
  auto obj = object.m_obj;
  if (obj->id.index == podio::ObjectID::untracked) {
    obj->id = {size, m_collectionID};
    m_entries.push_back(obj);

  } else {
    throw std::invalid_argument("Object already in a collection. Cannot add it to a second collection");
  }
}

void ExampleForCyclicDependency1Collection::setBuffer(void* address) {
  if (m_data) delete m_data;
  m_data = static_cast<ExampleForCyclicDependency1DataContainer*>(address);
}

const ExampleForCyclicDependency1 ExampleForCyclicDependency1CollectionIterator::operator*() const {
  m_object.m_obj = (*m_collection)[m_index];
  return m_object;
}

const ExampleForCyclicDependency1* ExampleForCyclicDependency1CollectionIterator::operator->() const {
  m_object.m_obj = (*m_collection)[m_index];
  return &m_object;
}

const ExampleForCyclicDependency1CollectionIterator& ExampleForCyclicDependency1CollectionIterator::operator++() const {
  ++m_index;
  return *this;
}

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v) {
  const auto old_flags = o.flags();
  o << "          id:" << '\n';

  for (size_t i = 0; i < v.size(); ++i) {
    o << std::scientific << std::showpos << std::setw(12) << v[i].id() << " "
      << std::endl;


    o << "      ref : ";
    o << v[i].ref().id() << std::endl;


  }

  o.flags(old_flags);
  return o;
}


