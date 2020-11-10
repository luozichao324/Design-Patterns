///////////////////////////////////////////////////////////
//  CheckBox.h
//  Implementation of the Interface CheckBox
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_CBAAD5D7_610C_4467_A083_E12B243C73B8__INCLUDED_)
#define EA_CBAAD5D7_610C_4467_A083_E12B243C73B8__INCLUDED_

class CheckBox
{

public:
	CheckBox() {

	}

	virtual ~CheckBox() {

	}

	virtual bool onClick(bool bSelected) =0;

};
#endif // !defined(EA_CBAAD5D7_610C_4467_A083_E12B243C73B8__INCLUDED_)
