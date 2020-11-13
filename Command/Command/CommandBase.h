///////////////////////////////////////////////////////////
//  CommandBase.h
//  Implementation of the Class CommandBase
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B035EFE0_99B5_4e3a_943B_029CCB3771BD__INCLUDED_)
#define EA_B035EFE0_99B5_4e3a_943B_029CCB3771BD__INCLUDED_

#include "Command.h"

class CommandBase : public Command
{

public:
	CommandBase();
	virtual ~CommandBase();

	virtual void Execute();

};
#endif // !defined(EA_B035EFE0_99B5_4e3a_943B_029CCB3771BD__INCLUDED_)
