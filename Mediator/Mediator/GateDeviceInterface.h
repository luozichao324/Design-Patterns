///////////////////////////////////////////////////////////
//  GateDeviceInterface.h
//  Implementation of the Interface GateDeviceInterface
//  Created on:      19-11ÔÂ-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B504804B_0B2F_405b_A50F_8014FF4B7ED6__INCLUDED_)
#define EA_B504804B_0B2F_405b_A50F_8014FF4B7ED6__INCLUDED_

#include "ComponentInterface.h"
#include "Mediator.h"

class GateDeviceInterface : public ComponentInterface
{

public:
	GateDeviceInterface() {

	}

	virtual ~GateDeviceInterface() {

	}
	Mediator *m_Mediator;

	virtual void forbidStatus(std::string channelId) =0;
	virtual void passStatus(std::string channelId, std::string userId) =0;

};
#endif // !defined(EA_B504804B_0B2F_405b_A50F_8014FF4B7ED6__INCLUDED_)
