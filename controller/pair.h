#ifndef __PAIR_H__
#define __PAIR_H__

#include "ICommand.h"
class Pair:public ICommand
{
 	public:

		bool checkValues(char **values);
		void action( char **values , DNAS & dnas);
		std::string help();
		std::string get_message();
	private:
		static std::string m_message ;
};
#endif // __PAIR_H__
