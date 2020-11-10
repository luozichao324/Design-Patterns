///////////////////////////////////////////////////////////
//  AppleGateFactory.h
//  Implementation of the Class AppleGateFactory
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_E31A0212_5E61_4e73_BB93_53C7D2EBDF45__INCLUDED_)
#define EA_E31A0212_5E61_4e73_BB93_53C7D2EBDF45__INCLUDED_

#include "DeviceFactoryBase.h"

class AppleGateFactory : public DeviceFactoryBase
{

public:
	AppleGateFactory();
	virtual ~AppleGateFactory();

	void createDevice();

};
#endif // !defined(EA_E31A0212_5E61_4e73_BB93_53C7D2EBDF45__INCLUDED_)
