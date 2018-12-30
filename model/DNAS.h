#ifndef __DNAS_H__
#define __DNAS_H__

#include <map>
#include "DNA_AND_DATA.h"

class DNAS
{
public:
	void addNewDNA(DnaAndData *dnaToAdd);
	void print();
private:
	std::map<size_t, DnaAndData *> m_DNAS;
};
#endif //__DNAS__H


