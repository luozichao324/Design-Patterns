///////////////////////////////////////////////////////////
//  D3GateFactory.h
//  Implementation of the Class D3GateFactory
//  Created on:      06-11ÔÂ-2020 19:07:01
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_18F00CAE_655D_4758_9515_30B6199241F2__INCLUDED_)
#define EA_18F00CAE_655D_4758_9515_30B6199241F2__INCLUDED_

#include "DeviceFactoryBase.h"

class D3GateFactory : public DeviceFactoryBase
{

public:
	D3GateFactory();
	virtual ~D3GateFactory();

	void createDevice();

};
#endif // !defined(EA_18F00CAE_655D_4758_9515_30B6199241F2__INCLUDED_)
