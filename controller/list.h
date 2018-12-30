#ifndef __LIST_H__
#define __LIST_H__

#include "ICommand.h"
#include <sstream>

class List:public ICommand
{
  public:
    bool checkValues( char **values);
    void action( char **values);
    std::string help();
    std::string get_message();
  private:
    static std::string m_message ;
};









#endif // __LIST_H__
