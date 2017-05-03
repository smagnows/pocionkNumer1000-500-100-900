#define DEBUG_
#include <iostream>
#include "pomocnicze.h"

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
void Pasazer::wypiszDaneOsobowe()
{
	std::cout << "Imie pasazera = " << imie << '\n';
	std::cout << "Nazwisko pasazera = " << nazwisko << '\n';
	std::cout << "temp:"<<temp<<std::endl;
}

std::string Pasazer::podajDaneOsobowe()
{
	return imie+" "+nazwisko;
}

void Pasazer::przyporzadkujMiejsce()
{
	//czekamy_na_cos.
}


Pociag::Pociag()
{
	#ifdef DEBUG_
	puts("Konstruktor\tPociag");
	#endif
}
Pociag::~Pociag()
{
	#ifdef DEBUG_
	puts(" Destruktor\tPociag");
	#endif
}

void Pociag::dodajJeden()
{
	//puts("
}
