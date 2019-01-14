#ifndef __EXECUTE_H__
#define __EXECUTE_H__

#include <vector> 
#include "factory.h"
#include "ICommand.h"
#include "../view/CLI.h"

class Execute
{
	public:

		bool run();


	private:
		CLI  m_cli;
  		FactoryCommand m_factory; 
		ICommand *m_command; 
		DNAS m_AllDNAS;
};


#endif// __EXECUTE_H__
