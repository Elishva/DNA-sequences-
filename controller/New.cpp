#include "New.h"
#include <cstdio>
#include <sstream>
#include "../model/DNA.h"
std::string New::m_message = "" ;

bool New::checkValues( char **values)
{
	return values[1][0] == '@';
}

void New::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;
	IDNA * dna = new DNA(values[0]);
	DnaAndData* dnaAdata = new DnaAndData(dna, values[1]+1);
	dnas.addNewDNA(dnaAdata);

	std::stringstream message;
	message << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
	m_message = message.str();
  
}


std::string New::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


std::string New::get_message()
{
    return m_message;
}

