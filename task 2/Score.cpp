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
void newSum_money (Score &myscore, double newMoney){
	myscore.sum_money= newMoney;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Score myscore;
	
	cout << "Введите номер счёта : ";
	cin >> myscore.score;

	cout << "Введите имя владельца: ";
	cin >> myscore.name;
	
	cout << "Введите баланс: ";
	cin >> myscore.sum_money;

	double newMoney;
	cout << "Введите новый баланс: ";
	cin >> newMoney;

	newSum_money(myscore,newMoney);

	cout << "Ваш счёт: " << myscore.name << ", " << myscore.score << ", " << myscore.sum_money;
	
	return EXIT_SUCCESS;
}