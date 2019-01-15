#include "del.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
#include "factory.h"

size_t Del::s_count_seq = 0; 
std::string Del::m_message = "" ;


bool Del::checkValues( char **values)
{
	return true;
}

void Del::action(char **values , DNAS & dnas)
{

	size_t index;
	std::string new_name_seq;
	std::stringstream v;
	std::stringstream v1;
	v << values[0] + 1;
	v>>index;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	/*delete dnadata->getIDNA() ;*/
  	m_message = "Delete";
}

size_t Del::get_seq()
{

	return ++s_count_seq;
}


std::string Del::help()
{
    const char * m_help = "Del HELP";
    std::cout << "Del HELP " << std::endl; 
    return m_help;
}


std::string Del::get_message()
{
    return m_message;
}

