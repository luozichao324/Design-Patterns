///////////////////////////////////////////////////////////
//  GateDevice.h
//  Implementation of the Class GateDevice
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_30380616_1FD7_43dd_AD1E_0EB9F1CFDECF__INCLUDED_)
#define EA_30380616_1FD7_43dd_AD1E_0EB9F1CFDECF__INCLUDED_

class GateDevice
{

public:
	GateDevice();
	virtual ~GateDevice();

	bool openDoor(std::string channelId);
	void passStatus();

};
#endif // !defined(EA_30380616_1FD7_43dd_AD1E_0EB9F1CFDECF__INCLUDED_)
