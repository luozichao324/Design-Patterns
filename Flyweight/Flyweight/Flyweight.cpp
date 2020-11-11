///////////////////////////////////////////////////////////
//  Flyweight.cpp
//  Implementation of the Class Flyweight
//  Created on:      11-11ÔÂ-2020 18:18:44
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Flyweight.h"


Flyweight::Flyweight(){

}



Flyweight::~Flyweight(){
	delete m_sharedState;
}





Flyweight::Flyweight(const SharedState& sharedStatePtr) : m_sharedState(new SharedState(sharedStatePtr))
{

}


void Flyweight::Flyweight(const Flyweight& other) : m_sharedState(new SharedState(*other.m_sharedState)){ 

}


void Flyweight::Operation(const UniqueState& uniqueState){
	std::cout << "Flyweight::Displaying shared (" << *m_sharedState << ") and uniqueState displaying:" << uniqueState <<endl;
}