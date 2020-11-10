///////////////////////////////////////////////////////////
//  AppleGate.h
//  Implementation of the Class AppleGate
//  Created on:      06-11ÔÂ-2020 19:07:00
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_C08B04B4_62D4_44ac_96AA_09FF8832961E__INCLUDED_)
#define EA_C08B04B4_62D4_44ac_96AA_09FF8832961E__INCLUDED_

#include "GateDevice.h"

class AppleGate : public GateDevice
{

public:
	AppleGate();
	virtual ~AppleGate();

	bool openDoor(std::string channelId);
	void passStatus();

};
#endif // !defined(EA_C08B04B4_62D4_44ac_96AA_09FF8832961E__INCLUDED_)
