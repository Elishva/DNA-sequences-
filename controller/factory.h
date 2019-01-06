#ifndef __FACTORY_H__
#define __FACTORY_H__
#include "ICommand.h"
class Factory
{
	public:
		Factory();
		ICommand* getCommand(const char * command)const;
	private:
		std::map<char *, ICommand *> m_commands;			
};

#endif //__FACTORY_H__
