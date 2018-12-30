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
  const char* f ="model/dna2.txt";

  DnaAndData dna(t,q); 
  std::cout <<"LLLL"<< dna.get_name() << dna.get_id() << dna.get_status() << std::endl;

  DnaWriter w (q);
  w.write(dna.get_DNA());
  std::cout << " WRITE "  <<std::endl;
  
}

const char * New::help()
{
    const char * m_help = "HELP";
    std::cout << "NEW HELP " << std::endl; 
    return m_help;
}


