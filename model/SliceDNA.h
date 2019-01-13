#ifndef __SLICEDNA_H__
#define __SLICEDNA_H__

#include "IDNA.h"
#include "../Libary/SharedPtr.h"
#include <iostream>

class SliceDNA: public IDNA
{
	public:
		SliceDNA(SharedPtr<IDNA> idna,size_t first,size_t last);
		Nucleotide operator[](size_t index)const;
		size_t get_m_length_seq() const;
		//std::ostream& operator<<(std::ostream& os,IDNA * dna);

	private:
		SharedPtr<IDNA>  m_Idna;
		size_t m_first;
		size_t m_last;

};


#endif // __SLICEDNA_H__
