///////////////////////////////////////////////////////////
//  MacButton.h
//  Implementation of the Class MacButton
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_C27C9EE2_0A3E_4d44_B48E_63A1DF2A1744__INCLUDED_)
#define EA_C27C9EE2_0A3E_4d44_B48E_63A1DF2A1744__INCLUDED_

#include "ButtonBase.h"

class MacButton : public ButtonBase
{

public:
	MacButton();
	virtual ~MacButton();

	virtual bool onClick()();

};
#endif // !defined(EA_C27C9EE2_0A3E_4d44_B48E_63A1DF2A1744__INCLUDED_)
