#ifndef __PAIRDNA_H__
#define __PAIRDNA_H__

#include "IDNA.h"
#include "../Libary/SharedPtr.h"
#include <iostream>
class PairDNA: public IDNA
{
	public:
		PairDNA(SharedPtr<IDNA> idna);
		Nucleotide operator[](size_t index)const;
		size_t get_m_length_seq() const;


	private:
		SharedPtr<IDNA>  m_Idna;

};


#endif // __PAIRDNA_H__
