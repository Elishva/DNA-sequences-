#include "factory.h"
#include "New.h"
#include "load.h"
#include "Show.h"
//#include "list.h"
#include "save.h"
Factory::Factory()
{
	m_commands["new"] = new New();
	m_commands["load"] = new Load();
	m_commands["save"] = new Save();
	m_commands["show"] = new Show();
}

std::string Factory::getCommand()const
{
}
