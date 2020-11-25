///////////////////////////////////////////////////////////
//  GateDevice.h
//  Implementation of the Class GateDevice
//  Created on:      19-11��-2020 11:34:51
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_BD2A5E44_A206_4852_A470_84B4D3393E4B__INCLUDED_)
#define EA_BD2A5E44_A206_4852_A470_84B4D3393E4B__INCLUDED_

#include "GateDeviceInterface.h"
#include "def.h"

class GateDevice : public GateDeviceInterface
{

public:
	GateDevice();
	virtual ~GateDevice();

	virtual void forbidStatus(std::string channelId);
	virtual void passStatus(std::string channelId, std::string userId);

};
#endif // !defined(EA_BD2A5E44_A206_4852_A470_84B4D3393E4B__INCLUDED_)
