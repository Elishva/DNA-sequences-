#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#include "../model/DNAS.h"
#include <iostream>
class ICommand
{
  public:
  virtual bool checkValues( char **values) = 0;
  virtual void action(char ** values) = 0 ;
  virtual std::string help() = 0;
  virtual  std::string get_message() = 0;
  protected:
    DNAS m_AllDNAS;

};
#endif
