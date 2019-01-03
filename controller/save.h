#ifndef __SAVEDNA_H__
#define __SAVEDNA_H__



#include "ICommand.h"
class Save:public ICommand
{
	public:
    
		bool checkValues(char **values);
		void action( char **values , DNAS & dnas);
		std::string help();
		std::string get_message();
	private:
		static std::string m_message ;




};

#endif //__SAVEDNA_H__
