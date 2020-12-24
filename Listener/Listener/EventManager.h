///////////////////////////////////////////////////////////
//  EventManager.h
//  Implementation of the Class EventManager
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_3829D8B5_C85D_4322_AEA4_06C1136EAF2C__INCLUDED_)
#define EA_3829D8B5_C85D_4322_AEA4_06C1136EAF2C__INCLUDED_

#include "Subscriber.h"
#include "def.h"
#include "vector"

class EventManager
{

public:
	EventManager();
	virtual ~EventManager();
	Subscriber *m_Subscriber;

	void addSubscriber(Subscriber* subscriber);
	void notify(std::string context);
	void removeOneSubscriber(Subscriber* ptrSubscriber);

private:
	std::vector<Subscriber*> m_vecListeners;

};
#endif // !defined(EA_3829D8B5_C85D_4322_AEA4_06C1136EAF2C__INCLUDED_)
