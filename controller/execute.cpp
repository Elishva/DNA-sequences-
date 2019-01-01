#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#include <iostream>
#include <cstdio>
#include "execute.h"

#include "../model/DNAS.h"

bool Execute::run()
{

    if(strcmp(m_cli.getCommand(), "exit") == 0) return false;


      char ** p = m_cli.getCommand_from_user();
      createCommand(m_cli.getCommand());
      m_command->action(++p,m_AllDNAS);
      m_cli.output(m_command->get_message());
      return true;
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
    /*
    else if (strcmp(command,"list") == 0)
    {
         m_command = new List();
    }

    else if (strcmp(command,"save") == 0)
    {
       m_command = new Save();
    }

  */
}



