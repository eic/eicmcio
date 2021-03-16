// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_NotSoSimpleStruct_H
#define SRC_NotSoSimpleStruct_H

#include <ostream>



class NotSoSimpleStruct {
public:
  SimpleStruct data; ///< component members can have descriptions


};

inline std::ostream& operator<<(std::ostream& o, const NotSoSimpleStruct& value) {
  o << value.data << " ";

  return o;
}




#endif
