#include "Nucleotide.h"

Nucleotide::Nucleotide(const Nucleotide& other)
{
    this->m_nucleotide = other.m_nucleotide;
}

Nucleotide Nucleotide::get_pair()
{
    char comp = 'A';
    switch (m_nucleotide)
    {
        case 'A':
            comp = 'T';
            break;
        case 'T':
            comp = 'A';
            break;
        case 'C':
            comp = 'G';
            break;
        case 'G':
            comp = 'C';
            break;
        default:
            //assert();
            break;
    }
    return Nucleotide(comp);
}




char Nucleotide::get_m_nucleotide()const
{
    return m_nucleotide;
}

Nucleotide& Nucleotide::operator=(const Nucleotide& other)
{
    this->m_nucleotide = other.m_nucleotide;
	return *this;
}

bool Nucleotide::operator==(const Nucleotide& other)const
{
    return m_nucleotide == other.m_nucleotide;
}


std::ostream &operator<<(std::ostream& os, const Nucleotide& n)
{
    os << n.get_m_nucleotide();
    return os;
}
