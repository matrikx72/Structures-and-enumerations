#include <iostream>
#include <Windows.h>

enum class mouth 
{
	Январь = 1, 
	Февраль, 
	Март, 
	Апрель, 
	Май, 
	Июнь, 
	Июль, 
	Август, 
	Сентябрь, 
	Октябрь, 
	Ноябрь, 
	Декабрь
};

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int number;
	while (true) {
		std::cout << "Введите номер месяца: ";
		std::cin >> number;

		if (number == 0) {
			std::cout << "До свидания!";
			break;
		}

		if (number >= 1 && number <= 12){
			mouth num = static_cast<mouth>(number);
			switch (num){
			case mouth::Январь: std::cout << "Январь" << std::endl;
				break;
			case mouth::Февраль:std::cout << "Февраль" << std::endl;
				break;
			case mouth::Март:std::cout << "Март" << std::endl;
				break;
			case mouth::Апрель:std::cout << "Апрель" << std::endl;
				break;
			case mouth::Май:std::cout << "Май" << std::endl;
				break;
			case mouth::Июнь:std::cout << "Июнь" << std::endl;
				break;
			case mouth::Июль:std::cout << "Июль" << std::endl;
				break;
			case mouth::Август:std::cout << "Август" << std::endl;
				break;
			case mouth::Сентябрь:std::cout << "Сентябрь" << std::endl;
				break;
			case mouth::Октябрь:std::cout << "Октябрь" << std::endl;
				break;
			case mouth::Ноябрь:std::cout << "Ноябрь" << std::endl;
				break;
			case mouth::Декабрь:std::cout << "Декабрь" << std::endl;
				break;
			default:
				break;
			}
		}

		else {
			std::cout << "Неправильный номер!" << std::endl;
		}
	}

	return 0;
}