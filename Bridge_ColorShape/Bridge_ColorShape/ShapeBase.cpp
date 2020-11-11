///////////////////////////////////////////////////////////
//  ShapeBase.cpp
//  Implementation of the Class ShapeBase
//  Created on:      11-11ÔÂ-2020 11:36:48
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "ShapeBase.h"


ShapeBase::ShapeBase(){

}



ShapeBase::~ShapeBase(){

}





std::string ShapeBase::getColor(){

	if(!m_color.isNULL)
	{
		return m_color.getColor();
	}
	return "";
}


std::string ShapeBase::getShape(){

	return m_shapeDetail;
}


void ShapeBase::setColor(Color* colorPtr){

	m_color = colorPtr;
}