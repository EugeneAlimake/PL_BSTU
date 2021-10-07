#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
typedef unsigned int codcountry;
typedef unsigned int codoeratora;
typedef unsigned int codnumber;
void Сountry();
void oper();
struct number {
	codcountry n;
	codoeratora nnn;
	codnumber nnnn;
	
};
void Сountry(number *nu) {
	if(nu[0].n==nu[1].n)
	{
		cout << "Номера находятся в одной стране " << endl;
	}
	else{ cout << "Номера находятся в одной стране" << endl; }
}
void oper(number* nu) {
	if (nu[0].nnn == nu[1].nnn)
	{
		cout << "У номеров одинаковый оператор " << endl;
	}
	else { cout << "У номеров разный оператор" << endl; }
}

int main()
{
	setlocale(LC_ALL, "rus");
	number number1 = { 7,752,19805200 };
	number number2 = { 375 ,752,19765584 };
	number nu[2];
	nu[0] = number1;
	nu[1] = number2;
	Сountry(nu);
	oper(nu);
	
}
