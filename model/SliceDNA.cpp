#include "SliceDNA.h"


SliceDNA::SliceDNA(SharedPtr<IDNA> idna, size_t first, size_t last):m_Idna(idna),m_first(first),m_last(last)
{
}

Nucleotide SliceDNA::operator[](size_t index)const
{
	index = m_first + index;	
    return m_Idna->operator[](index);

}

size_t SliceDNA::get_m_length_seq() const
{
	return m_last - m_first;
}



