///////////////////////////////////////////////////////////
//  Command.h
//  Implementation of the Class Command
//  Created on:      24-12��-2020 18:41:34
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_12B14669_2461_410a_BCD5_4FBE84B29F30__INCLUDED_)
#define EA_12B14669_2461_410a_BCD5_4FBE84B29F30__INCLUDED_

#include "Editor.h"
#include "SnapShot.h"
#include "def.h"
#include <queue>
#include <stack>

class Command
{

public:
	Command();
	virtual ~Command();
	void init();

public:
	void makeBackup();
	void restore();

private:
	Editor* m_editor;
	
	std::stack<SnapShot*> m_snapShotStack;

};
#endif // !defined(EA_12B14669_2461_410a_BCD5_4FBE84B29F30__INCLUDED_)
