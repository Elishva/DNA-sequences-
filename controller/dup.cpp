#include "dup.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
#include "factory.h"

size_t Dup::s_count_seq = 0; 
//bool New::reg = Factory::getInstance()->registerCommand("new",new New());
std::string Dup::m_message = "" ;


bool Dup::checkValues( char **values)
{
	return true;
}

void Dup::action(char **values , DNAS & dnas)
{
	size_t index;
	std::stringstream v;
	v << values[0]+1;
	v>>index;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	SharedPtr<IDNA> dna = dnadata->getIDNA(); 
	SharedPtr<DnaAndData> newdnaAdata (new DnaAndData(dna, "seq_1"));
	dnas.addNewDNA(newdnaAdata);

	std::stringstream message;
	message << "[" << newdnaAdata->get_id() << "] " << newdnaAdata->get_name() << ": " << newdnaAdata->get_DNA();
	m_message = message.str();
  
}

size_t Dup::get_seq()
{

	return ++s_count_seq;
}


std::string Dup::help()
{
    const char * m_help = " Dup HELP";
    std::cout << "Dup HELP " << std::endl; 
    return m_help;
}


std::string Dup::get_message()
{
    return m_message;
}

