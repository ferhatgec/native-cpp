#include "../../../include/nativecpp_tr.hpp"
#include <iostream>

sinif Test {
genel:
 dondurulemez test(tam t1);
ozel:
 std::string _test = "Integer: ";
};

dondurulemez Test::test(tam t1) {
  std::cout << _test << t1 << "\n";
}

tam ana() {
  Test test;
  test.test(12);
}
