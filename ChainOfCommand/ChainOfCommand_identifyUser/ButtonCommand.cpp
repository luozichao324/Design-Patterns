///////////////////////////////////////////////////////////
//  ButtonCommand.cpp
//  Implementation of the Class ButtonCommand
//  Created on:      12-11ÔÂ-2020 11:20:30
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "ButtonCommand.h"


ButtonCommand::ButtonCommand(){

	m_Button = new Button();
	m_pannel = new Pannel();
	m_dialog = new dialog();
}



ButtonCommand::~ButtonCommand(){
	delete m_Button;
	m_Button = nullptr;
	
	delete m_pannel;
	m_pannel = nullptr;
	
	delete m_Button;
	m_Button = nullptr;
}





void ButtonCommand::setButtonChainOfCommand(){
	m_Button.setNetComponet(m_pannel);
	m_pannel.setNetComponet(m_dialog);

}


void ButtonCommand::void display(std::string code){
	m_Button.display(code);
}