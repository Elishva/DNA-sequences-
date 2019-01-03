#ifndef __FACTORY_H__
#define __FACTORY_H__
#include "ICommand"
class Factory
{
	public:
		Factory(std::string command);
		std::string getCommand()const;
	private:
		std::map<std::string, ICommand *> m_commands;			
};

#endif //__FACTORY_H__
