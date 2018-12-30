#ifndef DNASEQ_DNAWRITER_H
#define DNASEQ_DNAWRITER_H

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


#endif //DNASEQ_DNAWRITER_H
