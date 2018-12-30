#include "New.h"
#include <cstdio>

std::string New::m_message = "" ;
bool New::checkValues( char **values)
{
  return values[1][0] == '@';
}

void New::action( char ** values)
{
    if(!checkValues(values))return;
    DnaAndData* dnaAdata = new DnaAndData(values[0], values[1]+1);
    m_AllDNAS.addNewDNA(dnaAdata);

    std::stringstream message;
    message << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
    m_message = message.str();
  
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

