
#ifndef DNASEQ_DNA_H
#define DNASEQ_DNA_H
#include <iostream>
#include "IDNA.h"
class DNA: public IDNA {

    
public:
    explicit DNA(const char* seq);
    explicit DNA(const std::string& seq);
    DNA(const DNA& other);
    ~DNA();


    DNA& operator=(const DNA& data);


    Nucleotide operator[](size_t index)const;
    
    friend std::ostream &operator<<(std::ostream& os,  const DNA& data);

    size_t get_m_length_seq() const;
    //DNA get_slice(size_t from, size_t to);
    //DNA get_pair();

private:
    DNA(const DNA& other, size_t from, size_t to);

    Nucleotide* m_seq;
    size_t m_length_seq;
    Nucleotide* valid_sequence(const char* c);


};

/*
inline DNA::Nucleotide::Nucleotide() : m_nucleotide('A')
{}

inline DNA::Nucleotide::Nucleotide(char c) : m_nucleotide(valid_nucleotide(upper(c)))
{}

inline char DNA::Nucleotide::valid_nucleotide(const char nucleotide)
{
    if(nucleotide == 'A' or nucleotide == 'C' or nucleotide == 'T' or nucleotide == 'G')
        return nucleotide;
    throw "Error!! The nucleodite is not valid.";
}

inline char DNA::Nucleotide::upper(char c)
{
    size_t temp = 'A' - 'a';
    if (c >= 'a' && c <= 'z') {
        c = char(c+ temp);
    }
    return c;
}
*/
#endif //DNASEQ_DNA_H
