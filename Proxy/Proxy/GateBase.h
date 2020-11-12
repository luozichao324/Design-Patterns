///////////////////////////////////////////////////////////
//  GateBase.h
//  Implementation of the Class GateBase
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_9305CB08_7EE8_4f78_B18A_73F8AD6DCCA3__INCLUDED_)
#define EA_9305CB08_7EE8_4f78_B18A_73F8AD6DCCA3__INCLUDED_

#include "GateMachine.h"

class GateBase : public GateMachine
{

public:
	GateBase();
	virtual ~GateBase();

	virtual std::string getDoorInfo();
	virtual void openDoor();

private:
	std::string m_info;

};
#endif // !defined(EA_9305CB08_7EE8_4f78_B18A_73F8AD6DCCA3__INCLUDED_)
