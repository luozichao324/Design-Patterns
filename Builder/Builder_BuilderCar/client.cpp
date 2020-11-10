///////////////////////////////////////////////////////////
//  client.cpp
//  Implementation of the Class client
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "client.h"


client::client(){

}



client::~client(){

}





void client::buildCar(){

	Director director = new Director();
	CarBuilder* builder = new CarBuilder();
	director->makeSprotsCar(builder);
	m_car = builder->getResult();
	
}