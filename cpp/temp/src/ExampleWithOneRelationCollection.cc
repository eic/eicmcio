// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleWithOneRelationCollection.h"


// standard includes
#include <stdexcept>
#include <iomanip>



ExampleWithOneRelationCollection::ExampleWithOneRelationCollection() :
  m_isValid(false), m_isReadFromFile(false), m_collectionID(0), m_entries(),
  m_rel_cluster(new std::vector<::ConstExampleCluster>()),
  m_data(new ExampleWithOneRelationDataContainer()) {
  m_refCollections.push_back(new std::vector<podio::ObjectID>());
}

ExampleWithOneRelationCollection::~ExampleWithOneRelationCollection() {
  clear();
  if (m_data) delete m_data;
  for (auto& pointer : m_refCollections) { if (pointer) delete pointer; }
  if (m_rel_cluster) delete m_rel_cluster;
}

const ExampleWithOneRelation ExampleWithOneRelationCollection::operator[](unsigned int index) const {
  return ExampleWithOneRelation(m_entries[index]);
}

const ExampleWithOneRelation ExampleWithOneRelationCollection::at(unsigned int index) const {
  return ExampleWithOneRelation(m_entries.at(index));
}

ExampleWithOneRelation ExampleWithOneRelationCollection::operator[](unsigned int index) {
  return ExampleWithOneRelation(m_entries[index]);
}

ExampleWithOneRelation ExampleWithOneRelationCollection::at(unsigned int index) {
  return ExampleWithOneRelation(m_entries.at(index));
}

size_t ExampleWithOneRelationCollection::size() const {
  return m_entries.size();
}

ExampleWithOneRelation ExampleWithOneRelationCollection::create() {
  auto obj = m_entries.emplace_back(new ExampleWithOneRelationObj());

  obj->id = {int(m_entries.size() - 1), m_collectionID};
  return ExampleWithOneRelation(obj);
}

void ExampleWithOneRelationCollection::clear() {
  m_data->clear();
  for (auto& pointer : m_refCollections) { pointer->clear(); }
  for (auto& item : (*m_rel_cluster)) { item.unlink(); }
  m_rel_cluster->clear();

  for (auto& obj : m_entries) { delete obj; }
  m_entries.clear();
}

void ExampleWithOneRelationCollection::prepareForWrite() {
  const auto size = m_entries.size();
  m_data->reserve(size);
  for (auto& obj : m_entries) { m_data->push_back(obj->data); }

  // if the collection has been read from a file the rest of the information is
  // already in the correct format and we have to skip it, since the temporary
  // buffers are invalid
  if (m_isReadFromFile) return;
  for (auto& pointer : m_refCollections) { pointer->clear(); }


  for (auto& obj : m_entries) {
    if (obj->m_cluster) {
      m_refCollections[0]->emplace_back(obj->m_cluster->getObjectID());
    } else {
       m_refCollections[0]->push_back({podio::ObjectID::invalid, podio::ObjectID::invalid});
    }
  }

}

void ExampleWithOneRelationCollection::prepareAfterRead() {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleWithOneRelationObj({index, m_collectionID}, data);

    m_entries.emplace_back(obj);
    ++index;
  }

  // at this point we are done with the I/O buffer and can safely clear it to not
  // have a redundant (but now useless) copy of the data
  m_data->clear();
  m_isValid = true;
  m_isReadFromFile = true;
}

bool ExampleWithOneRelationCollection::setReferences(const podio::ICollectionProvider* collectionProvider) {
  for (unsigned int i = 0, size = m_entries.size(); i != size; ++i) {
    const auto id = (*m_refCollections[0])[i];
    if (id.index != podio::ObjectID::invalid) {
        CollectionBase* coll = nullptr;
      collectionProvider->get(id.collectionID, coll);
      ExampleClusterCollection* tmp_coll = static_cast<ExampleClusterCollection*>(coll);
      m_entries[i]->m_cluster = new ConstExampleCluster((*tmp_coll)[id.index]);
    } else {
      m_entries[i]->m_cluster = nullptr;
    }
  }


  return true; //TODO: check success
}

void ExampleWithOneRelationCollection::push_back(ConstExampleWithOneRelation object) {
  const int size = m_entries.size();
  auto obj = object.m_obj;
  if (obj->id.index == podio::ObjectID::untracked) {
    obj->id = {size, m_collectionID};
    m_entries.push_back(obj);

  } else {
    throw std::invalid_argument("Object already in a collection. Cannot add it to a second collection");
  }
}

void ExampleWithOneRelationCollection::setBuffer(void* address) {
  if (m_data) delete m_data;
  m_data = static_cast<ExampleWithOneRelationDataContainer*>(address);
}

const ExampleWithOneRelation ExampleWithOneRelationCollectionIterator::operator*() const {
  m_object.m_obj = (*m_collection)[m_index];
  return m_object;
}

const ExampleWithOneRelation* ExampleWithOneRelationCollectionIterator::operator->() const {
  m_object.m_obj = (*m_collection)[m_index];
  return &m_object;
}

const ExampleWithOneRelationCollectionIterator& ExampleWithOneRelationCollectionIterator::operator++() const {
  ++m_index;
  return *this;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelationCollection& v) {
  const auto old_flags = o.flags();
  o << "          id:" << '\n';

  for (size_t i = 0; i < v.size(); ++i) {
    o << std::scientific << std::showpos << std::setw(12) << v[i].id() << " "
      << std::endl;


    o << "      cluster : ";
    o << v[i].cluster().id() << std::endl;


  }

  o.flags(old_flags);
  return o;
}


