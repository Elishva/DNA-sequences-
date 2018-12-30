#ifndef __LOAD_H__
#define __LOAD_H__

#include "ICommand.h"
class Load:public ICommand
{
  public:
  bool checkValues( char **values);
  void action( char **values);
  const char * help();



};

#endif
