// Пользователь 	вводит с клавиатуры время начала и 	время завершения телефонного разговора(часы, минуты и секунды).Посчитать 	стоимость разговора, если стоимость 	минуты – 30 копеек.
#include <iostream>
#include <Windows.h>;
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	cout << "\n\t Введите время начала разговора в формате чч:мм:сс\t:";
	int Chasi1;
	cin >> Chasi1;
	cout << "\t\t\t\t\t\t\t\t:";
	int Minuti1;
	cin >> Minuti1;
	cout << "\t\t\t\t\t\t\t\t:";
	int Sekyndi1;
	cin >> Sekyndi1;
	cout << "\t\t\t\t\t\t\t\t";
	cout << "\n\t Введите время окончания разговора в формате чч:мм:сс\t:";
	int Chasi2;
	cin >> Chasi2;
	cout << "\t\t\t\t\t\t\t\t:";
	int Minuti2;
	cin >> Minuti2;
	cout << "\t\t\t\t\t\t\t\t:";
	int Sekyndi2;
	cin >> Sekyndi2;
	cout << "\t\t\t\t\t\t\t\t";
	int Total_seconds1;
	Total_seconds1 = Chasi1 * 60 * 60 + Minuti1 * 60 + Sekyndi1;
	int Total_seconds2;
	Total_seconds2 = Chasi2 * 60 * 60 + Minuti2 * 60 + Sekyndi2;
	float Time_talk;
	Time_talk = Total_seconds2 - Total_seconds1;
	float Stoimost_zvonka;
	Stoimost_zvonka = Time_talk / 60 * 0.3;
	cout << "\n\n\tСтоимость одной минуты равна 30 копеек или 0,3 грн.";
	cout << "\n\n\tТогда стоимость звонка будет равна: " << Stoimost_zvonka << " грн.\n\n";
}
