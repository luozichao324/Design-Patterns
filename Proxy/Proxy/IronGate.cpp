///////////////////////////////////////////////////////////
//  IronGate.cpp
//  Implementation of the Class IronGate
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "IronGate.h"


IronGate::IronGate(){
	m_info = "Icron";
}



IronGate::~IronGate(){

}





std::string IronGate::getDoorInfo(){

	return  m_info;
}


void IronGate::openDoor(){
	std::cout << "IronGate::openDoor" << endl;
}