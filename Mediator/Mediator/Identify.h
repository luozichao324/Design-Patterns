///////////////////////////////////////////////////////////
//  Identify.h
//  Implementation of the Class Identify
//  Created on:      19-11ÔÂ-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_F774DA60_E2A5_4f49_8A3F_A57872732578__INCLUDED_)
#define EA_F774DA60_E2A5_4f49_8A3F_A57872732578__INCLUDED_

#include "IdentifyInterface.h"

class Identify : public IdentifyInterface
{

public:
	Identify();
	virtual ~Identify();

	virtual void identifyFailed(std::string channelId);
	virtual void identifySuccessfully(std::string channelId, std::string userId);

};
#endif // !defined(EA_F774DA60_E2A5_4f49_8A3F_A57872732578__INCLUDED_)
