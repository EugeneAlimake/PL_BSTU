#include "stdafx.h"
#include "Parm.h"
#include "Error.h"
#include <locale>	
#include <cwchar>
#include <iostream>
#include <fstream>
namespace Parm {
	PARM getparm(int argc, wchar_t* argv[]) {
		PARM parm;
		bool in = 0, o = 0, l = 0;
		/*argc = 1;*/
		if (argc < 1) // если не передаются аргументы в main
			throw ERROR_THROW(100);
		for (int i = 1; i < argc; i++) // 1 - т.к. имя файла на 0
		{
			int x = wcslen(argv[i]);
			/*x = PARM_MAX_SIZE + 1;*/
			if ( x > PARM_MAX_SIZE) // проверка длины строки каждого входного параметра
				throw ERROR_THROW(104);
			//wcsstr - Возвращает указатель на первое вхождение строки поиска в строке
			if (wcsstr(argv[i], PARM_IN))// проверка на наличие -in
			{
				wcscpy_s(parm.in, argv[i] + wcslen(PARM_IN));// +wcslen(PARM_IN) для сдвига на длину строки PARM_IN, чтобы не было повтора 
				in = 1;
			}
			if (wcsstr(argv[i], PARM_OUT))
			{
				wcscpy_s(parm.out, argv[i] + wcslen(PARM_OUT));
				o = 1;
			}
			if (wcsstr(argv[i], PARM_LOG))
			{
				wcscpy_s(parm.log, argv[i] + wcslen(PARM_LOG));
				l = 1;
			}
		}
		if (!in) throw ERROR_THROW(100);
		if (!o)// если не задано значение out
		{
			wcscpy_s(parm.out, parm.in);
			wcscat_s(parm.out, PARM_OUT_DEFAULT_EXIT);
		}
		if (!l)// если не задано значение log
		{
			wcscpy_s(parm.log, parm.in);
			wcscat_s(parm.log, PARM_LOG_DEFAULT_EXIT);
		}
		return parm;
	}
}