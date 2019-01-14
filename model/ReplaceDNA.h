#ifndef __REPLACEDNA_H__
#define __REPLACEDNA_H__

#include "IDNA.h"
#include "../Libary/SharedPtr.h"
#include <iostream>
class ReplaceDNA: public IDNA
{
	public:
		ReplaceDNA(SharedPtr<IDNA> idna);
		Nucleotide operator[](size_t index)const;
		size_t get_m_length_seq() const;


	private:
		SharedPtr<IDNA>  m_Idna;

};


#endif // __REPLACEDNA_H__
