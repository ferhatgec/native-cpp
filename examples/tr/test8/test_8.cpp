#include "../../../include/nativecpp_tr.hpp"
#include <iostream>

sinif Test {
genel:
 sanal dondurulemez test(tam t1);
ozel:
 dizgi _test = "Integer: ";
};

sinif hi : genel Test {
genel:
 dondurulemez test(tam t1);	
};

dondurulemez Test::test(tam t1) {
  std::cout << _test << t1 << "\n";
}

dondurulemez hi::test(tam t1) {
  std::cout << "Tam sayi: " << t1 << "\n";
}


tam ana() {
  tam _sayi = 12;
  
  Test test;
  test.test(_sayi);

  hi _test;
  _test.test(_sayi);
}
