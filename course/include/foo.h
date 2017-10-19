#ifndef FOO_H
#define	FOO_H

#include <string>

namespace cppcourse {

class Foo {
 public:
  explicit Foo(int value) : value_(value) {}
  int value() const { return value_; }
  std::string string() const;

 private:
  const int value_{};
};

}  // cppcourse

#endif