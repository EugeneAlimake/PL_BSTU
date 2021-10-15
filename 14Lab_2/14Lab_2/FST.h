﻿#pragma once
#pragma once
#include <stddef.h>
#include "Parm.h"
#pragma region auto

#define FST_DECLARE 8,	\
	FST::NODE(1, FST::RELATION('d', 1)),\
	FST::NODE(1, FST::RELATION('e', 2)),\
	FST::NODE(1, FST::RELATION('c', 3)),\
	FST::NODE(1, FST::RELATION('l', 4)),\
	FST::NODE(1, FST::RELATION('a', 5)),\
	FST::NODE(1, FST::RELATION('r', 6)),\
	FST::NODE(1, FST::RELATION('e', 7)),\
	FST::NODE()

#define FST_INTEGER 8,	\
	FST::NODE(1, FST::RELATION('i', 1)),\
	FST::NODE(1, FST::RELATION('n', 2)),\
	FST::NODE(1, FST::RELATION('t', 3)),\
	FST::NODE(1, FST::RELATION('e', 4)),\
	FST::NODE(1, FST::RELATION('g', 5)),\
	FST::NODE(1, FST::RELATION('e', 6)),\
	FST::NODE(1, FST::RELATION('r', 7)),\
	FST::NODE()

#define FST_STRING 7,	\
	FST::NODE(1, FST::RELATION('s', 1)),\
	FST::NODE(1, FST::RELATION('t', 2)),\
	FST::NODE(1, FST::RELATION('r', 3)),\
	FST::NODE(1, FST::RELATION('i', 4)),\
	FST::NODE(1, FST::RELATION('n', 5)),\
	FST::NODE(1, FST::RELATION('g', 6)),\
	FST::NODE()

#define FST_FUNCTION 9,	\
	FST::NODE(1, FST::RELATION('f', 1)),\
	FST::NODE(1, FST::RELATION('u', 2)),\
	FST::NODE(1, FST::RELATION('n', 3)),\
	FST::NODE(1, FST::RELATION('c', 4)),\
	FST::NODE(1, FST::RELATION('t', 5)),\
	FST::NODE(1, FST::RELATION('i', 6)),\
	FST::NODE(1, FST::RELATION('o', 7)),\
	FST::NODE(1, FST::RELATION('n', 8)),\
	FST::NODE()

#define FST_RETURN 7,	\
	FST::NODE(1, FST::RELATION('r', 1)),\
	FST::NODE(1, FST::RELATION('e', 2)),\
	FST::NODE(1, FST::RELATION('t', 3)),\
	FST::NODE(1, FST::RELATION('u', 4)),\
	FST::NODE(1, FST::RELATION('r', 5)),\
	FST::NODE(1, FST::RELATION('n', 6)),\
	FST::NODE()

#define FST_PRINT 6,	\
	FST::NODE(1, FST::RELATION('p', 1)),\
	FST::NODE(1, FST::RELATION('r', 2)),\
	FST::NODE(1, FST::RELATION('i', 3)),\
	FST::NODE(1, FST::RELATION('n', 4)),\
	FST::NODE(1, FST::RELATION('t', 5)),\
	FST::NODE()

#define FST_MAIN 5,	\
	FST::NODE(1, FST::RELATION('m', 1)),\
	FST::NODE(1, FST::RELATION('a', 2)),\
	FST::NODE(1, FST::RELATION('i', 3)),\
	FST::NODE(1, FST::RELATION('n', 4)),\
	FST::NODE()

#define FST_ID 3,	\
	FST::NODE(52,	\
	FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
	FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
	FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
	FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
	FST::RELATION('y', 1), FST::RELATION('z', 1),\
	\
	FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2),\
	FST::RELATION('g', 2), FST::RELATION('h', 2), FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
	FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2), FST::RELATION('q', 2), FST::RELATION('r', 2),\
	FST::RELATION('s', 2), FST::RELATION('t', 2), FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
	FST::RELATION('y', 2), FST::RELATION('z', 2)),\
	\
	FST::NODE(72,	\
	FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
	FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
	FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
	FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
	FST::RELATION('y', 1), FST::RELATION('z', 1),\
	FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1), FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1),\
	FST::RELATION('7', 1), FST::RELATION('8', 1), FST::RELATION('9', 1), FST::RELATION('0', 1),\
	\
	FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2),\
	FST::RELATION('g', 2), FST::RELATION('h', 2), FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
	FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2), FST::RELATION('q', 2), FST::RELATION('r', 2),\
	FST::RELATION('s', 2), FST::RELATION('t', 2), FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
	FST::RELATION('y', 2), FST::RELATION('z', 2),\
	FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), FST::RELATION('4', 2), FST::RELATION('5', 2), FST::RELATION('6', 2),\
	FST::RELATION('7', 2), FST::RELATION('8', 2), FST::RELATION('9', 2), FST::RELATION('0', 2)),\
	FST::NODE()

#define FST_INTLIT 2,	\
	FST::NODE(20,	\
	FST::RELATION('1', 0), FST::RELATION('2', 0), FST::RELATION('3', 0), FST::RELATION('4', 0), FST::RELATION('5', 0), FST::RELATION('6', 0),\
	FST::RELATION('7', 0), FST::RELATION('8', 0), FST::RELATION('9', 0), FST::RELATION('0', 0),\
	\
	FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1), FST::RELATION('4', 1), FST::RELATION('5', 1), FST::RELATION('6', 1),\
	FST::RELATION('7', 1), FST::RELATION('8', 1), FST::RELATION('9', 1), FST::RELATION('0', 1)),\
	FST::NODE()

#define FST_STRLIT 4,	\
	FST::NODE(2, FST::RELATION('\'', 1), FST::RELATION('\'', 2)),\
	FST::NODE(158,	\
	FST::RELATION('a', 1), FST::RELATION('b', 1), FST::RELATION('c', 1), FST::RELATION('d', 1), FST::RELATION('e', 1), FST::RELATION('f', 1),\
	FST::RELATION('g', 1), FST::RELATION('h', 1), FST::RELATION('i', 1), FST::RELATION('j', 1), FST::RELATION('k', 1), FST::RELATION('l', 1),\
	FST::RELATION('m', 1), FST::RELATION('n', 1), FST::RELATION('o', 1), FST::RELATION('p', 1), FST::RELATION('q', 1), FST::RELATION('r', 1),\
	FST::RELATION('s', 1), FST::RELATION('t', 1), FST::RELATION('u', 1), FST::RELATION('v', 1), FST::RELATION('w', 1), FST::RELATION('x', 1),\
	FST::RELATION('y', 1), FST::RELATION('z', 1), FST::RELATION('1', 1), FST::RELATION('2', 1), FST::RELATION('3', 1), FST::RELATION('4', 1),\
	FST::RELATION('5', 1), FST::RELATION('6', 1), FST::RELATION('7', 1), FST::RELATION('8', 1), FST::RELATION('9', 1), FST::RELATION('0', 1),\
	\
	FST::RELATION('à', 1), FST::RELATION('á', 1), FST::RELATION('â', 1), FST::RELATION('ã', 1), FST::RELATION('ä', 1), FST::RELATION('å', 1),\
	FST::RELATION('¸', 1), FST::RELATION('æ', 1), FST::RELATION('ç', 1), FST::RELATION('è', 1), FST::RELATION('é', 1), FST::RELATION('ê', 1),\
	FST::RELATION('ë', 1), FST::RELATION('ì', 1), FST::RELATION('í', 1), FST::RELATION('î', 1), FST::RELATION('ï', 1), FST::RELATION('ð', 1),\
	FST::RELATION('ñ', 1), FST::RELATION('ò', 1), FST::RELATION('ó', 1), FST::RELATION('ô', 1), FST::RELATION('õ', 1), FST::RELATION('ö', 1),\
	FST::RELATION('÷', 1), FST::RELATION('ø', 1), FST::RELATION('ù', 1), FST::RELATION('ú', 1), FST::RELATION('û', 1), FST::RELATION('ü', 1),\
	FST::RELATION('ý', 1), FST::RELATION('þ', 1), FST::RELATION('ÿ', 1), FST::RELATION(' ', 1), FST::RELATION('.', 1), FST::RELATION(',', 1),\
	FST::RELATION('?', 1), FST::RELATION('!', 1), FST::RELATION(';', 1), FST::RELATION(':', 1), FST::RELATION('-', 1), FST::RELATION(')', 1),\
	FST::RELATION('(', 1), \
	\
	FST::RELATION('a', 2), FST::RELATION('b', 2), FST::RELATION('c', 2), FST::RELATION('d', 2), FST::RELATION('e', 2), FST::RELATION('f', 2),\
	FST::RELATION('g', 2), FST::RELATION('h', 2), FST::RELATION('i', 2), FST::RELATION('j', 2), FST::RELATION('k', 2), FST::RELATION('l', 2),\
	FST::RELATION('m', 2), FST::RELATION('n', 2), FST::RELATION('o', 2), FST::RELATION('p', 2), FST::RELATION('q', 2), FST::RELATION('r', 2),\
	FST::RELATION('s', 2), FST::RELATION('t', 2), FST::RELATION('u', 2), FST::RELATION('v', 2), FST::RELATION('w', 2), FST::RELATION('x', 2),\
	FST::RELATION('y', 2), FST::RELATION('z', 2), FST::RELATION('1', 2), FST::RELATION('2', 2), FST::RELATION('3', 2), FST::RELATION('4', 2),\
	FST::RELATION('5', 2), FST::RELATION('6', 2), FST::RELATION('7', 2), FST::RELATION('8', 2), FST::RELATION('9', 2), FST::RELATION('0', 2),\
	\
	FST::RELATION('à', 2), FST::RELATION('á', 2), FST::RELATION('â', 2), FST::RELATION('ã', 2), FST::RELATION('ä', 2), FST::RELATION('å', 2),\
	FST::RELATION('¸', 2), FST::RELATION('æ', 2), FST::RELATION('ç', 2), FST::RELATION('è', 2), FST::RELATION('é', 2), FST::RELATION('ê', 2),\
	FST::RELATION('ë', 2), FST::RELATION('ì', 2), FST::RELATION('í', 2), FST::RELATION('î', 2), FST::RELATION('ï', 2), FST::RELATION('ð', 2),\
	FST::RELATION('ñ', 2), FST::RELATION('ò', 2), FST::RELATION('ó', 2), FST::RELATION('ô', 2), FST::RELATION('õ', 2), FST::RELATION('ö', 2),\
	FST::RELATION('÷', 2), FST::RELATION('ø', 2), FST::RELATION('ù', 2), FST::RELATION('ú', 2), FST::RELATION('û', 2), FST::RELATION('ü', 2),\
	FST::RELATION('ý', 2), FST::RELATION('þ', 2), FST::RELATION('ÿ', 2), FST::RELATION(' ', 2), FST::RELATION('.', 2), FST::RELATION(',', 2),\
	FST::RELATION('?', 2), FST::RELATION('!', 2), FST::RELATION(';', 2), FST::RELATION(':', 2), FST::RELATION('-', 2), FST::RELATION(')', 2),\
	FST::RELATION('(', 2)),\
	\
	FST::NODE(1, FST::RELATION('\'', 3)),\
	FST::NODE()

#define FST_OPERATOR 2,	\
	FST::NODE(4, FST::RELATION('+', 1), FST::RELATION('-', 1), FST::RELATION('*', 1), FST::RELATION('/', 1)),\
	FST::NODE()

#define FST_PLUS 2,	\
	FST::NODE(1, FST::RELATION('+', 1)),\
	FST::NODE()

#define FST_MINUS 2,	\
	FST::NODE(1, FST::RELATION('-', 1)),\
	FST::NODE()

#define FST_STAR 2,	\
	FST::NODE(1, FST::RELATION('*', 1)),\
	FST::NODE()

#define FST_DIRSLASH 2,	\
	FST::NODE(1, FST::RELATION('/', 1)),\
	FST::NODE()

#define FST_SEMICOLON 2,	\
	FST::NODE(1, FST::RELATION(';', 1)),\
	FST::NODE()

#define FST_COMMA 2,	\
	FST::NODE(1, FST::RELATION(',', 1)),\
	FST::NODE()

#define FST_LEFTBRACE 2,	\
	FST::NODE(1, FST::RELATION('{', 1)),\
	FST::NODE()

#define FST_BRACELET 2,	\
	FST::NODE(1, FST::RELATION('}', 1)),\
	FST::NODE()

#define FST_LEFTTHESIS 2,	\
	FST::NODE(1, FST::RELATION('(', 1)),\
	FST::NODE()

#define FST_RIGHTTHESIS 2,	\
	FST::NODE(1, FST::RELATION(')', 1)),\
	FST::NODE()

#define FST_EQUAL 2,	\
	FST::NODE(1, FST::RELATION('=', 1)),\
	FST::NODE()

#pragma endregion


namespace FST {
	struct RELATION {
		unsigned char symbol;
		short nnode;			//номер вершины

		RELATION(unsigned char c = 0x00, short ns = NULL);
	};

	struct NODE {
		short n_relation;
		RELATION* relations;

		NODE();
		NODE(short n, RELATION rel, ...);
	};

	struct FST {
		unsigned char* string;
		short position;
		short nstates;			// количество состояний автомата
		NODE* nodes;
		short* rstates;			// возможные состояния автомата на данной позиции

		FST(unsigned char* s, short ns, NODE n, ...);
	};


	bool execute(FST& fst);

};
