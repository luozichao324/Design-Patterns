///////////////////////////////////////////////////////////
//  IronGate.h
//  Implementation of the Class IronGate
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_0432D64A_ECDD_4500_A449_80365B1F7E81__INCLUDED_)
#define EA_0432D64A_ECDD_4500_A449_80365B1F7E81__INCLUDED_

#include "GateBase.h"

class IronGate : public GateBase
{

public:
	IronGate();
	virtual ~IronGate();

	virtual std::string getDoorInfo();
	virtual void openDoor();

};
#endif // !defined(EA_0432D64A_ECDD_4500_A449_80365B1F7E81__INCLUDED_)
