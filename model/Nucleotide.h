#ifndef __NUCLEOTIDE_H__
#define __NUCLEOTIDE_H__
#include <iostream>
class Nucleotide
{ 
public:
    Nucleotide();
    Nucleotide(char nucleotide);
    Nucleotide(const Nucleotide& other);
    Nucleotide& operator=(const Nucleotide& n);
    bool operator==(const Nucleotide& other)const;
    //operator char(){ return m_nucleotide; };
    char upper(char c);
    char valid_nucleotide(const char nucleotide);
    Nucleotide get_pair();
    char get_m_nucleotide()const;
    friend std::ostream &operator<<(std::ostream& os, const Nucleotide& n);
private:
    char m_nucleotide;
};

inline Nucleotide::Nucleotide() : m_nucleotide('A')
{}

inline Nucleotide::Nucleotide(char c) : m_nucleotide(valid_nucleotide(upper(c)))
{}

inline char Nucleotide::valid_nucleotide(const char nucleotide)
{
    if(nucleotide == 'A' or nucleotide == 'C' or nucleotide == 'T' or nucleotide == 'G')
        return nucleotide;//to h
    throw "Error!! The nucleodite is not valid.";
}

inline char Nucleotide::upper(char c)
{
    int temp = 'A' - 'a';
    if (c >= 'a' && c <= 'z') {
        c = char(c + temp);
    }
    return c;
}
#endif
