
#include "DnaReader.h"
DnaReader::DnaReader(char* file_name)
{
    m_reader.open(file_name);
    if (!m_reader.is_open())
    {
        throw std::runtime_error("Error!! could not open file for read.");
    }
}

DnaReader::~DnaReader()
{
    m_reader.close();
}

IDNA* DnaReader::read()
{
    size_t size = m_reader.tellg();
    char* txt = new char[size];
    //m_read.read (txt, size);
    while (!m_reader.eof())
        m_reader >> txt;

    m_reader.seekg (0, std::fstream::beg);
    IDNA* d = new DNA(txt);
    delete[]txt;
    return d;
}
