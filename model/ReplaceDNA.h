#ifndef __REPLACEDNA_H__
#define __REPLACEDNA_H__

#include "IDNA.h"
#include "../Libary/SharedPtr.h"
#include <iostream>
class ReplaceDNA: public IDNA
{
	public:
		ReplaceDNA(SharedPtr<IDNA> idna,size_t index,char c);
		Nucleotide operator[](size_t index)const;
		size_t get_m_length_seq() const;


	private:
		SharedPtr<IDNA>  m_Idna;
		size_t m_index;
		size_t m_char;

};


#endif // __REPLACEDNA_H__
