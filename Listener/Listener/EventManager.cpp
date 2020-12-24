///////////////////////////////////////////////////////////
//  EventManager.cpp
//  Implementation of the Class EventManager
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "EventManager.h"



EventManager::EventManager(){

}



EventManager::~EventManager(){

}





void EventManager::addSubscriber(Subscriber* subscriber){
    m_vecListeners.push_back(subscriber);
}


void EventManager::notify(std::string context){
    for(auto iter : m_vecListeners)
    {
        if(iter != nullptr)
        {
            iter->update(context);
        }
    }
}


void EventManager::removeOneSubscriber(Subscriber* ptrSubscriber){
    
}