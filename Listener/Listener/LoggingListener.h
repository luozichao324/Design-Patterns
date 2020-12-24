///////////////////////////////////////////////////////////
//  LoggingListener.h
//  Implementation of the Class LoggingListener
//  Created on:      24-12ÔÂ-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_F69C08CD_A992_439f_A232_4227FBE35592__INCLUDED_)
#define EA_F69C08CD_A992_439f_A232_4227FBE35592__INCLUDED_

#include "SubscriberBase.h"

class LoggingListener : public SubscriberBase
{

public:
	LoggingListener();
	virtual ~LoggingListener();

	virtual void update(std::string context);

};
#endif // !defined(EA_F69C08CD_A992_439f_A232_4227FBE35592__INCLUDED_)
