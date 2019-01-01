#ifndef __LOAD_H__
#define __LOAD_H__


#include <sstream>
#include "ICommand.h"
class Load:public ICommand
{
  public:
  bool checkValues( char **values);
  void action( char **values, DNAS & dnas);
  std::string help();
  std::string get_message();

  private:
  static std::string m_message;

};

#endif //__LOAD_H__
