#include "DNA_AND_DATA.h"
#include "cstring"
size_t DnaAndData::count_id = 1;
DnaAndData::DnaAndData( DNA *dna, const char* name):m_id(count_id++), m_name(name), m_status(NEW), m_DNA(dna)
{	
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

DNA& DnaAndData::get_DNA()
{
	return *m_DNA;
}

std::string DnaAndData::get_name()
{
	return m_name;
}

Status DnaAndData::get_status()
{
	return m_status;
}


