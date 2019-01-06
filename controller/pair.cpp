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
	std::string str;
	v << values[0]+1;
	v>>index;
	DnaAndData * dnadata = dnas[index];
	IDNA * dna = new PairDNA(dnadata->getIDNA());	
	 
        
       
	std::stringstream message;
	message << "[" << dnadata->get_id() << "] " << dnadata->get_name() << ": " << dnadata->get_DNA();
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



