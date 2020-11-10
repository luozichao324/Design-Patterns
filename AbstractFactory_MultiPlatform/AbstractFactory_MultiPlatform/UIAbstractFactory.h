///////////////////////////////////////////////////////////
//  UIAbstractFactory.h
//  Implementation of the Interface UIAbstractFactory
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_BE55FCE3_F9FD_4afd_8BDD_63671207B15C__INCLUDED_)
#define EA_BE55FCE3_F9FD_4afd_8BDD_63671207B15C__INCLUDED_

class UIAbstractFactory
{

public:
	UIAbstractFactory() {

	}

	virtual ~UIAbstractFactory() {

	}

	virtual Button* createButton() =0;
	virtual CheckBox* createCheckBox() =0;

};
#endif // !defined(EA_BE55FCE3_F9FD_4afd_8BDD_63671207B15C__INCLUDED_)
