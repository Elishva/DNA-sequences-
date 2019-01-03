#include "list.h"
#include <cstdio>
#include <sstream>
#include "../model/DNA.h"
std::string List::m_message = "" ;

bool List::checkValues( char **values)
{
	return values[0][0] == '@' || values[0][0] == '#' ;
}

void List::action(char **values , DNAS & dnas)
{
	m_message = dnas.getList();
  
}


std::string List::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


std::string List::get_message()
{
    return m_message;
}

