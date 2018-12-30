#ifndef __NEW_H__
#define __NEW_H__

#include "ICommand.h"
class New:public ICommand
{
  public:
  bool checkValues( char **values);
  void action( char **values);
  const char * help();



};

#endif
