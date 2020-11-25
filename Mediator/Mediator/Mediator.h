///////////////////////////////////////////////////////////
//  Mediator.h
//  Implementation of the Class Mediator
//  Created on:      19-11��-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_8E1E32D4_C943_4d3f_9DA2_595E4DB691B2__INCLUDED_)
#define EA_8E1E32D4_C943_4d3f_9DA2_595E4DB691B2__INCLUDED_

#include "IdentifyInterface.h"
#include "GateDeviceInterface.h"
#include "def.h"

class Mediator
{

public:
	Mediator();
	virtual ~Mediator();

	Mediator(std::shared<GateDeviceInterface> gateDevice, std::shared<IdentifyInterface> identify);
	void identifyFailed(std::string channelId);
	void identifySuccessfully(std::string channelId, std::string userId);
	void notify(std::shared<ComponentInterface> sender, std::string event);

private:
	std::shared<GateDeviceInterface> m_gateDeviceInterface;
	std::shared<IdentifyInterface> m_identifyInterface;

};
#endif // !defined(EA_8E1E32D4_C943_4d3f_9DA2_595E4DB691B2__INCLUDED_)
