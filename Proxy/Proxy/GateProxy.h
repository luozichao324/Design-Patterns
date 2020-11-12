///////////////////////////////////////////////////////////
//  GateProxy.h
//  Implementation of the Class GateProxy
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_6C03978A_7373_4dde_9E2B_6ABB81029FEF__INCLUDED_)
#define EA_6C03978A_7373_4dde_9E2B_6ABB81029FEF__INCLUDED_

#include "GateBase.h"
#include "GateMachine.h"

class GateProxy : public GateBase
{

public:
	GateProxy();
	virtual ~GateProxy();
	GateMachine *m_GateMachine;

	GateProxy(GateMachine* gateMachine);
	virtual std::string getDoorInfo();
	virtual void openDoor();

private:
	GateMachine* m_gateMachine;

};
#endif // !defined(EA_6C03978A_7373_4dde_9E2B_6ABB81029FEF__INCLUDED_)
