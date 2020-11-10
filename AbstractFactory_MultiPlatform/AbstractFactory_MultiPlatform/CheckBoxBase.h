///////////////////////////////////////////////////////////
//  CheckBoxBase.h
//  Implementation of the Class CheckBoxBase
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_9B060E7C_C152_4ab1_B0E3_EBBAAC52FB33__INCLUDED_)
#define EA_9B060E7C_C152_4ab1_B0E3_EBBAAC52FB33__INCLUDED_

#include "CheckBox.h"

class CheckBoxBase : public CheckBox
{

public:
	CheckBoxBase();
	virtual ~CheckBoxBase();

	virtual bool onClick(bool bSelected);

};
#endif // !defined(EA_9B060E7C_C152_4ab1_B0E3_EBBAAC52FB33__INCLUDED_)
