#include "help.h"
#include <cstring>

char * Help::help(char * command)
{
   if (command == NULL)
   {
     //list all help of command
   }
   if (strcmp(command,"new") == 0)
   {
      m_help = new New();
      m_help->help();

   }
}
