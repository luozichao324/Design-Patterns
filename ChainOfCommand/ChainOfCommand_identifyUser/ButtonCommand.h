///////////////////////////////////////////////////////////
//  ButtonCommand.h
//  Implementation of the Class ButtonCommand
//  Created on:      12-11ÔÂ-2020 11:20:30
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_99CEB34A_3867_4f24_94FA_6A476EAC6370__INCLUDED_)
#define EA_99CEB34A_3867_4f24_94FA_6A476EAC6370__INCLUDED_

#include "ComponentWithSetDisplayer.h"
#include "Button.h"
#include "Pannel.h"
#include "Dialog.h"

class ButtonCommand
{

private:
	Button* m_Button;
	Pannel* m_pannel;
	Dialog* m_dialog;

public:
	ButtonCommand();
	virtual ~ButtonCommand();

	void setButtonChainOfCommand();
	void void display(std::string code);

};
#endif // !defined(EA_99CEB34A_3867_4f24_94FA_6A476EAC6370__INCLUDED_)
