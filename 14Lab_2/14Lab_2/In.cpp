#include "Parm.h"
#include "Error.h"
#include "In.h"
#include <locale>	
#include <cwchar>
#include <iostream>
#include <fstream>

using namespace std;

namespace In
{
	IN getin(wchar_t infile[])
	{
		IN in;
		
		unsigned char* text = new unsigned char[IN_MAX_LEN_TEXT];
		unsigned char* textout = new unsigned char[IN_MAX_LEN_TEXT];
		ifstream fin(infile);
		bool fkov = false;
		
		if (fin.fail()) throw ERROR_THROW(110);
		int x;
		x = sizeof(fin);
		/*x = IN_MAX_LEN_TEXT + 1;*/
		if (x > IN_MAX_LEN_TEXT) throw ERROR_THROW(113);
		/*if (x > IN_MAX_LEN_TEXT) throw ERROR_THROW(-1);*/
		while (in.size < IN_MAX_LEN_TEXT)
		{

			char c; fin.get(c);
			unsigned char x = c;
			//cout << " " << c << "(" << (int)x<< ")";
			if (fin.eof())
			{
				text[in.size] = '\0';
				in.lines++;
				break;
			}
			if (x == IN_CODE_ENDL)
			{
				in.lines++;
				in.col = 0;
			}
			if (in.code[x] == in.T)
			{
				text[in.size] = x;
				in.size++;
				in.col++;
			}
			else if (in.code[x] == in.I)
			{
				in.ignor++;
			}
			else if (in.code[x] == in.F)
			{
				throw ERROR_THROW_IN(111, in.lines, in.col);
			}
			else if (in.code[x] == in.P) {
				fkov = not(fkov);
				text[in.size] = x;
				in.size++;
			}
			else if (in.code[x] == in.S) {
				if (x == '\n') fkov = false;
				if (fkov) {
					//cout << "ms";
					text[in.size] = x;
					in.size++;
					continue;
				}
				else
					if ((in.code[text[in.size - 1]] == in.S) && (x == ' '))
					{
						continue;
					}
					else
						if (text[in.size - 1] == ' ') {
							in.size = in.size - 1;
						}
				text[in.size] = x;
				in.size++;
				in.col++;
			}
			else
			{
				text[in.size] = in.code[x];
				in.size++;
				in.col++;
			}

		}
		text[in.size] = '\0';
		in.text = text;
		return in;
	}
}