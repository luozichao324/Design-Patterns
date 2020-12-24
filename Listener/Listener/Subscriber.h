///////////////////////////////////////////////////////////
//  Subscriber.h
//  Implementation of the Interface Subscriber
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_762B849A_CD66_4f27_8B6B_D115BC9DD89F__INCLUDED_)
#define EA_762B849A_CD66_4f27_8B6B_D115BC9DD89F__INCLUDED_
#include "def.h"

class Subscriber
{

public:
	Subscriber() {

	}

	virtual ~Subscriber() {

	}

	virtual void update(std::string context) =0;

};
#endif // !defined(EA_762B849A_CD66_4f27_8B6B_D115BC9DD89F__INCLUDED_)
