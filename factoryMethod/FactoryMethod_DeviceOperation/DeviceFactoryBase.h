///////////////////////////////////////////////////////////
//  DeviceFactoryBase.h
//  Implementation of the Class DeviceFactoryBase
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_03195235_091D_411d_9C70_6039B0272A35__INCLUDED_)
#define EA_03195235_091D_411d_9C70_6039B0272A35__INCLUDED_

#include "DeviceFacotry.h"
#include "GateDevice.h"

class DeviceFactoryBase : public DeviceFacotry
{

public:
	DeviceFactoryBase();
	virtual ~DeviceFactoryBase();

	void createDevice();
	bool openDoor(std::string channelId);
	void passStatus();

private:
	GateDevice* m_gateDevice;

};
#endif // !defined(EA_03195235_091D_411d_9C70_6039B0272A35__INCLUDED_)
