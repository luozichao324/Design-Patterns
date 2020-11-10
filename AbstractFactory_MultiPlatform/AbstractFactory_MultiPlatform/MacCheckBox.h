///////////////////////////////////////////////////////////
//  MacCheckBox.h
//  Implementation of the Class MacCheckBox
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_97B76951_2B30_403b_ADF1_8AF27C3B590D__INCLUDED_)
#define EA_97B76951_2B30_403b_ADF1_8AF27C3B590D__INCLUDED_

#include "CheckBoxBase.h"

class MacCheckBox : public CheckBoxBase
{

public:
	MacCheckBox();
	virtual ~MacCheckBox();

	virtual bool onClick(bool bSelected);

};
#endif // !defined(EA_97B76951_2B30_403b_ADF1_8AF27C3B590D__INCLUDED_)
