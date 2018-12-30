#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#include "../model/DNAS.h"

class ICommand
{
  public:
  virtual bool checkValues( char **values) = 0;
  virtual void action(char ** values) = 0 ;
  virtual const char * help() = 0;

  protected:
    DNAS m_AllDNAS;

};
#endif
