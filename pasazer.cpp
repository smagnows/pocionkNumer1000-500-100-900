#define DEBUG_
#include <iostream>
#include "pasazer.h"

Pasazer::Pasazer()
{
	#ifdef DEBUG_
	puts("Konstruktor\tPasazer");
	#endif
}
Pasazer::~Pasazer()
{
	#ifdef DEBUG_
	puts(" Destruktor\tPasazer");
	#endif
}

void Pasazer::ustawDaneOsobowe()
{
	std::cout << "Podaj imie pasazera:\t\t";
	std::cin >> imie;
	std::cout << "Podaj nazwisko pasazera:\t";
	std::cin >> nazwisko;
//	std::cout << "Podaj mi filizanke kawy\n";
	std::getline(std::cin, temp);
}
void Pasazer::podajDaneOsobowe()
{
	std::cout << "Imie pasazera = " << imie << '\n';
	std::cout << "Nazwisko pasazera = " << nazwisko << '\n';
	std::cout << "temp:"<<temp<<std::endl;
}

