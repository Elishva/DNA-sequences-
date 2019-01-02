#ifndef __DNA_AND_DATA__H
#define __DNA_AND_DATA__H

#include "DNA.h"
#include <cstddef>

enum Status{NEW, UPTODATE, MODIFIED};
class DnaAndData
{
public:
	DnaAndData(DNA* dna, const char * name);
	~DnaAndData();
	
	void set_status(Status s);
	
	size_t get_id();
	std::string get_DNA(size_t index);
        std::string get_DNA();
	std::string get_name();
	Status get_status();
	
private:
	
	size_t m_id;
	std::string m_name;
	Status m_status;
	DNA * m_DNA;

	static size_t count_id; 
};
#endif  // __DNA_AND_DATA__H 
