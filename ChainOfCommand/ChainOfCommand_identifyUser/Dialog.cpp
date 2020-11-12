///////////////////////////////////////////////////////////
//  Dialog.cpp
//  Implementation of the Class Dialog
//  Created on:      12-11ÔÂ-2020 11:20:31
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Dialog.h"


Dialog::Dialog(){

}



Dialog::~Dialog(){

}





void Dialog::display(std::string code){
	m_recordInfo = code;
	std::cout << "Dialog display:" << code << endl;
}