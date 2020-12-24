///////////////////////////////////////////////////////////
//  CloudListener.h
//  Implementation of the Class CloudListener
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_0F4411C6_2A8B_419b_B906_DCE4C8512C73__INCLUDED_)
#define EA_0F4411C6_2A8B_419b_B906_DCE4C8512C73__INCLUDED_

#include "SubscriberBase.h"
#include "def.h"

class CloudListener : public SubscriberBase
{

public:
	CloudListener();
	virtual ~CloudListener();

	virtual void update(std::string context);

};
#endif // !defined(EA_0F4411C6_2A8B_419b_B906_DCE4C8512C73__INCLUDED_)
