#include "rename.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
#include "factory.h"

size_t Rename::s_count_seq = 0; 
std::string Rename::m_message = "" ;


bool Rename::checkValues( char **values)
{
	return true;
}

void Rename::action(char **values , DNAS & dnas)
{

	std::string index;
	std::string new_name_seq;
	std::stringstream v;
	std::stringstream v1;
	v << values[0];
	v>>index;
	v1 << values[1] + 1;
	v1 >> new_name_seq;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	dnadata->setName(new_name_seq);
	std::stringstream message;
	message << "[" << dnadata->get_id() << "] " << dnadata->get_name() << ": " << dnadata->get_DNA();
  	m_message = message.str();
}

size_t Rename::get_seq()
{

	return ++s_count_seq;
}


std::string Rename::help()
{
    const char * m_help = "RENAME HELP";
    std::cout << "RENAME HELP " << std::endl; 
    return m_help;
}


std::string Rename::get_message()
{
    return m_message;
}

