
#pragma once
#define IN_MAX_LEN_TEXT 1024*1024	
#define IN_CODE_ENDL '\n'

#define IN_CODE_TABLE {\
/*         0      1      2       3     4       5      6      7      8      9      A      B      C     D      E      F*/\
/*0*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::T, '|',   IN::T, IN::T,	IN::I, IN::F, IN::F,\
/*1*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*2*/	IN::S,	IN::T, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::P, IN::S,	IN::S, IN::S, IN::S, IN::S,	IN::S, IN::T, IN::S,\
/*3*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::S, IN::S, IN::S,	IN::S, IN::S, IN::T,\
/*4*/	IN::F,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*5*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*6*/	IN::F,  IN::T, IN::T, IN::T, IN::I, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
/*7*/	IN::T,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::S, IN::S, IN::S, IN::F, IN::F,\
																													\
/*8*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*9*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*A*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*B*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
/*C*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*D*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*E*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
/*F*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T\
					}
//#define IN_CODE_TABLE {\
///*         0      1      2       3     4       5      6      7      8      9      A      B      C     D      E      F*/\
///*0*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::T,	IN::T, '|',   IN::T, IN::T,	IN::I, IN::F, IN::F,\
///*1*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*2*/	IN::S,	IN::T, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::P, IN::S,	IN::S, IN::S, IN::S, IN::S,	IN::S, IN::T, IN::S,\
///*3*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::S, IN::S, IN::S,	IN::S, IN::S, IN::T,\
///*4*/	IN::F,	IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
///*5*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*6*/	IN::F,  IN::T, IN::T, IN::T, IN::I, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T,\
///*7*/	IN::F,	IN::F, IN::F, IN::F, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::T, IN::S, IN::S, IN::S, IN::F, IN::F,\
//																													\
///*8*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*9*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::T, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*A*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*B*/	IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F, IN::F,	IN::F, IN::F, IN::F,\
///*C*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
///*D*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
///*E*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T,\
///*F*/	IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T, IN::T,	IN::T, IN::T, IN::T\
//					}
namespace In
{
	struct IN
	{
		enum { T, F, I, S, P };
		int size=0;
		int lines=1;
		int ignor=0;
		int col = 0;
		int sizes = 0;
		unsigned char* text= new unsigned char[IN_MAX_LEN_TEXT];
		int code[256] = IN_CODE_TABLE;
	};
	IN getin(wchar_t infile[]);
}