///////////////////////////////////////////////////////////
//  UIClass.cpp
//  Implementation of the Class UIClass
//  Created on:      13-11��-2020 14:43:21
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "UIClass.h"


UIClass::UIClass(){

}



UIClass::~UIClass(){

}


void UIClass::init()
{
    m_commandManager = new CommondManager();
    m_editor.reset(new Editor());
    m_commandManager->setEditor(m_editor.get());
}



void UIClass::UICopy(const std::string& copyStr){
    m_commandManager->copy(copyStr);
}


void UIClass::UIDelete(const std::string& deleteStr){
    m_commandManager->deleteStr(deleteStr);
}


void UIClass::UIPaste(const std::string& pasteStr){
    m_commandManager->paste(pasteStr);
}