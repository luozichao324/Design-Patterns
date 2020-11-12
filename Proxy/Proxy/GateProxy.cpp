///////////////////////////////////////////////////////////
//  GateProxy.cpp
//  Implementation of the Class GateProxy
//  Created on:      12-11ÔÂ-2020 14:46:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "GateProxy.h"


GateProxy::GateProxy(){

}



GateProxy::~GateProxy(){

}





GateProxy::GateProxy(GateMachine* gateMachine){
	if(m_GateMachine == nullptr)
	{
		m_GateMachine = gateMachine;
	}
}


std::string GateProxy::getDoorInfo(){

	if(m_info.isEmpty())
	{
		if(m_GateMachine != nullptr)
		{
		m_info = m_GateMachine->getDoorInfo();
		}
	}
	return m_info;
}


void GateProxy::openDoor(){
	if(m_GateMachine != nullptr)
	{
		m_GateMachine->openDoor();
	}
}