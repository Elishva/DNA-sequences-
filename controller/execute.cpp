#include <unistd.h>
#include <sys/wait.h>
#include <cstring>
#include <iostream>
#include <cstdio>
#include "execute.h"




int Execute::run()
{

    //if(strcmp(m_cli.getCommand(), "exit") == 0) return -1;

    pid_t pid = fork();
    if (pid == -1)
    {
        printf(" error fork: \n");
        return 1;
    }

    else if (pid == 0)
    {

      char ** p = m_cli.getCommand_from_user();
      createCommand(m_cli.getCommand());
      m_command->action(++p);
       
    }
    else 
    {
        int childStatus;
        waitpid(pid, &childStatus, 0);
        return 1;
    }
   return 1;

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
  
}



