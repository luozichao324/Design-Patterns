///////////////////////////////////////////////////////////
//  LinuxButton.h
//  Implementation of the Class LinuxButton
//  Created on:      08-11ÔÂ-2020 11:57:38
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_09604EB3_BE24_4f53_9E25_A5189F10C237__INCLUDED_)
#define EA_09604EB3_BE24_4f53_9E25_A5189F10C237__INCLUDED_

#include "ButtonBase.h"

class LinuxButton : public ButtonBase
{

public:
	LinuxButton();
	virtual ~LinuxButton();

	virtual bool onClick()();

};
#endif // !defined(EA_09604EB3_BE24_4f53_9E25_A5189F10C237__INCLUDED_)
