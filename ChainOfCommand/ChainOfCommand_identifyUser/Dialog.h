///////////////////////////////////////////////////////////
//  Dialog.h
//  Implementation of the Class Dialog
//  Created on:      12-11ÔÂ-2020 11:20:31
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_2C7CF9CB_D1BE_441a_A6EA_5C0F2281526C__INCLUDED_)
#define EA_2C7CF9CB_D1BE_441a_A6EA_5C0F2281526C__INCLUDED_

#include "Pannel.h"

class Dialog : public Pannel
{

public:
	Dialog();
	virtual ~Dialog();

	virtual void display(std::string code);

};
#endif // !defined(EA_2C7CF9CB_D1BE_441a_A6EA_5C0F2281526C__INCLUDED_)
