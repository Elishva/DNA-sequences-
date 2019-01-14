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






