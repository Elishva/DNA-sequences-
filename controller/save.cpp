#include "save.h"
#include <cstdio>
#include <sstream>
#include "../model/DNA.h"
#include "../model/DnaWriter.h"
std::string Save::m_message = "" ;

bool Save::checkValues( char **values)
{
	return values[1][0] == '@';
}

void Save::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;

	DnaWriter dna_writer (values[1] + 1);
	DNA dna (values[0]);
	dna_writer.write(dna);
		
	std::stringstream message;
	message << "seq:" << values[0];
	m_message = message.str();
  
}


std::string Save::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


std::string Save::get_message()
{
    return m_message;
}

