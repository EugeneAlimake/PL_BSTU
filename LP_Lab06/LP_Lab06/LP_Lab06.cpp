#include <iostream>
#include <string>
#include <algorithm>
#include <fstream>
using namespace std;
typedef unsigned int day;
typedef unsigned int month;
typedef unsigned int year;
struct Date {
	day dd;
	month mm;
	year yyyy;
	bool operator ==(const Date& other)
	{
		if (this->dd == other.dd && this->mm == other.mm && this->yyyy==other.yyyy) {
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator >(const Date& other)
	{
		if (this->yyyy > other.yyyy) {
			return true;
		}
		if (this->yyyy == other.yyyy && this->mm > other.mm && this->dd > other.dd)
		{
			return true;
		}
		if (this->yyyy == other.yyyy && this->mm == other.mm && this->dd > other.dd)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	bool operator <(const Date& other)
	{
		if (this->yyyy< other.yyyy ) {
			return true;
		}
		if(this->yyyy == other.yyyy && this->mm < other.mm && this->dd < other.dd)
		{
			return true;
		}
		if (this->yyyy == other.yyyy && this->mm == other.mm && this->dd < other.dd)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};


int main()
{
	setlocale(LC_ALL, "rus");
	Date date1 = {7,1,1980 };
	Date date2 = { 7,2,1976 };
	Date date3 = { 7,1,1980 };
	if (date1 < date2) cout << "истина" << endl;
	else cout << "ложь" << endl;
	/*if (date1 > date2) cout << "истина" << endl;
	else cout << "ложь" << endl;*/
	if (date1 == date2) cout << "истина" << endl;
	else cout << "ложь" << endl;
	if (date1 == date3) cout << "истина" << endl;
	else cout << "ложь" << endl;
	return 0;
}

