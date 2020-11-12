///////////////////////////////////////////////////////////
//  GateMachine.h
//  Implementation of the Interface GateMachine
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_CB0F0D3A_5F2A_432d_9830_F5D320375218__INCLUDED_)
#define EA_CB0F0D3A_5F2A_432d_9830_F5D320375218__INCLUDED_

class GateMachine
{

public:
	GateMachine() {

	}

	virtual ~GateMachine() {

	}

	virtual std::string getDoorInfo() =0;
	virtual void openDoor() =0;

};
#endif // !defined(EA_CB0F0D3A_5F2A_432d_9830_F5D320375218__INCLUDED_)
