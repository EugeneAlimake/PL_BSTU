#pragma once
#include "stdafx.h"
#define maxsize 10000
#define maxword 10000
using  namespace std;
namespace Lex 
{

	unsigned char** separat(In::IN in);
	struct LEX
	{
		IT::IdTable idtable;;
		LT::LexTable lextable;
	};

	LEX lexAnaliz(Log::LOG log, In::IN in);
	bool checkBrace(unsigned char** word, int k);
}