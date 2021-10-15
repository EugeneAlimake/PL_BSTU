#include "IT.h"
#include "Error.h"

namespace IT {

	IdTable Create(int size) 
	{
		//size=TI_MAXSIZE+1; //-ошибка 105
		if (size > TI_MAXSIZE) 
			throw ERROR_THROW(105);
		IdTable Table;
		Table.max_size = size;
		Table.size = 0;
		Table.table = new Entry[size];
		return Table;
	
	}

	void Add(IdTable& idtable, Entry entry) 
	{ 	//idtable.size=idtable.max_size+1; //-ошибка 106
		if (idtable.size > idtable.max_size) 
			throw ERROR_THROW(106);
		idtable.table[idtable.size++] = entry;
	}
	Entry GetEntry(IdTable& idtable, int n) 
	{
		return idtable.table[n];
	}

	int IsId(IdTable& idtable, unsigned char id[TI_MAXSIZE]) 
	{
		for (int i = 0; i <= idtable.size; i++) {
			if (idtable.table[i].id == id) 
			{
				return i;
			}
		}

		return TI_NULLIDX;

	}
	void Delete(IdTable& idtable) 
	{
		delete[] idtable.table;

	}
}