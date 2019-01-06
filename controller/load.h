#ifndef __LOAD_H__
#define __LOAD_H__


#include <sstream>
#include "ICommand.h"
class Load:public ICommand
{
  public:
	bool checkValues( char **values);
	void action( char **values, DNAS & dnas);
	size_t get_seq();
	std::string help();
	std::string get_message();

  private:
	static std::string m_message;
	static size_t s_count_seq; 

};

#endif //__LOAD_H__
