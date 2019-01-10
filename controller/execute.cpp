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
       const char * c = m_cli.getCommand();
       ICommand* cmnd  = (m_factory.getCommand(c));
       cmnd->action(++p,m_AllDNAS);
       m_cli.output(cmnd->get_message());


        return true;
}




void Execute::createCommand(char * command)
{
    
	//m_command.getCommand(command);
	/*if (strcmp(command,"new") == 0)
	{
		m_command = new New();
      
	}
    
	else if(strcmp(command,"load") == 0)
	{
		m_command = new Load();

	}
    
	else if (strcmp(command,"show") == 0)
	{
		m_command = new Show();
	}
    
	else if (strcmp(command,"save") == 0)
	{
		m_command = new Save();
	}
	else if (strcmp(command,"list") == 0)
	{
		m_command = new List();
	}

	else if (strcmp(command,"pair") == 0)
	{
		m_command = new Pair();
	}
	else
	{
		std::invalid_argument("cannot create this command");
	}*/
  
}



