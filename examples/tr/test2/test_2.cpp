#include "../../../include/nativecpp_tr.hpp"
#include <iostream>

dondurulemez ekle(tam t1, tam t2, boole _test_) {
	eger((t1 + t2) % 2 == 0)
		_test_ = yanlis;
	degilse
		std::cout << t1 + t2 << "\n";
}

tam ana() {
	boole test = dogru;
	ekle(1, 3, test);
	
	eger(test == dogru)
		std::cout << "..";
	degilse
		std::cout << ".....";

	std::cout << "\n";
}
