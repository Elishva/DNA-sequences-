#include "PairDNA.h"

PairDNA::PairDNA(IDNA *idna):m_Idna(idna),m_length_seq()
{
}
Nucleotide PairDNA::operator[](size_t index)const
{
    return this->m_idna[index].get_pair();

}
size_t PairDNA::get_m_length_seq() const
{
	return m_idna->get_m_length_seq();
}
