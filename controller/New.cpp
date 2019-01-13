#include "New.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
//#include "../model/SharedPtr.h"
#include "factory.h"

size_t New::s_count_seq = 0; 
//bool New::reg = Factory::getInstance()->registerCommand("new",new New());
std::string New::m_message = "" ;


bool New::checkValues( char **values)
{
	return values[1][0] == '@';
}

void New::action(char **values , DNAS & dnas)
{
	SharedPtr<IDNA> dna;
	char v [7]; 
	std::stringstream message1;
	if(values[1] != NULL &&!checkValues(values))return;
        try
	{
		dna = new DNA(values[0]);
	}
	catch(const char * error)
	{
		std::cout<< "invalide dna !!!" << std::endl;
	}
	

	if (values[1] == NULL)
	{

		message1 << "@seq"<< get_seq();
		std::string s = message1.str();
		strcpy(v, s.c_str());
		values[1] = v;

	}
	SharedPtr<DnaAndData> dnaAdata (new DnaAndData(dna, values[1] + 1));
	dnas.addNewDNA(dnaAdata);

	std::stringstream message;
	message << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
	m_message = message.str();
  
}

size_t New::get_seq()
{

	return ++s_count_seq;
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

