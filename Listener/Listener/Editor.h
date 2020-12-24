///////////////////////////////////////////////////////////
//  Editor.h
//  Implementation of the Class Editor
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_28AF2EDA_B076_4e33_BEFE_00A58987F485__INCLUDED_)
#define EA_28AF2EDA_B076_4e33_BEFE_00A58987F485__INCLUDED_

#include "EventManager.h"

class Editor
{

public:
	Editor();
	virtual ~Editor();
	EventManager *m_EventManager;

	void changedContext(std::string editorContext);

private:
	EventManager m_eventManager;

};
#endif // !defined(EA_28AF2EDA_B076_4e33_BEFE_00A58987F485__INCLUDED_)
