#include <cstdlib>
#include <iostream>
using namespace std;
//EvgeniaNikolaeva2002
//ЕвгенияНиколаева2002
//Евгения2002Nikolaeva
//Windows-1251:
//45 76 67 65 6E 69 61(Evgenia) 4E 69 6B 6F 6C 61 65 76 61(Nikolaeva) 32 30 30 32(2002)
//0415 0432 0433 0435 043D 0438 044F(Евгения) 041D 0438 043A 043E 043B 0430 435 0432 0430(Николаева) 32 30 30 32(2002)
//0415 0432 0433 0435 043D 0438 044F(Евгения)32 30 30 32(2002)4E 69 6B 6F 6C 61 65 76 61(Nikolaeva)
//UTF-8:
//d095 dob2 d0b3 d0b5 d0bd d0b8 d18f(Евгения) d09d d0b8 d0ba d0be d0bb d0b0 d0b5 d0b2 d0b0(Николаева) 32 30 30 32(2002)
//45 76 67 65 6е 69 61(Evgenia) 4е 69 6b 6f 6c 61 65 76 61(Nikolaeva) 32 30 30 32(2002)
//d095 dob2 d0b3 d0b5 d0bd d0b8 d18f(Евгения)32 30 30 32(2002)4е 69 6b 6f 6c 61 65 76 61(Nikolaeva)
//UTF-16
//0415 0432 0433 0435 043D 0438 044F(Евгения) 041D 0438 043A 043E 043B 0430 0435 0432 0430(Николаева) 32 30 30 32(2002)
//0045 0076 0067 0065 006E 0069 0061(Evgenia) 004E 0069 006B 006F 006C 0061 0065 0076 0061(Nikolaeva) 0032 0030 0030 0032(2002)
//char rf[] = "EvgeniaNikolaeva2002";
//char lf[] = "ЕвгенияНиколаева2002";
//char kf[] = "Евгения2002Nikolaeva";
//
//wchar_t Lrf[] = L"EvgeniaNikolaeva2002";
//wchar_t Llf[] = L"ЕвгенияНиколаева2002";
//wchar_t Lkf[] = L"Евгения2002Nikolaeva";

char* UpperW1251(char* destination, char* source) {
	for (int i = 0; i <= strlen(source); i++)
	{
		if (source[i] >= 'a' && source[i] <= 'z')
		{
			destination[i] = source[i] - 32;
		}
		else if (source[i] >= 'а' && source[i] <= 'я')
		{
			destination[i] = source[i] - 32;
		}
		else if (source[i] == 'ё')
		{
			destination[i] = 'Ё';
		}
		else
			destination[i] = source[i];
	}
	return destination;
}
int main()
{	setlocale(LC_ALL, "Russian");
	char source[] = "12345sdfghjlйцгшщё";
	char destination[] = "1234567890123456789";
	UpperW1251(destination, source);
	cout << destination << endl;
	system("pause");
	return 0;
}

