///////////////////////////////////////////////////////////
//  WinUIFactory.h
//  Implementation of the Class WinUIFactory
//  Created on:      08-11ÔÂ-2020 11:57:39
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_692DCC9C_D723_43fc_917D_474A8A1A548C__INCLUDED_)
#define EA_692DCC9C_D723_43fc_917D_474A8A1A548C__INCLUDED_

#include "UIBaseFactory.h"
#include "Button.h"
#include "CheckBox.h"

class WinUIFactory : public UIBaseFactory
{

public:
	WinUIFactory();
	virtual ~WinUIFactory();

	virtual Button* createButton();
	virtual CheckBox* createCheckBox();

};
#endif // !defined(EA_692DCC9C_D723_43fc_917D_474A8A1A548C__INCLUDED_)
