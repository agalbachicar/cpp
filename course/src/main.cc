#include <iostream>

#include "foo.h"

int main(int argc, char **argv) {
  (void) argc;
  (void) argv;

  std::cout << "Hello world." << std::endl;

  const cppcourse::Foo f(1);
  std::cout << "Foo: " << f.string() << std::endl;

  return 0;
}