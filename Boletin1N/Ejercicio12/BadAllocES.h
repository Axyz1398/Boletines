#ifndef _CABECERA_H_
#define _CABECERA_H_

#include <iostream>
using namespace std;

class BadAllocES : public std::bad_alloc
{
private:
	string MensajeError;
public:
	const char* what() const noexcept 
	{
		return "Error: tipoBadAllocException";
	}
};

#endif
