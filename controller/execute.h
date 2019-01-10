#ifndef __EXECUTE_H__
#define __EXECUTE_H__

#include <vector> 
#include "factory.h"
#include "ICommand.h"
#include "New.h"
#include "load.h"
#include "Show.h"
#include "list.h"
#include "save.h"
#include "pair.h"
#include "../view/CLI.h"

class Execute
{
	public:

		bool run();
		void createCommand( char *command);

	private:
		CLI  m_cli;
  		FactoryCommand m_factory; 
		ICommand *m_command; 
		DNAS m_AllDNAS;
};


#endif// __EXECUTE_H__
