#include "PairDNA.h"


PairDNA::PairDNA(IDNA *idna):m_Idna(idna)
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

/*std::ostream& PairDNA::operator<<(std::ostream& os,IDNA *dna)
{
	for(int i =0; i< m_Idna->get_m_length_seq(); ++i)
	{
		os << dna[i];
	}
	return os;
}*/
