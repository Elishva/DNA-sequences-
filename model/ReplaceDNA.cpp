#include "ReplaceDNA.h"


ReplaceDNA::ReplaceDNA(SharedPtr<IDNA> idna):m_Idna(idna)
{
}

Nucleotide ReplaceDNA::operator[](size_t index)const
{
    return m_Idna->operator[](index).get_pair();

}

size_t ReplaceDNA::get_m_length_seq() const
{
	return m_Idna->get_m_length_seq();
}



