#include <iostream>
#include <Windows.h>
#include<string.h>

using namespace std;

struct Score
{
	int score;
	string name;
	double sum_money;
};


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Score myscore;
	Score* new_myscore = new Score();
	cout << "Введите номер счёта : ";
	cin >> myscore.score;
	cout << "Введите имя владельца: ";
	cin >> myscore.name;
	cout << "Введите баланс: ";
	cin >> myscore.sum_money;
	cout << "Введите новый баланс: ";
	cin >> new_myscore->sum_money;
	cout << "Ваш счёт: " << myscore.name << ", " << myscore.score << ", " << new_myscore->sum_money;
	
	return EXIT_SUCCESS;
}