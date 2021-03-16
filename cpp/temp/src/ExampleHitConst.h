// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_ConstExampleHit_H
#define SRC_ConstExampleHit_H

#include "ExampleHitObj.h"

#include "podio/ObjectID.h"





class ExampleHit;
class ExampleHitCollection;
class ExampleHitCollectionIterator;

/** @class ConstExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class ConstExampleHit {

  friend ExampleHit;
  friend ExampleHitCollection;
  friend ExampleHitCollectionIterator;

public:
  /// default constructor
  ConstExampleHit();
  ConstExampleHit(unsigned long long cellID, double x, double y, double z, double energy);

  /// constructor from existing ExampleHitObj
  ConstExampleHit(ExampleHitObj* obj);

  /// copy constructor
  ConstExampleHit(const ConstExampleHit& other);

  /// copy-assignment operator
  ConstExampleHit& operator=(const ConstExampleHit& other);

  /// support cloning (deep-copy)
  ConstExampleHit clone() const;

  /// destructor
  ~ConstExampleHit();


public:

  /// Access the cellID
  const unsigned long long& cellID() const;

  /// Access the x-coordinate
  const double& x() const;

  /// Access the y-coordinate
  const double& y() const;

  /// Access the z-coordinate
  const double& z() const;

  /// Access the measured energy deposit
  const double& energy() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = nullptr; }

  bool operator==(const ConstExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleHit& other) const;

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ConstExampleHit& other) const { return m_obj < other.m_obj; }

  unsigned int id() const { return getObjectID().collectionID * 10000000 + getObjectID().index; }

  const podio::ObjectID getObjectID() const;

private:
  ExampleHitObj* m_obj;
};



#endif
