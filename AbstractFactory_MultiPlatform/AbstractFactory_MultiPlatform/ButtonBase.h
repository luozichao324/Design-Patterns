///////////////////////////////////////////////////////////
//  ButtonBase.h
//  Implementation of the Class ButtonBase
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_D2D75CD0_D600_44a3_B097_A4493493DDBB__INCLUDED_)
#define EA_D2D75CD0_D600_44a3_B097_A4493493DDBB__INCLUDED_

#include "Button.h"

class ButtonBase : public Button
{

public:
	ButtonBase();
	virtual ~ButtonBase();

	virtual bool onClick()();

};
#endif // !defined(EA_D2D75CD0_D600_44a3_B097_A4493493DDBB__INCLUDED_)
