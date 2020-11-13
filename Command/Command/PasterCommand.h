///////////////////////////////////////////////////////////
//  PasterCommand.h
//  Implementation of the Class PasterCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_7F09BE08_1852_489b_98AC_BC045A6CCB66__INCLUDED_)
#define EA_7F09BE08_1852_489b_98AC_BC045A6CCB66__INCLUDED_

#include "CommandBase.h"
#include "Editor.h"

#include "Def.h"

class PasterCommand : public CommandBase
{

public:
	PasterCommand();
	virtual ~PasterCommand();
	Editor *m_Editor;

	PasterCommand(Editor* editor, const std::string& pasteStr);
	virtual void Execute();

private:
	Editor* m_editor;
	std::string m_pasteStr;

};
#endif // !defined(EA_7F09BE08_1852_489b_98AC_BC045A6CCB66__INCLUDED_)
