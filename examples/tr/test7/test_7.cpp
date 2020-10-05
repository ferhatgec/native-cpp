#include "../../../include/nativecpp_tr.hpp"
#include <iostream>

sinif Test {
 public:
 dondurulemez test(tam t1);
};

dondurulemez Test::test(tam t1) {
  std::cout << t1 << "\n";
}

tam ana() {
  Test test;
  test.test(12);
}
