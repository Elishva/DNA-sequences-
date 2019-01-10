#include "DNA_AND_DATA.h"
#include "cstring"
#include <sstream>
#include <algorithm>    // std::min


size_t DnaAndData::count_id = 1;

DnaAndData::DnaAndData(IDNA *dna, const char* name):m_id(count_id++), m_name(name), m_status(NEW), m_DNA(dna)
{
	//std::cout << name;	
}

DnaAndData::~DnaAndData()
{	
}

void DnaAndData::set_status(Status s)
{
	m_status = s;
}
	
size_t DnaAndData::get_id()
{
	return m_id;
}

IDNA * DnaAndData::getIDNA()
{
	return m_DNA;
}


std::string DnaAndData::get_DNA(size_t index)
{
    std::stringstream ss;
    size_t len = std::min(index, m_DNA->get_m_length_seq());
    for( int i = 0; i < len; ++i)
    {
       ss << (*m_DNA)[i];


    }
	return ss.str();
}

std::string DnaAndData::get_name()
{
	return m_name;
}

Status DnaAndData::get_status()
{
	return m_status;
}


