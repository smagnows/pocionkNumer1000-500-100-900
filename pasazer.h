#ifndef M
#define M

class Pasazer {
	private:
		std::string imie, nazwisko;
		std::string* miejsce;
		std::string temp;
	public:
		Pasazer();
		~Pasazer();
		void ustawDaneOsobowe();
		void podajDaneOsobowe();
};


#endif
