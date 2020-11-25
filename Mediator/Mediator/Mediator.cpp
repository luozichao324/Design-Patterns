///////////////////////////////////////////////////////////
//  Mediator.cpp
//  Implementation of the Class Mediator
//  Created on:      19-11��-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Mediator.h"


Mediator::Mediator(){

}



Mediator::~Mediator(){

}





Mediator::Mediator(std::shared<GateDeviceInterface> gateDevice, std::shared<IdentifyInterface> identify){
    m_gateDeviceInterface = gateDevice;
    m_identifyInterface = identify;

}


void Mediator::identifyFailed(std::string channelId){
    m_gateDeviceInterface->forbidStatus(channelId);
}


void Mediator::identifySuccessfully(std::string channelId, std::string userId){
    m_gateDeviceInterface->passStatus(channelId， userId);
}


void Mediator::notify(std::shared<ComponentInterface> sender, std::string event){

}