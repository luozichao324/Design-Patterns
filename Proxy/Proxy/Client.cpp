///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Client.h"


Client::Client(){

}



Client::~Client(){

}





std::string Client::getDoorInfo(){
	if(m_GateProxy != nullptr)
	{
		return m_GateProxy->getDoorInfo();
	}
	return "";
}


void Client::initGateMachine(){
	m_GateMachine = new WoodGate();
	m_GateProxy = new GateProxy(m_GateMachine);
}


void Client::openDoor(){
	if(m_GateProxy != nullptr)
	{
		m_GateProxy->openDoor();
	}
}