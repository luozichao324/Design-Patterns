///////////////////////////////////////////////////////////
//  WinCheckBox.h
//  Implementation of the Class WinCheckBox
//  Created on:      08-11ÔÂ-2020 11:57:39
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B08AF15E_7D35_49db_A1C3_3FEF0FDBED27__INCLUDED_)
#define EA_B08AF15E_7D35_49db_A1C3_3FEF0FDBED27__INCLUDED_

#include "CheckBoxBase.h"

class WinCheckBox : public CheckBoxBase
{

public:
	WinCheckBox();
	virtual ~WinCheckBox();

	virtual bool onClick(bool bSelected);

};
#endif // !defined(EA_B08AF15E_7D35_49db_A1C3_3FEF0FDBED27__INCLUDED_)
