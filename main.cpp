#include "main.h"


int main() {
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "F1 = " << f1 << std::endl << std::endl;
	std::cout << "F2 = " << f2 << std::endl << std::endl << std::endl;

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';

	system("pause > nul");

	return 0;
}