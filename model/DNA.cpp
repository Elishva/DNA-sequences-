#include <cassert>
#include <cstring>
#include "DNA.h"



std::ostream &operator<<(std::ostream& os, const DNA::Nucleotide& n)
{
    os << n.get_m_nucleotide();
    return os;
}

inline bool is_valid_length(const size_t len)
{
    return (!(len % 3 && len != 0) );
}

Nucleotide* DNA::valid_sequence(const char* c)
{
    size_t len = strlen(c);//assertion
    if (!is_valid_length(len)){
        throw "Erorr! invalid DNA sequence.";
    }

    Nucleotide* temp = new Nucleotide[len];
    try{
        for(size_t i = 0; i <  len; i++) {
            temp[i] = (c[i]);
        }
    }catch (char* error){
        delete[](temp);
        throw error;
    }
    return temp;
}


DNA::DNA(const char* c)
{
    m_seq = valid_sequence(c);
    m_length_seq = strlen(c);

}

DNA::DNA(const std::string& seq)
{
    m_seq = valid_sequence(seq.c_str());
    m_length_seq = seq.length();
}

DNA::DNA(const DNA& other, size_t from, size_t to)
{
    if (from > to || to > m_length_seq ){
        throw std::out_of_range("slice");
    }
    size_t len = to - from;
    m_seq = new Nucleotide[len];
    for (size_t i = from, j = 0; i < to; ++i, ++j)
    {
        m_seq[j] = other.m_seq[i];
    }
    m_length_seq = len;
}

DNA::DNA(const DNA& other):m_length_seq(other.m_length_seq)
{
    m_seq = new Nucleotide[m_length_seq];
    for (size_t i = 0; i < m_length_seq; i++)
    {
        m_seq[i] = other.m_seq[i];
    }
}

DNA::~DNA()
{
    delete[](m_seq);
}

Nucleotide* DNA::get_m_seq() const
{
    return m_seq;
}

size_t DNA::get_m_length_seq() const
{
    return m_length_seq;
}

DNA& DNA::operator=(const DNA& other)
{
    Nucleotide* temp = new Nucleotide[m_length_seq];
    for (size_t i = 0; i < m_length_seq; i++)
    {
        temp[i] = other.m_seq[i];
    }
    delete[](this->m_seq);
    m_seq = temp;
    m_length_seq = other.m_length_seq;
    return *this;
}

DNA& DNA::operator=(const char* c)
{
    Nucleotide* temp = valid_sequence(c);
    delete[](this->m_seq);
    m_seq = temp;
    m_length_seq = strlen(c);
    return *this;
}

DNA& DNA::operator=(const std::string& s)
{
    return *this = s.c_str();
}

/*
std::ostream &operator<<(std::ostream& os, const DNA& data)
{
    for (size_t i = 0; i < data.m_length_seq ; ++i)
    {
        os << data.m_seq[i];
    }
    return os;
}
*/

/*
bool DNA::operator!=(const DNA& other)const
{
    return !(*this == other);
}
*/
/*
DNA::Nucleotide DNA::operator[](size_t index)const
{
    return this->m_seq[index];
}

DNA::Nucleotide DNA::operator[](size_t index)
{
    return this->m_seq[index];
}
*/
DNA DNA::get_slice(size_t from, size_t to)
{
    return DNA(*this, from, to);
}

/*
DNA DNA::get_pair()
{
    DNA temp(*this);
    for (size_t i = 0; i < m_length_seq; ++i)
    {
        temp[i] = m_seq[m_length_seq - i - 1].get_pair();
    }
    return temp;
}
*/



