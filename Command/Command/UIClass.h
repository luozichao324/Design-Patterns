///////////////////////////////////////////////////////////
//  UIClass.h
//  Implementation of the Class UIClass
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_2931462E_C7EE_46b1_92E0_A322AF364A88__INCLUDED_)
#define EA_2931462E_C7EE_46b1_92E0_A322AF364A88__INCLUDED_

#include "CommondManager.h"
#include "Editor.h"
#include "Def.h"

class UIClass
{

public:
	UIClass();
	virtual ~UIClass();
	CommondManager *m_CommondManager;

	void UICopy(const std::string& copyStr);
	void UIDelete(const std::string& deleteStr);
	void UIPaste(const std::string& pasteStr);
private:
	void init();

private:
	CommondManager* m_commandManager;
	std::shared_ptr<Editor> m_editor;

};
#endif // !defined(EA_2931462E_C7EE_46b1_92E0_A322AF364A88__INCLUDED_)
