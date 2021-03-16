// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef SRC_NamespaceStruct_H
#define SRC_NamespaceStruct_H

#include <ostream>

namespace ex2 {


class NamespaceStruct {
public:
  int x;
  int y;


};

inline std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStruct& value) {
  o << value.x << " ";
  o << value.y << " ";

  return o;
}

} // namespace ex2



#endif
