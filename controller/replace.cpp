#include "replace.h"
#include <cstdio>
#include <sstream>

#include "../model/ReplaceDNA.h"
std::string Replace::m_message = "" ;

bool Replace::checkValues( char **values)
{
	return  values[0][0] == '@' ;
}

void Replace::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;
	std::string indexName;
	std::stringstream v;
	v << values[0]+1;
	v>>indexName;
	SharedPtr<DnaAndData> dnadata = dnas[indexName];
	size_t index;
	std::stringstream v1;
	v1 << values[1];
	v>>index;
	
	char c;
	std::stringstream v2;
	v2 << values[2];
	v>>c;
	SharedPtr<IDNA>  dna (new ReplaceDNA (dnadata->getIDNA(),1,'T'));
	//check_str(values[1]);	
	DnaAndData * newdnadata = new DnaAndData(dna,"eli7@");
	std::stringstream message;
	message << "[" << newdnadata->get_id() << "] " << newdnadata->get_name() << ": " << newdnadata->get_DNA();
	m_message = message.str();
  
}


std::string Replace::help()
{
    const char * m_help = " Replace HELP";
    std::cout << "Replace HELP " << std::endl; 
    return m_help;
}


std::string Replace::get_message()
{
    return m_message;
}



