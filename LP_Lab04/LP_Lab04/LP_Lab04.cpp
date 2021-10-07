// LP_Lab04.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;
int main()
{//: X= 9 + 13, Y= 10 + 13, Z= 11 + 13, S= 1.0 + 13.
//4 задание:
	int lb = sizeof(bool);//1байт-логический
	int lc = sizeof(char);//1-символьный
	//5 задание:
	int ld = sizeof(float);//4-вещественный
	//6 задание:
	int lwc = sizeof(wchar_t);//2-расширенный символьный
	//7 задание:
	int lshort = sizeof(short);//2-целый
	int lushort = sizeof(unsigned short);//2-целый(беззнаковый)
	int lint = sizeof(int);//4-целый
	int llong = sizeof(long);//8
	//9 задание:0
	unsigned short iushort = USHRT_MAX;//мин=0 //ffff
	unsigned short iuint = UINT_MAX;//мин=0//ffffffff
	int lilong = sizeof(unsigned long);
	unsigned long iulong = ULONG_MAX;//мин=0//ffffffff
	//4 задание
	bool b1 = false;//00
	bool b2 = true;//01
	//5 задание:
	char P[] = "IJFD123";//f6h
	int k1 = sizeof(char);
	//6 задание:
	wchar_t wc[] = { L'J',L'L',L'V',L'W',L's',L'w',L'q' };//4b
	int h = sizeof(wc);
	//7 задание:
	short ishort1 = 0x1234;//16
	short ishort2 = -22;//(-16)ffea
	int a = sizeof(ishort1);
	//8 задание:
	short ishortMAX = SHRT_MAX;//32767-7fff
	short ishortMIN = SHRT_MIN;//-32767
	//10 задание:
	int iint1[] = { 1,2,3,4 };//17 
	int po = sizeof(iint1);
	int iint2 = -23;//-17
	int iintMAX = INT_MAX;//7fffffff 
	int iintMIN = INT_MIN;
	//13 задание:
	long ilong1 = 24;//18
	long ilong2 = -24;//-18
	long ilongMAX = LONG_MAX;//7fffffff
	long ilongMIN = LONG_MIN;
	//17 Задание:
	float f1[] = { 1,2,234 };//E
	int i1 = 25;
	double d1 = 123.45;
	char c1 = 'A';
	wchar_t w1 = 'J';
	int* pi1 = &i1;
	double* pd1 = &d1;
	char* pc1 = &c1;
	wchar_t* pw1 = &w1;
	cout << pi1 << endl;
	cout << pd1 << endl;
	cout << pc1 << endl;
	cout << pw1 << endl;
	pi1 = pi1 + 3;
	pd1 = pd1 + 4;
	pc1 = pc1 + 5;
	pw1 = pw1 + 6;
	cout << pi1 << endl;
	cout << pd1<<endl;
	cout << pc1 << endl;
	cout << pw1 << endl;
 double dob = 9;
 double* ukazzatel5 = &dob;//2240
 ukazzatel5 += 3;
 double& sialka5 = dob;

 void* linker;
 linker = &b1;
 linker = &dob;
 system("pause");
 return 0;

}


