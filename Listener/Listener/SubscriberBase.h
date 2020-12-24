///////////////////////////////////////////////////////////
//  SubscriberBase.h
//  Implementation of the Class SubscriberBase
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_CDB4D390_3ED9_4b51_957B_1799258E5BA5__INCLUDED_)
#define EA_CDB4D390_3ED9_4b51_957B_1799258E5BA5__INCLUDED_

#include "Subscriber.h"

class SubscriberBase : public Subscriber
{

public:
	SubscriberBase();
	virtual ~SubscriberBase();

	virtual void update(std::string context);

};
#endif // !defined(EA_CDB4D390_3ED9_4b51_957B_1799258E5BA5__INCLUDED_)
