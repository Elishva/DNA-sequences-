#include "quit.h"
#include <cstdio>
#include <sstream>
#include <cstring>
#include "../model/DNA.h"
#include "factory.h"

size_t Quit::s_count_seq = 0; 
std::string Quit::m_message = "" ;


bool Quit::checkValues( char **values)
{
	return true;
}

void Quit::action(char **values , DNAS & dnas)
{
	m_message = "GOOD Bye!!!";
  
}

size_t Quit::get_seq()
{

	return ++s_count_seq;
}


std::string Quit::help()
{
    const char * m_help = " Quit HELP";
    std::cout << "Quit HELP " << std::endl; 
    return m_help;
}


std::string Quit::get_message()
{
    return m_message;
}

