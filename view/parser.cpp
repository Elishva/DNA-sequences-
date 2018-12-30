#include "parser.h"
#include <cstring>
#include <cstdio>
#define  DELIMETER  " "


char** Parser::parseCommand(char* cli)
{
 

   char *word= strtok(cli, DELIMETER);

   for (int i=0 ;word ;++i)
   {
      m_params[i] = word;
      word =strtok(NULL, DELIMETER); 
   } 
   return m_params;

}


char * Parser::operator [](int idx)
{
   return m_params[idx];
}


char ** Parser::getParams()
{
   return m_params;
}
