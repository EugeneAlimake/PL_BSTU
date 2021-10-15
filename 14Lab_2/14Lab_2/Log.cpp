

#pragma warning(disable:4996)
using namespace std;

#include <locale>	
#include <cwchar>
#include <iostream>
#include "Parm.h"
#include <fstream>
#include "Log.h"	
#include <time.h>
namespace Log {
	LOG getlog(wchar_t logfile[]) { //создание и открытие потокового вывода
		LOG log;
		log.stream = new ofstream;
		log.stream->open(logfile);
		if (log.stream->fail())
			throw ERROR_THROW(112);
		wcscpy_s(log.logfile, logfile);
		return log;
	}
	void WriteLine(LOG log, const char* c, ...) {// конкатенирует элементы строки и выводит в протокол
		const char** ptr = &c;
		int i = 0;
		while (ptr[i] != "")
			*log.stream << ptr[i++];
		*log.stream << endl;
	}

	void WriteLine(LOG log, const wchar_t* c, ...)
	{
		const wchar_t** ptr = &c;
		char temp[100];
		int i = 0;
		while (ptr[i] != L"")
		{
			wcstombs(temp, ptr[i++], sizeof(temp));
			*log.stream << temp;
		}
		*log.stream << endl;
	}
	void WriteLog(LOG log) {
		char temp[100];
		time_t tmr;
		time(&tmr);
		tm* tmf = localtime(&tmr);
		strftime(temp, sizeof(temp), "\n---------------Протокол----------------- \n ------%d.%m.%y %T-----\n  ", tmf);
		*log.stream << temp;
	}
	void writelex(In::IN in) { 
		int i = 0;
		int il = 0;
		cout<< in.text[i];
		while (i < in.size) {
			cout << il << '.';
			while (in.text[i] != '|' && in.text[i] != ' ' && i<in.size) {
				cout << in.text[i++];
			}
			i++;
			il++;
			cout << endl;
		}
	}
	void WriteIn(LOG log, In::IN in) {
		*log.stream << "\nВсего символов:      " << in.size;
		*log.stream << "\nПроигнорированно:    " << in.ignor;
		*log.stream << "\nВсего строк:         " << in.lines << endl;
;
	}
	void WriteParm(LOG log, Parm::PARM parm) {
		char in_text[PARM_MAX_SIZE];
		char out_text[PARM_MAX_SIZE];
		char log_text[PARM_MAX_SIZE];
		wcstombs(in_text, parm.in, PARM_MAX_SIZE);
		wcstombs(out_text, parm.out, PARM_MAX_SIZE);
		wcstombs(log_text, parm.log, PARM_MAX_SIZE);
		*log.stream << "\n ---- - Параметры---- - \n" << in_text
			<< "\n-out: " << out_text
			<< "\n-log: " << log_text << endl;
	}
	void WriteError(LOG log, Error::ERROR error) {
		if (log.stream)
		{
			*log.stream << "\nОшибка " << error.id << ": " << error.message << ", строка " << error.inext.line << " , позиция " << error.inext.col << endl;
			Close(log);
		}
		cout << "\nОшибка " << error.id << ": " << error.message << ", строка " << error.inext.line << " , позиция " << error.inext.col << endl;
	}
	void Close(LOG log) {
		log.stream->close();
		delete log.stream;
	}
}