#include "FST.h"

int _tmain(int argc, _TCHAR* argv[])
{
	setlocale(LC_ALL, "rus");

	FST::FST fst1( // недетерминированный конечный автомат a(b)+(cd(b)*(e|b+(f+))d)*b+gd
		"abcdefdbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2),FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2,FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1,FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)), 
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst1))							// вьюлнить разбор
		std::cout << "Цепочка " << fst1.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst1.string << " не распознана" << std::endl;

	FST::FST fst2( 
		"abbbcdbbbefdbbbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst2))							
		std::cout << "Цепочка " << fst2.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst2.string << " не распознана" << std::endl;

	FST::FST fst3( 
		"abbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst3))							// выполнить разбор
		std::cout << "Цепочка " << fst3.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst3.string << " не распознана" << std::endl;

	FST::FST fst4(
		"abbcdbbfdbbbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(2, FST::RELATION('d', 4), FST::RELATION('d', 5)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst4))							// выполнить разбор
		std::cout << "Цепочка " << fst4.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst4.string << " не распознана" << std::endl;


	FST::FST fst5( 
		"abcdbefdbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst5))							// выполнить разбор
		std::cout << "Цепочка " << fst5.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst5.string << " не распознана" << std::endl;

	FST::FST fst6( 
		"abbbcdbbbbbbefffffffffffdbbbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst6))							// выполнить разбор
		std::cout << "Цепочка " << fst6.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst6.string << " не распознана" << std::endl;

	FST::FST fst7( 
		"abbcdbbbbffdbbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst7))							// выполнить разбор
		std::cout << "Цепочка " << fst7.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst7.string << " не распознана" << std::endl;

	FST::FST fst8( 
		"abcdbebfdbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst8))							// выполнить разбор
		std::cout << "Цепочка " << fst8.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst8.string << " не распознана" << std::endl;

	FST::FST fst9( 
		"Abcdefdbgd", // цепочка для распознавания
		13, // количество состояний
		/*0*/FST::NODE(1, FST::RELATION('a', 1)),
		/*1*/FST::NODE(3, FST::RELATION('b', 1), FST::RELATION('b', 2), FST::RELATION('b', 9)),
		/*2*/FST::NODE(1, FST::RELATION('c', 3)),
		/*3*/FST::NODE(1, FST::RELATION('d', 4)),
		/*4*/FST::NODE(2, FST::RELATION('b', 4), FST::RELATION('b', 5)),
		/*5*/FST::NODE(2, FST::RELATION('e', 7), FST::RELATION('b', 6)),
		/*6*/FST::NODE(2, FST::RELATION('b', 6), FST::RELATION('b', 7)),
		/*7*/ FST::NODE(1, FST::RELATION('f', 8)),
		/*8*/FST::NODE(2, FST::RELATION('f', 8), FST::RELATION('d', 9)),
		/*9*/FST::NODE(1, FST::RELATION('b', 10)),
		/*10*/FST::NODE(2, FST::RELATION('b', 10), FST::RELATION('g', 11)),
		/*11*/FST::NODE(1, FST::RELATION('d', 12)),
		/*12*/FST::NODE()
	);

	if (FST::execute(fst9))							// выполнить разбор
		std::cout << "Цепочка " << fst9.string << " распознана" << std::endl;
	else std::cout << "Цепочка " << fst9.string << " не распознана" << std::endl;

	system("pause");
	return 0;
}