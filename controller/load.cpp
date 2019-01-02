#include <iostream>

#include "load.h"
#include "../model/DnaReader.h"


std::string Load::m_message = "" ;

bool Load::checkValues( char **values)
{
  return true;
}


void Load::action( char ** values,DNAS & dnas)
{
	std::cout << "HHHHHII" << std::endl;
	DnaReader dna_reader (values[0]);
	IDNA *dna = new DNA( dna_reader.read());
	std::stringstream m ;

	std::string message = m.str(); 
	DnaAndData* dnaAdata = new DnaAndData(dna, values[1] + 1);
	dnas.addNewDNA(dnaAdata);
  
	std::stringstream msg;
	msg << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
	m_message = msg.str();
}


std::string Load::help()
{
     
    return  "HELP";
}


std::string Load::get_message()
{
   return m_message;
}


