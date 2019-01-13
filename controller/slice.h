#ifndef __SLICE_H__
#define __SLICE_H__

#include "ICommand.h"
class Slice:public ICommand
{
 	public:

		bool checkValues(char **values);
		void action( char **values , DNAS & dnas);
		std::string help();
		std::string get_message();
	private:
		static std::string m_message ;
};
#endif // __SLICE_H__
