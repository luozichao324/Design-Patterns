///////////////////////////////////////////////////////////
//  Shape.h
//  Implementation of the Interface Shape
//  Created on:      11-11ÔÂ-2020 11:36:48
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_1DDC38E3_2B13_4e13_9EE1_F1EBC724F58D__INCLUDED_)
#define EA_1DDC38E3_2B13_4e13_9EE1_F1EBC724F58D__INCLUDED_

#include "Color.h"

class Shape
{

public:
	Shape() {

	}

	virtual ~Shape() {

	}
	Color *m_Color;

	virtual std::string getColor() =0;
	virtual std::string getShape() =0;
	virtual void setColor(Color* colorPtr) =0;

};
#endif // !defined(EA_1DDC38E3_2B13_4e13_9EE1_F1EBC724F58D__INCLUDED_)
