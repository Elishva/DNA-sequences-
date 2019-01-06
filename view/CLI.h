#ifndef __CLI_H__
#define __CLI_H__

#include <iostream>
#include <cstring>

#include "parser.h"

class CLI 
{
  	 public:
    
		char ** getCommand_from_user();
		char ** getParseCommands();
		char * getCommand();
		void output(std::string s);
	private:
		char m_command [100];
     		Parser m_parser;
     
};
#endif
