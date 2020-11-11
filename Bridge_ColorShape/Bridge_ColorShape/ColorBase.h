///////////////////////////////////////////////////////////
//  ColorBase.h
//  Implementation of the Class ColorBase
//  Created on:      11-11ÔÂ-2020 11:36:47
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_ADBEE328_40AE_4098_9F42_3F7AE6173B95__INCLUDED_)
#define EA_ADBEE328_40AE_4098_9F42_3F7AE6173B95__INCLUDED_

#include "Color.h"

class ColorBase : public Color
{

public:
	ColorBase();
	virtual ~ColorBase();

	virtual std::string getColor();

private:
	std::string m_colorDetail;

};
#endif // !defined(EA_ADBEE328_40AE_4098_9F42_3F7AE6173B95__INCLUDED_)
