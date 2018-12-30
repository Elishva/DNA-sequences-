#ifndef __PARSER_H__
#define __PARSER_H__


class Parser
{
   public :

     char** parseCommand( char* cli);
     char ** getParams();
     char * operator [](int idx); 
  

   private:
    char * m_params [30];
};


#endif
