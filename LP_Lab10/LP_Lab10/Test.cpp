////////тест geterror & geterrorin
//////#include "Stdafx.h"
//////#include <iostream>
//////#include <locale>
//////#include <cwchar>
//////
//////#include "Error.h"
//////#include "Parm.h"
//////#include "Log.h"
//////#include "In.h"
//////
//////int wmain(int argc, wchar_t* argv[])
//////{
//////	setlocale(LC_ALL, "rus");
//////	cout << "----тест Error::geterror    ---" << endl << endl;
//////	try { throw ERROR_THROW(100); }
//////	catch (Error::ERROR e)
//////	{
//////		cout << "Ошибка" << e.id << ": " << e.message << endl << endl;
//////	};
//////
//////	cout << "---- тест Error::geterrorin    ---" << endl << endl;
//////	try { throw ERROR_THROW_IN(111, 7, 7); }
//////	catch (Error::ERROR e)
//////	{
//////		cout << "Ошибка" << e.id << ": " << e.message
//////			<< ", строка " << e.errorPosition.line
//////			<< ", позиция " << e.errorPosition.col << endl << endl;
//////	};
//////
//////	system("pause");
//////	return 0;
//////};
////
////////тест getparm
////#include "stdafx.h"
////#include <cwchar>
////
////#include "Error.h"
////#include "Parm.h"
////#include "Log.h"
////#include "In.h"
////
////int wmain(int argc, wchar_t* argv[])
////{
////	setlocale(LC_ALL, "rus");
////	cout << "----тест Parm::getparm    ---" << endl << endl;
////	try 
////	{
////		Parm::PARM parm = Parm::getparm(argc, argv);
////		wcout << "-in:" << parm.in << ", -out:" << parm.out << ", -log:" << parm.log << endl << endl;
////	}
////	catch (Error::ERROR e)
////	{
////		cout << "Ошибка" << e.id << ": " << e.message << endl << endl;
////	};
////
////	system("pause");
////	return 0;
////};
////
//////тест getin
//#include "stdafx.h"
//#include <iostream>
//#include <locale>
//#include <cwchar>
//
//#include "Error.h"
//#include "Parm.h"
//#include "Log.h"
//#include "In.h"
//
//int wmain(int argc, wchar_t* argv[])
//{
//	setlocale(LC_ALL, "rus");
//	cout << "----тест In::getin    ---" << endl << endl;
//	try 
//	{
//		Parm::PARM parm = Parm::getparm(argc, argv);
//		In::IN in = In::getin(parm.in);
//		cout << in.text << endl;
//		cout << "Всего символов: " << in.size << endl;
//		cout << "Всего строк: " << in.lines << endl;
//		cout << "Пропущено: " << in.ignor << endl;
//	}
//	catch (Error::ERROR e)
//	{
//		cout << "Ошибка" << e.id << ": " << e.message << endl << endl;
//		cout << "строка: " << e.errorPosition.line << " позиция " << e.errorPosition.col << endl << endl;
//	};
//
//	system("pause");
//	return 0;
//};