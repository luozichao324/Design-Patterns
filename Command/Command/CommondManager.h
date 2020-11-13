///////////////////////////////////////////////////////////
//  CommondManager.h
//  Implementation of the Class CommondManager
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_061378A7_02EC_4a48_84CD_9C1DE775DF2B__INCLUDED_)
#define EA_061378A7_02EC_4a48_84CD_9C1DE775DF2B__INCLUDED_

#include "Command.h"
#include <vector>
#include <Editor.h>
#include "Def.h"

#define MAX_COMMAND_COUNT 12


/**
 * Invoker(��������ߣ�������������壬�������������)
 */
class CommondManager
{

public:
	CommondManager();
	virtual ~CommondManager();

	void copy(std::string copyStr);
	void deleteStr(std::string deleteStr);
	void paste(std::string pasterStr);

	void setEditor(Editor* editor);

private:
	int m_commandMaxCount;
	std::vector<std::shared_ptr<Command>> m_commandVec;
	std::shared_ptr<Editor> m_editor;
	


};
#endif // !defined(EA_061378A7_02EC_4a48_84CD_9C1DE775DF2B__INCLUDED_)
