///////////////////////////////////////////////////////////
//  CopyCommand.cpp
//  Implementation of the Class CopyCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "CopyCommand.h"


CopyCommand::CopyCommand(){

}



CopyCommand::~CopyCommand(){

}





CopyCommand::CopyCommand(const std::string& copyStr, Editor* editor){
    m_editor = editor;
    m_copyStr = copyStr;
}


void CopyCommand::Execute(){
    m_editor->copy(m_copyStr);
}