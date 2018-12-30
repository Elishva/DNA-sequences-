#include "New.h"

#include <cstdio>


bool New::checkValues( char **values)
{
  return true;
}

void New::action( char ** values)
{

  printf(" &&&&&&&&&&&&&&&&&     A C T I O N   N E W      $$$$$$$$$$$$$$$ \n " ); 
  if(!checkValues(values))return;
  
  const char *t =values[0];
  const char * q = values[1];
  DnaAndData dna(t,q);


	DnaAndData dnaAdata(values[0], values[1]+1 );
	m_AllDNAS.addNewDNA(&dnaAdata);
	std::cout << "[" << dnaAdata.get_id() << "] " << dnaAdata.get_name() << ": " << dnaAdata.get_DNA() << std::endl;

  
}

const char * New::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


