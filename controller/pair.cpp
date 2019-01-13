#include "pair.h"
#include <cstdio>
#include <sstream>

#include "../model/PairDNA.h"
std::string Pair::m_message = "" ;

bool Pair::checkValues( char **values)
{
	return  values[0][0] == '#' ;
}

void Pair::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;
	size_t index;
	std::stringstream v;
	std::string st;
	v << values[0]+1;
	v>>index;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	SharedPtr<IDNA>  dna (new PairDNA (dnadata->getIDNA()));
	//check_str(values[1]);	
	DnaAndData * newdnadata = new DnaAndData(dna,"eli7");
	std::stringstream message;
	message << "[" << newdnadata->get_id() << "] " << newdnadata->get_name() << ": " << newdnadata->get_DNA();
	m_message = message.str();
  
}


std::string Pair::help()
{
    const char * m_help = " SHOW HELP";
    std::cout << "SHOW HELP " << std::endl; 
    return m_help;
}


std::string Pair::get_message()
{
    return m_message;
}



