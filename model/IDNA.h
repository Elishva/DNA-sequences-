#ifndef __IDNA_H__
#define __IDNA_H__
#include "Nucleotide.h"
class IDNA
{
   public:
   virtual Nucleotide operator[](size_t index)const = 0;
   virtual size_t get_m_length_seq() const = 0;
};

#endif // __IDNA_H__
