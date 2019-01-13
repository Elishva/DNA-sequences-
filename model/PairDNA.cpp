#include "PairDNA.h"


PairDNA::PairDNA(SharedPtr<IDNA> idna):m_Idna(idna)
{
}

Nucleotide PairDNA::operator[](size_t index)const
{
    return m_Idna->operator[](index).get_pair();

}

size_t PairDNA::get_m_length_seq() const
{
	return m_Idna->get_m_length_seq();
}



