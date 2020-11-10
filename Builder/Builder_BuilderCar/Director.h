///////////////////////////////////////////////////////////
//  Director.h
//  Implementation of the Class Director
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_DC760D9D_5F6D_41b5_BC42_D14ECF908D21__INCLUDED_)
#define EA_DC760D9D_5F6D_41b5_BC42_D14ECF908D21__INCLUDED_

#include "Builder.h"

class Director
{

public:
	Director();
	virtual ~Director();

	void makeSportsCar(Builder* builder);
	void makeSUV(Builder* builder);

};
#endif // !defined(EA_DC760D9D_5F6D_41b5_BC42_D14ECF908D21__INCLUDED_)
