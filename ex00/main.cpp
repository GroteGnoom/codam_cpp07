
#include "swap.hpp"
#include "min.hpp"
#include "max.hpp"
#include <iostream>

int main() {
	int e = 3;
	int f = 4;
	std::cout << "e: " << e << "\nf: " << f << std::endl;
	swap(e,f);
	std::cout << "e: " << e << "\ndf " << f << std::endl;
	std::cout << "min: " << min(e,f) << std::endl;
	std::cout << "max: " << max(e,f) << std::endl;
	std::cout << "-------------end of my tests-----------" << std::endl;


	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return 0;
}
