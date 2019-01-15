#include "ReplaceDNA.h"


ReplaceDNA::ReplaceDNA(SharedPtr<IDNA> idna,size_t index,char c):m_Idna(idna),m_index(index),m_char(c)
{
}

Nucleotide ReplaceDNA::operator[](size_t index)const
{
	if (index == m_index)
		return m_Idna->operator[](index).set_m_nucleotide(m_char);
	return m_Idna->operator[](index);


}

size_t ReplaceDNA::get_m_length_seq() const
{
	return m_Idna->get_m_length_seq();
}



