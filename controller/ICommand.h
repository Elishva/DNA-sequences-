#ifndef __ICOMMAND_H__
#define __ICOMMAND_H__

#include "../model/DNA_AND_DATA.h"
#include "../model/DnaWriter.h"
#include "../model/DnaReader.h"
class ICommand
{
  public:
  virtual bool checkValues( char **values) = 0;
  virtual void action(char ** values) = 0 ;
  virtual const char * help() = 0;



};
#endif
