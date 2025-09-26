#include <iostream>
#include <Windows.h>
#include<string.h>
using namespace std;
struct City
{
	string city;
	string street;
	int home_number;
	int flat_number;
	int index;

};
void printCity(City& Home)
{
	cout << "Город: " << Home.city << endl;
	cout << "Улица: " << Home.street << endl;
	cout << "Номер дома: " << Home.home_number << endl;
	cout << "Номер квартиры: " << Home.flat_number << endl;
	cout << "Индекс: " << Home.index << endl;
	cout << endl;
}
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	City Home1 = { "Москва", "Арбат", 12, 8, 123456 };
	City Home2 = { "Ижевск", "Пушкина", 59, 143, 953769 };

	printCity(Home1);
	printCity(Home2);
	

	return EXIT_SUCCESS;
}
