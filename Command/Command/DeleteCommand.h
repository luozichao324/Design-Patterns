///////////////////////////////////////////////////////////
//  DeleteCommand.h
//  Implementation of the Class DeleteCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_748039C4_A52B_4591_968D_70B923AFE97C__INCLUDED_)
#define EA_748039C4_A52B_4591_968D_70B923AFE97C__INCLUDED_

#include "CommandBase.h"
#include "Editor.h"
#include "Def.h"

class DeleteCommand : public CommandBase
{

public:
	DeleteCommand();
	virtual ~DeleteCommand();
	Editor *m_Editor;

	DeleteCommand(Editor* editor, const std::string& deleteStr);
	virtual void Execute();

private:
	std::string m_deleteStr;
	Editor* m_editor;

};
#endif // !defined(EA_748039C4_A52B_4591_968D_70B923AFE97C__INCLUDED_)
