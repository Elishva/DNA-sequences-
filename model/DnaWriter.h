#ifndef __DNAWRITER_H__
#define __DNAWRITER_H__

#include "DNA.h"
#include <fstream>
class DnaWriter {
private:
    std::ofstream m_write;

public:
    DnaWriter(const char* file_name);
    ~DnaWriter();
    void write(const DNA& dna);


};


#endif //__DNAWRITER_H__
