///////////////////////////////////////////////////////////
//  LinuxUIFactory.h
//  Implementation of the Class LinuxUIFactory
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_8DF01193_33B6_4911_9DC4_057018B06B8E__INCLUDED_)
#define EA_8DF01193_33B6_4911_9DC4_057018B06B8E__INCLUDED_

#include "UIBaseFactory.h"
#include "Button.h"
#include "CheckBox.h"

class LinuxUIFactory : public UIBaseFactory
{

public:
	LinuxUIFactory();
	virtual ~LinuxUIFactory();

	virtual Button* createButton();
	virtual CheckBox* createCheckBox();

};
#endif // !defined(EA_8DF01193_33B6_4911_9DC4_057018B06B8E__INCLUDED_)
