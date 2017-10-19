#include "foo.h"

namespace cppcourse {

std::string Foo::string() const { return std::to_string(value_); }

}