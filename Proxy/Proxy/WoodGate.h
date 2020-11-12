///////////////////////////////////////////////////////////
//  WoodGate.h
//  Implementation of the Class WoodGate
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_DE6FDD42_0CC5_4acc_B24F_F6B556608400__INCLUDED_)
#define EA_DE6FDD42_0CC5_4acc_B24F_F6B556608400__INCLUDED_

#include "GateBase.h"

class WoodGate : public GateBase
{

public:
	WoodGate();
	virtual ~WoodGate();

	virtual std::string getDoorInfo();
	virtual void openDoor();

};
#endif // !defined(EA_DE6FDD42_0CC5_4acc_B24F_F6B556608400__INCLUDED_)
