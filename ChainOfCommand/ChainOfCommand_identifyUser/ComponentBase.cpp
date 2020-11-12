///////////////////////////////////////////////////////////
//  ComponentBase.cpp
//  Implementation of the Class ComponentBase
//  Created on:      12-11ÔÂ-2020 11:20:31
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "ComponentBase.h"


ComponentBase::ComponentBase(){

}



ComponentBase::~ComponentBase(){

}





void ComponentBase::display(std::string code){
	m_recordInfo = code;
	if(m_nextComponent != nullptr)
	{
		m_nextComponent->display(code);
	}

}


void ComponentBase::setNetComponet(ComponentWithSetDisplayer* nextComponet){
	if(m_nextComponent == nullptr)
	{
		m_nextComponent = nextComponet;
	}
	else
		std::cout << "nextComponet has set";
		
}