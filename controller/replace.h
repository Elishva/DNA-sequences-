#ifndef __REPLACE_H__
#define __REPLACE_H__

#include "ICommand.h"
class Replace:public ICommand
{
 	public:

		bool checkValues(char **values);
		void action( char **values , DNAS & dnas);
		std::string help();
		std::string get_message();
	private:
		static std::string m_message ;
};
#endif // __REPLACE_H__
