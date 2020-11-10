///////////////////////////////////////////////////////////
//  MacUIFactory.h
//  Implementation of the Class MacUIFactory
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_A16A139B_04A0_4e64_85FD_09EE12249514__INCLUDED_)
#define EA_A16A139B_04A0_4e64_85FD_09EE12249514__INCLUDED_

#include "UIBaseFactory.h"
#include "Button.h"
#include "CheckBox.h"

class MacUIFactory : public UIBaseFactory
{

public:
	MacUIFactory();
	virtual ~MacUIFactory();

	virtual Button* createButton();
	virtual CheckBox* createCheckBox();

};
#endif // !defined(EA_A16A139B_04A0_4e64_85FD_09EE12249514__INCLUDED_)
