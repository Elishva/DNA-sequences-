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
#include "slice.h"
#include "len.h"
#include "quit.h"
#include "dup.h"
#include "rename.h"
#include "del.h"
#include "replace.h"

FactoryCommand::FactoryCommand()
{
    m_commands.insert(std::make_pair<std::string ,ICommand*>("new",new New()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("show",new Show()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("load",new Load()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("save",new Save()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("list",new List()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("pair",new Pair()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("slice",new Slice()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("len",new Len()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("quit",new Quit()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("dup",new Dup()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("rename",new Rename()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("del",new Del()));
    m_commands.insert(std::make_pair<std::string ,ICommand*>("replace",new Replace()));
}
FactoryCommand::~FactoryCommand() {}


ICommand* FactoryCommand::getCommand(const char *command)
{
    return m_commands[command];
}
