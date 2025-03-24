//  ООП. Абстракция и инкапсуляция. Задание 1. Адреса
#include <iostream>

// Объявление класса Address
class Address
{
	private:
		std::string town{};          // название города
		std::string street{};        // название улицы
		std::string home{};          // номер дома
		std::string flat{};          // номер квартиры

	public:
	
		// Конструктор с параметрами
		Address(std::string setTown, std::string setStreet, std::string setHome, std::string setFlat) : town{ setTown }, street{ setStreet }, home{ setHome }, flat{ setFlat }
		{};
		// Конструктор без параметров
		Address() {};

		// Метод на вывод строки данных
		std::string get_output_address()
		{
			return town + ", " + street + ", " + home + ", " + flat;
		}
};

int main()
{
	return EXIT_SUCCESS;
}