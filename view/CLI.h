#ifndef __CLI_H__
#define __CLI_H__

#include <cstdio>
#include <cstring>

#include "parser.h"

class CLI 
{
   public:
     
     CLI();
     char** getCommand_from_user();
     char * getCommand();
  
   private:
     char m_command [100];
     Parser m_parser;
     
};
#endif
