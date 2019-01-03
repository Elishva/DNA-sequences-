#include "Show.h"
#include <cstdio>
#include <sstream>
#include "../model/DNA.h"
std::string Show::m_message = "" ;

bool Show::checkValues( char **values)
{
	return values[0][0] == '@' || values[0][0] == '#' ;
}

void Show::action(char **values , DNAS & dnas)
{
	if(!checkValues(values))return;
	size_t index;
        std::stringstream v;
        std::string str;
	DnaAndData * dnaAdata;
	if (values[0][0] == '@')
	{
	    std::cout <<values[0][0];


		v << values[0]+1;
		str = v.str(); 

	        dnaAdata = dnas[str];
	}

	if (values[0][0] == '#')
	{
		v << values[0]+1;
		v>>index;
		dnaAdata = dnas[index];
			
	} 
       
       
	std::stringstream message;
	message << "[" << dnaAdata->get_id() << "] " << dnaAdata->get_name() << ": " << dnaAdata->get_DNA();
	m_message = message.str();
  
}


std::string Show::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


std::string Show::get_message()
{
    return m_message;
}

