#include "len.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
#include "factory.h"

size_t Len::s_count_seq = 0; 
//bool New::reg = Factory::getInstance()->registerCommand("new",new New());
std::string Len::m_message = "" ;


bool Len::checkValues( char **values)
{
	return true;
}

void Len::action(char **values , DNAS & dnas)
{
	size_t index;
	std::stringstream v;
	v << values[0];
	v>>index;
	SharedPtr<DnaAndData> dnadata = dnas[index];
	size_t length = dnadata->getIDNA()->get_m_length_seq();
	std::stringstream message;
	message << length;
	m_message = message.str();
  
}

size_t Len::get_seq()
{

	return ++s_count_seq;
}


std::string Len::help()
{
    const char * m_help = " LEN HELP";
    std::cout << "LEN HELP " << std::endl; 
    return m_help;
}


std::string Len::get_message()
{
    return m_message;
}

