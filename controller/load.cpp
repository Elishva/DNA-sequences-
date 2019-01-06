#include <iostream>

#include "load.h"
#include <cstring>
#include "../model/DnaReader.h"


std::string Load::m_message = "" ;
size_t Load::s_count_seq = 0; 

bool Load::checkValues( char **values)
{
  return true;
}


void Load::action( char ** values,DNAS & dnas)
{
	char v [10]; 
	char value [100];
	std::stringstream message1;

	if ( values[0] == NULL)
	{
		//values[0] = "model/fiels/my_dna_seq.rawdna";
	}
	else if (values[0][1] == '@')
	{
		strcpy(value,values[0]);
		values[1] = value;
		//values[0] = "model/fiels/my_dna_seq.rawdna";
	}
		
	DnaReader dna_reader (values[0]);
	IDNA *dna = new DNA( dna_reader.read());
	std::stringstream m ;
	std::string message = m.str(); 

	if (values[1] == NULL)
	{

		message1 << "@seq"<< get_seq();
		std::string s = message1.str();
		strcpy(v, s.c_str());
		values[1] = v;

	}
	DnaAndData* dnaAdata = new DnaAndData(dna, values[1] + 1);
	dnas.addNewDNA(dnaAdata);
  
	std::stringstream msg;
	msg << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
	m_message = msg.str();
}


size_t Load::get_seq()
{

	return ++s_count_seq;
}


std::string Load::help()
{
     
    return  "HELP";
}


std::string Load::get_message()
{
   return m_message;
}


