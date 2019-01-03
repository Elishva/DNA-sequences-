#ifndef __Show_H__
#define __Show_H__
#include "ICommand.h"


class Show:public ICommand
{
  public:
  bool checkValues(char **values);
  void action( char **values , DNAS & dnas);
  std::string help();
  std::string get_message();
  private:
    static std::string m_message ;

};

#endif // __SHOW_H__
