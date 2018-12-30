#ifndef __EXECUTE_H__
#define __EXECUTE_H__

#include <vector> 
#include "ICommand.h"
#include "New.h"
#include "load.h"
#include "list.h"
#include "../view/CLI.h"

class Execute
{
  public:
 

  bool run();
  void createCommand( char *command);

  private:
  CLI  m_cli;
  ICommand *m_command; 
  
};


#endif// __EXECUTE_H__
