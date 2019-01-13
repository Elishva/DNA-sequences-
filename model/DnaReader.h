

#ifndef DNASEQ_DNAREADER_H
#define DNASEQ_DNAREADER_H

#include "DNA.h"
#include "fstream"

class DnaReader {
private:
    std::ifstream m_reader;
public:
    DnaReader(char* file_name);
    ~DnaReader();
    IDNA* read();
};


#endif //DNASEQ_DNAREADER_H
