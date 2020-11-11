///////////////////////////////////////////////////////////
//  ShapeBase.h
//  Implementation of the Class ShapeBase
//  Created on:      11-11ÔÂ-2020 11:36:48
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_A042BD1F_7BFB_4144_AC3B_0EE8ED0A5CF2__INCLUDED_)
#define EA_A042BD1F_7BFB_4144_AC3B_0EE8ED0A5CF2__INCLUDED_

#include "Shape.h"

class ShapeBase : public Shape
{

public:
	ShapeBase();
	virtual ~ShapeBase();

	virtual std::string getColor();
	virtual std::string getShape();
	virtual void setColor(Color* colorPtr);

private:
	Color* m_color;
	std::string m_shapeDetail;

};
#endif // !defined(EA_A042BD1F_7BFB_4144_AC3B_0EE8ED0A5CF2__INCLUDED_)
