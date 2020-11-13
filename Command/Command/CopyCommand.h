///////////////////////////////////////////////////////////
//  CopyCommand.h
//  Implementation of the Class CopyCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_4C85AFB5_34C3_4a66_8E51_8013682D6B2A__INCLUDED_)
#define EA_4C85AFB5_34C3_4a66_8E51_8013682D6B2A__INCLUDED_

#include "CommandBase.h"
#include "Editor.h"
#include "Def.h"

class CopyCommand : public CommandBase
{

public:
	CopyCommand();
	virtual ~CopyCommand();
	Editor *m_Editor;

	CopyCommand(const std::string& copyStr, Editor* editor);
	virtual void Execute();

private:
	std::string m_copyStr;
	Editor* m_editor;

};
#endif // !defined(EA_4C85AFB5_34C3_4a66_8E51_8013682D6B2A__INCLUDED_)
