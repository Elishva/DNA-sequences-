 #include "slice.h"
#include <cstdio>
#include <sstream>

#include "../model/SliceDNA.h"
std::string Slice::m_message = "" ;

bool Slice::checkValues( char **values)
{
	return  values[0][0] == '#' ;
}

void Slice::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;
	size_t index;
	std::stringstream v;
	std::string st;
	v << values[0]+1;
	v>>index;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	SharedPtr<IDNA>  dna (new SliceDNA (dnadata->getIDNA(),1,4));
	//check_str(values[1]);	
	SharedPtr<DnaAndData> newdnadata (new DnaAndData(dna,"eli7!"));
	std::stringstream message;
	message << "[" << newdnadata->get_id() << "] " << newdnadata->get_name() << ": " << newdnadata->get_DNA();
	m_message = message.str();
  
}


std::string Slice::help()
{
    const char * m_help = " SHOW HELP";
    std::cout << "SHOW HELP " << std::endl; 
    return m_help;
}


std::string Slice::get_message()
{
    return m_message;
}



