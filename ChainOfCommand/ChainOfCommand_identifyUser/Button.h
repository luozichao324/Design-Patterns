///////////////////////////////////////////////////////////
//  Button.h
//  Implementation of the Class Button
//  Created on:      12-11ÔÂ-2020 11:20:30
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_BDF60AD7_9251_43e6_BE6A_8764C24F658E__INCLUDED_)
#define EA_BDF60AD7_9251_43e6_BE6A_8764C24F658E__INCLUDED_

#include "ComponentBase.h"

class Button : public ComponentBase
{

public:
	Button();
	virtual ~Button();

	virtual void display(std::string code);

};
#endif // !defined(EA_BDF60AD7_9251_43e6_BE6A_8764C24F658E__INCLUDED_)
