#ifndef __PAIRDNA_H__
#define __PAIRDNA_H__

#include "IDNA.h"
class PairDNA: public IDNA
{
	public:
		PairDNA(IDNA * idna);
		Nucleotide operator[](size_t index)const;
		size_t get_m_length_seq() const;

	private:
		IDNA * m_Idna;

};


#endif // __PAIRDNA_H__
