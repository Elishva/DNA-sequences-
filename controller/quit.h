#ifndef __QUIT_H__
#define __QUIT_H__
#include "ICommand.h"


class Quit:public ICommand
{
  public:
	bool checkValues(char **values);
	void action( char **values , DNAS & dnas);
	std::string help();
	std::string get_message();
	size_t get_seq();
  private:
	static std::string m_message ;
	static size_t s_count_seq; 
	//static bool reg;

};

#endif // __Quit_H__
