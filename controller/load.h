#ifndef __LOAD_H__
#define __LOAD_H__

#include "ICommand.h"
#include <sstream>
class Load:public ICommand
{
  public:
  bool checkValues( char **values);
  void action( char **values);
  std::string help();
  std::string get_message();

  private:
  static std::string m_message;

};

#endif //__LOAD_H__
