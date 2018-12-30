#include "list.h"
#include <cstdio>


std::string List::m_message = "" ;
bool List::checkValues( char **values)
{
  return values[1][0] == '@';
}

void List::action( char ** values)
{
  m_message = m_AllDNAS.getAsString();
}

std::string List::help()
{
    
}


std::string List::get_message()
{
    return m_message;
}

