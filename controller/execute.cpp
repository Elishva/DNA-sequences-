#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#include <iostream>
#include <cstdio>
#include "execute.h"




bool Execute::run()
{

    if(strcmp(m_cli.getCommand(), "exit") == 0) return false;


      char ** p = m_cli.getCommand_from_user();
      createCommand(m_cli.getCommand());
      m_command->action(++p);
    

}

void Execute::createCommand(char * command)
{
    

    if (strcmp(command,"new") == 0)
    {
         m_command = new New();
      
    }

    else if(strcmp(command,"load") == 0)
    {
         m_command = new Load();

    }
    else
    {

    }
  
}



