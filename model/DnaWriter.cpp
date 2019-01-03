#include <iostream>

#include "DnaWriter.h"
DnaWriter::DnaWriter(const char* file_name)
{

    try {
         m_write.open(file_name);
        
    }catch (std::exception e){
        throw std::runtime_error("Error!! could not open file for write.");
        std::cout << e.what();
    }
}

DnaWriter::~DnaWriter()
{
    m_write.close();
}

void DnaWriter::write(const DNA& dna)
{
    m_write << dna;
}

