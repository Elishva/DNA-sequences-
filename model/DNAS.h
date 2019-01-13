#ifndef __DNAS_H__
#define __DNAS_H__

#include <map>
#include "DNA_AND_DATA.h"
#include "../Libary/SharedPtr.h"


class DNAS
{
   public:
	void addNewDNA(SharedPtr<DnaAndData> dnaToAdd);
	SharedPtr<DnaAndData>  operator [](std::string idx) const;
	SharedPtr<DnaAndData>  operator [](size_t indx) const;
	void print();
        std::string getList(); 
   private:
	std::map<size_t, SharedPtr<DnaAndData> > m_DNAS_id;
        std::map<std::string, SharedPtr<DnaAndData> > m_DNAS_name;
};


#endif //__DNAS__H


