/*#include "factory.h"
#include <iostream>
#include <cstdlib>


Factory* Factory::getInstance()
{
    static Factory* instance = new Factory; 
    return instance;
}

bool Factory::registerCommand(std::string name, ICommand* command)
{
	m_Commands[name] = command;
	std::cout << m_Commands.find(name)->second;
	return true;
}

ICommand * Factory::getCommand(std::string name)
{
	
		
	std::cout << m_Commands.find(name)->first;
	//ICommand * temp = m_Commands.find(name)->second;
	/*if (temp == NULL)
		throw "Command not found\n";
	return temp;
	//return m_Commands.find(name)->second;
}*/

#include "factory.h"
#include "New.h"
#include "load.h"
#include "save.h"
#include "Show.h"
#include "list.h"
#include "pair.h"

FactoryCommand::FactoryCommand()
{
    m_commands.insert(std::make_pair<std::string ,ICommand*>("new",new New()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("show",new Show()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("load",new Load()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("save",new Save()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("list",new List()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("pair",new Pair()));
}
FactoryCommand::~FactoryCommand() {}


ICommand* FactoryCommand::getCommand(const char *command)
{
    return m_commands[command];
}
