///////////////////////////////////////////////////////////
//  UIBaseFactory.h
//  Implementation of the Class UIBaseFactory
//  Created on:      08-11ÔÂ-2020 11:57:39
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_35E55487_7571_4aa8_B616_44DB848EA117__INCLUDED_)
#define EA_35E55487_7571_4aa8_B616_44DB848EA117__INCLUDED_

#include "UIAbstractFactory.h"

class UIBaseFactory : public UIAbstractFactory
{

public:
	UIBaseFactory();
	virtual ~UIBaseFactory();

	virtual Button* createButton();
	virtual CheckBox* createCheckBox();

};
#endif // !defined(EA_35E55487_7571_4aa8_B616_44DB848EA117__INCLUDED_)
