#include <iostream>

namespace parent_namespace {
  namespace nested_namespace {
    void func() {
      std::cout << "Using Nested Namespace" << std::endl;
    }
  }
}

using namespace parent_namespace::nested_namespace;

int main() {
  func();
  return 0;
}
