///////////////////////////////////////////////////////////
//  WinButton.h
//  Implementation of the Class WinButton
//  Created on:      08-11ÔÂ-2020 11:57:39
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_4CD5B166_D239_4e66_938B_8C3415DE34F6__INCLUDED_)
#define EA_4CD5B166_D239_4e66_938B_8C3415DE34F6__INCLUDED_

#include "ButtonBase.h"

class WinButton : public ButtonBase
{

public:
	WinButton();
	virtual ~WinButton();

	virtual bool onClick()();

};
#endif // !defined(EA_4CD5B166_D239_4e66_938B_8C3415DE34F6__INCLUDED_)
