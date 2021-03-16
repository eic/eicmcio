// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_NamespaceInNamespaceStruct_H
#define SRC_NamespaceInNamespaceStruct_H

#include <ostream>

namespace ex2 {


class NamespaceInNamespaceStruct {
public:
  ::ex2::NamespaceStruct data;


};

inline std::ostream& operator<<(std::ostream& o, const ex2::NamespaceInNamespaceStruct& value) {
  o << value.data << " ";

  return o;
}

} // namespace ex2



#endif
