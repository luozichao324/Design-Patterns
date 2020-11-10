///////////////////////////////////////////////////////////
//  LinuxCheckBox.h
//  Implementation of the Class LinuxCheckBox
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_1F14181A_2211_4963_AABF_D042B58F7C1C__INCLUDED_)
#define EA_1F14181A_2211_4963_AABF_D042B58F7C1C__INCLUDED_

#include "CheckBoxBase.h"

class LinuxCheckBox : public CheckBoxBase
{

public:
	LinuxCheckBox();
	virtual ~LinuxCheckBox();

	virtual bool onClick(bool bSelected);

};
#endif // !defined(EA_1F14181A_2211_4963_AABF_D042B58F7C1C__INCLUDED_)
