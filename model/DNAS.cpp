#include "DNAS.h"
#include <cstdio>

void DNAS::addNewDNA(DnaAndData *dnaToAdd)
{
	m_DNAS[dnaToAdd->get_id()] = dnaToAdd;
}


void DNAS::print()
{
	for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS.begin(); it != m_DNAS.end(); ++it)
	{
		std::cout << it->first << ",  " << it->second->get_name() << std::endl;
	}
}
