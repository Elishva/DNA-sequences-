#ifndef __DUP_H__
#define __DUP_H__
#include "ICommand.h"

class Dup:public ICommand
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


};


#endif // __DUP_H__
