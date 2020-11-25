///////////////////////////////////////////////////////////
//  IdentifyInterface.h
//  Implementation of the Interface IdentifyInterface
//  Created on:      19-11��-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_01BEBE53_77A8_4f16_8805_9BE894001402__INCLUDED_)
#define EA_01BEBE53_77A8_4f16_8805_9BE894001402__INCLUDED_

#include "ComponentInterface.h"
#include "Mediator.h"
#include "def.h"

class IdentifyInterface : public ComponentInterface
{

public:
	IdentifyInterface() {

	}

	virtual ~IdentifyInterface() {

	}
	Mediator *m_Mediator;

	virtual void identifyFailed(std::string channelId) =0;
	virtual void identifySuccessfully(std::string channelId, std::string userId) =0;

protected:
	std::shared<Mediator> m_mediator;

};
#endif // !defined(EA_01BEBE53_77A8_4f16_8805_9BE894001402__INCLUDED_)
