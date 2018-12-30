#ifndef __NEW_H__
#define __NEW_H__
#include "ICommand.h"


class New:public ICommand
{
  public:
  bool checkValues( char **values);
  void action( char **values);
  std::string help();
   std::string get_message();
  private:
    static std::string m_message ;

};

#endif // __NEW_H__
