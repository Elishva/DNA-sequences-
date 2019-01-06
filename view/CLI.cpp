#include "CLI.h"
#include <iostream>
#include <cstdio>
#include <cstring>

char ** CLI::getCommand_from_user()
{
  std::cout << "\n>cmd >>> ";
  if(fgets(m_command, sizeof(m_command), stdin) == NULL) return 0;
  if(m_command[strlen(m_command) -1] == '\n')
     m_command[strlen(m_command) -1] = '\0';
  return m_parser.parseCommand(m_command);
}


void CLI::output(std::string output)
{
   std::cout << output << std::endl;
}


char * CLI::getCommand()
{
   return m_command;
}



