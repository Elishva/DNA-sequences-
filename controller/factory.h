/*#ifndef __FACTORY_H__
#define __FACTORY_H__
//#include  "../model/SharedPtr.h"
#include "ICommand.h"

class Factory
{
public:
    static Factory* getInstance();
	bool registerCommand(std::string name, ICommand* command);
	ICommand * getCommand(std::string name);

private:
	std::map<std::string, ICommand *> m_Commands;

    Factory() {}
    Factory(Factory const&);
    void operator=(Factory const&);
};

#endif //__FACTORY_H__*/


#ifndef __FACTORY_H__
#define __FACTORY_H__

#include "../Libary/SharedPtr.h"
#include <map>
#include "ICommand.h"

class FactoryCommand
{
public:
    FactoryCommand();
    ~FactoryCommand();
    ICommand* getCommand(const char * command);
private:
    std::map<std::string,ICommand*> m_commands;
};



#endif //__FACTORY_H__



