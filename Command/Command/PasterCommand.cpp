///////////////////////////////////////////////////////////
//  PasterCommand.cpp
//  Implementation of the Class PasterCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "PasterCommand.h"


PasterCommand::PasterCommand(){

}



PasterCommand::~PasterCommand(){

}





PasterCommand::PasterCommand(Editor* editor, const std::string& pasteStr){
    m_editor = editor;
    m_pasteStr = pasteStr;
}


void PasterCommand::Execute(){
    m_editor->paste(m_pasteStr);
}