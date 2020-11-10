///////////////////////////////////////////////////////////
//  CarBuilder.cpp
//  Implementation of the Class CarBuilder
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "CarBuilder.h"


CarBuilder::CarBuilder(){

}



CarBuilder::~CarBuilder(){

}





CarProcess* CarBuilder::getResult(){

	return  NULL;
}


void CarBuilder::reset(){

	if(!m_CarProcess != nullptr)
	{
		delete m_CarProcess;
		m_CarProcess = nullptr;
	}
	m_CarProcess = new Car();
	
}


void CarBuilder::setEngine(std::string disctription){

}


void CarBuilder::setGPS(){

}


void CarBuilder::setSeats(int number){

}


void CarBuilder::setTripComputer(){

}