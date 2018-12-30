#include "DNAS.h"
#include <cstdio>

void DNAS::addNewDNA(DnaAndData *dnaToAdd)
{
	m_DNAS_id[dnaToAdd->get_id()] = dnaToAdd;
        m_DNAS_name[dnaToAdd->get_name()] = dnaToAdd;
}

std::string DNAS::getAsString()
{
	std::stringstream ss;
	for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS.begin(); it != m_DNAS.end(); ++it)
	{
		Status stat = it->second->getStatus();
		if (stat == UpToDate)
			ss << "-";
		else if (stat == Modified)
			ss << "*";
		else if (stat == New)
			ss << "o";		
		ss << " [" << it->first << "] " << it->second->getName() << ": " << it->second->getDNA() << std::endl;
	}
	return ss.str();
}

void DNAS::print()
{
      
   for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS_id.begin(); it != m_DNAS_id.end(); ++it)
   {
	std::cout << it->first << ",  " << it->second->get_name() << std::endl;
   }
}
