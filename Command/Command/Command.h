///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Interface Command
//  Created on:      13-11ÔÂ-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_2ACE8BEC_7EE1_4792_8F2D_37B2C4CD9615__INCLUDED_)
#define EA_2ACE8BEC_7EE1_4792_8F2D_37B2C4CD9615__INCLUDED_

class Command
{

public:
	Command() {

	}

	virtual ~Command() {

	}

	virtual void Execute() =0;

};
#endif // !defined(EA_2ACE8BEC_7EE1_4792_8F2D_37B2C4CD9615__INCLUDED_)
