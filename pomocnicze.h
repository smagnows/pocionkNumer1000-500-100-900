#ifndef M
#define M

class Pasazer
{
	private:
		std::string imie, nazwisko;
		std::string* miejsce;
		std::string temp="LOLO_iTakToNieZaDziauaXD";
	public:
		Pasazer();
		~Pasazer();
		void ustawDaneOsobowe();
		void wypiszDaneOsobowe();
		std::string podajDaneOsobowe();
		void przyporzadkujMiejsce();
};
enum producent_pociagu {Pesa, Alstom, KolejeMazowieckie, PkpIntercity};
class Pociag
{
	private:
		producent_pociagu ten;
		int iloscMiejsc;
		bool toaletaWolna=1;
	public:
		Pociag();
		~Pociag();
		void dodajJeden();
};

#endif
//int iloscMiejsc= (ten==Pesa?76:(ten==Alstom?152:(ten==KolejeMazowieckie?46:180)));
