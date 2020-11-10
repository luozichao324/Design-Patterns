///////////////////////////////////////////////////////////
//  D3Gate.h
//  Implementation of the Class D3Gate
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_95E45520_4BF6_420f_AA97_5ED925550CF8__INCLUDED_)
#define EA_95E45520_4BF6_420f_AA97_5ED925550CF8__INCLUDED_

#include "GateDevice.h"

class D3Gate : public GateDevice
{

public:
	D3Gate();
	virtual ~D3Gate();

	bool openDoor(std::string channelId);
	void passStatus();

};
#endif // !defined(EA_95E45520_4BF6_420f_AA97_5ED925550CF8__INCLUDED_)
