#include "parser.h"
#include <cstring>
#include <cstdio>
#define  DELIMETER  " "


char** Parser::parseCommand(char* cli)
{
 
	char *word= strtok(cli, DELIMETER);
        int i;
	for ( i=0 ;word && word[0] ;++i)
  	 {
		m_params[i] = word;
		word =strtok(NULL, DELIMETER); 
  	 }
         m_params[i]=NULL; 
  	 return m_params;
      

}


char ** Parser::getParams()
{
	return m_params;
}
