///////////////////////////////////////////////////////////
//  Pannel.h
//  Implementation of the Class Pannel
//  Created on:      12-11ÔÂ-2020 11:20:31
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_46746BB1_D971_47d7_A858_AFECBBD1D2A1__INCLUDED_)
#define EA_46746BB1_D971_47d7_A858_AFECBBD1D2A1__INCLUDED_

#include "Button.h"

class Pannel : public Button
{

public:
	Pannel();
	virtual ~Pannel();

	virtual void display(std::string code);

};
#endif // !defined(EA_46746BB1_D971_47d7_A858_AFECBBD1D2A1__INCLUDED_)
