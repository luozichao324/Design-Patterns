///////////////////////////////////////////////////////////
//  WoodGate.cpp
//  Implementation of the Class WoodGate
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "WoodGate.h"


WoodGate::WoodGate(){
	m_info = "Wood";
}



WoodGate::~WoodGate(){

}





std::string WoodGate::getDoorInfo(){

	return  m_info;
}


void WoodGate::openDoor(){
	std::cout << "WoodGate::openDoor" << endl;
}