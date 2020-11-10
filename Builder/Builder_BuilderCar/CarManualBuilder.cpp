///////////////////////////////////////////////////////////
//  CarManualBuilder.cpp
//  Implementation of the Class CarManualBuilder
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "CarManualBuilder.h"


CarManualBuilder::CarManualBuilder(){

}



CarManualBuilder::~CarManualBuilder(){

}





CarProcess* CarManualBuilder::getResult(){

	return  NULL;
}


void CarManualBuilder::reset(){

	if(!m_CarProcess != nullptr)
	{
		delete m_CarProcess;
		m_CarProcess = nullptr;
	}
	m_CarProcess = new Manual();
}


void CarManualBuilder::setEngine(std::string disctription){

}


void CarManualBuilder::setGPS(){

}


void CarManualBuilder::setSeats(int number){

}


void CarManualBuilder::setTripComputer(){

}