///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      12-11ÔÂ-2020 14:46:34
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_F0FF7057_D2E8_45dc_A4E3_CF5C02FC6612__INCLUDED_)
#define EA_F0FF7057_D2E8_45dc_A4E3_CF5C02FC6612__INCLUDED_

#include "GateMachine.h"
#include "GateProxy.h"

class Client
{

public:
	Client();
	virtual ~Client();
	GateMachine *m_GateMachine;
	GateProxy *m_GateProxy;

	std::string getDoorInfo()();
	void initGateMachine();
	void openDoor();

private:
	GateMachine* m_gateMachine;
	GateProxy* m_gateProxy;

};
#endif // !defined(EA_F0FF7057_D2E8_45dc_A4E3_CF5C02FC6612__INCLUDED_)
