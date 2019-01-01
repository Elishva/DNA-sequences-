#include "DNAS.h"
#include <cstdio>
#include <sstream>

void DNAS::addNewDNA(DnaAndData *dnaToAdd)
{
	m_DNAS_id[dnaToAdd->get_id()] = dnaToAdd;
    m_DNAS_name[dnaToAdd->get_name()] = dnaToAdd;
}

/*
std::string DNAS::getAsString()
{


	std::stringstream ss;
	for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS_id.begin(); it != m_DNAS_id.end(); ++it)
	{
		Status stat = it->second->get_status();
		if (stat == UPTODATE)
			ss << "-";
		else if (stat == MODIFIED)
			ss << "*";
		else if (stat == NEW)
			ss << "o";		
		std::cout << " [" << it->first << "] " << it->second->get_name() << ": " << it->second->get_DNA() << std::endl;
	}
    
    std::cout << ss.str();
	return ss.str();
}
*/
void DNAS::print()
{
      
   for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS_id.begin(); it != m_DNAS_id.end(); ++it)
   {
	std::cout << it->first << ",  " << it->second->get_name() << std::endl;
   }
}
