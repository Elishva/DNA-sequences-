#include "DNAS.h"
#include <cstdio>
#include <sstream>

void DNAS::addNewDNA(DnaAndData *dnaToAdd)
{
    m_DNAS_id[dnaToAdd->get_id()] = dnaToAdd;
    m_DNAS_name[dnaToAdd->get_name()] = dnaToAdd;
}


DnaAndData * DNAS::operator [](std::string indx) const
{
	std::cout << indx;
	 return m_DNAS_name.find(indx)->second;
}

DnaAndData * DNAS::operator [](size_t indx) const
{
	return m_DNAS_id.find(indx)->second;
}


std::string DNAS::getList()
{
	std::stringstream ss;
	for(std::map<size_t, DnaAndData *>::const_iterator it = m_DNAS_id.begin(); it != m_DNAS_id.end(); ++it)
	{
            m_DNAS_id[it->first];
			Status stat = it->second->get_status();
			if (stat == UPTODATE)
				ss << "-";
			else if (stat == MODIFIED)
				ss << "*";
			else if (stat == NEW)
				ss << "o";
			ss << " [" << it->first << "] " << it->second->get_name() << ": " << it->second->get_DNA() << "\n";
	}
	return ss.str();
	
}


