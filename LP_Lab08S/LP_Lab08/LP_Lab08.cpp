#include <iostream>
#pragma comment(lib, "C:\\Users\\ЖЕНЯ\\Desktop\\яп\\8 лаба\\LP_Lab08S\\Debug\\LP_Lab08L.lib")
#include "../LP_Lab08L/Dictionary.h"

using namespace std;
using namespace Dictionary;

int main() {
	setlocale(LC_ALL, "Ru");
	try {
		Instance d1 = Create((char*)"Преподаватели", 5);
		Entry	e1 = { 1,"Гладкий" }, e2 = { 2,"Веялкин" }, e3 = { 3,"Смелов" }, e4 = { 4, "Урбанович" }, e5 = { 5, "Пацей" };
		AddEntry(d1, e1);
		AddEntry(d1, e2);
		AddEntry(d1, e3);
		AddEntry(d1, e4);
		AddEntry(d1, e5);
		Print(d1);

		Instance d2 = Create((char*)"Студенты", 5);
		Entry s1 = { 1,"Иванов" }, s2 = { 2,"Петров" }, s3 = { 3,"Сидоров" };
		AddEntry(d2, s1);
		AddEntry(d2, s2);
		AddEntry(d2, s3);
		Print(d2);
	}
	catch (char* e) {
		cout << e << endl;
	}
	return 0;
}