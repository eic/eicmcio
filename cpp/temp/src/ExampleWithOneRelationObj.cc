// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "ExampleWithOneRelationObj.h"

ExampleWithOneRelationObj::ExampleWithOneRelationObj() :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(),
  m_cluster(nullptr)
{  }

ExampleWithOneRelationObj::ExampleWithOneRelationObj(const podio::ObjectID id, ExampleWithOneRelationData data) :
  ObjBase{id, 0}, data(data)
{  }

ExampleWithOneRelationObj::ExampleWithOneRelationObj(const ExampleWithOneRelationObj& other) :
  ObjBase{{podio::ObjectID::untracked, podio::ObjectID::untracked}, 0},
  data(other.data),
  m_cluster(nullptr)
{
  if (other.m_cluster) {
    m_cluster = new ConstExampleCluster(*(other.m_cluster));
  }
}

ExampleWithOneRelationObj::~ExampleWithOneRelationObj() {

  if (m_cluster) delete m_cluster;
}

