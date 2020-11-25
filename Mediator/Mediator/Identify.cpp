///////////////////////////////////////////////////////////
//  Identify.cpp
//  Implementation of the Class Identify
//  Created on:      19-11��-2020 11:34:52
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Identify.h"


Identify::Identify(){

}



Identify::~Identify(){

}





void Identify::identifyFailed(std::string channelId){
    m_Mediator->identifyFailed(channelId);
}


void Identify::identifySuccessfully(std::string channelId, std::string userId){
    m_Mediator->identifySuccessfully(channelId, userId);
}

 void Identify::setMediator(std::shared_ptr<Mediator> mediator)
{
    m_Mediator = mediator.get();
}