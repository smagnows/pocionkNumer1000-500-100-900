
#include <iostream>
#include "pomocnicze.h"

int main(int argc, char* argv[])
{

	Pasazer a, b;
	a.ustawDaneOsobowe();
	b.ustawDaneOsobowe();
	std::string ej, bi;
	ej=a.podajDaneOsobowe();
	bi=b.podajDaneOsobowe();
	std::cout << "dane osobowe a:\n" << ej << "\nDane osobowe b:\n" << bi << '\n';

}
