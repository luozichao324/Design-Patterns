///////////////////////////////////////////////////////////
//  DeleteCommand.cpp
//  Implementation of the Class DeleteCommand
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "DeleteCommand.h"


DeleteCommand::DeleteCommand(){

}



DeleteCommand::~DeleteCommand(){

}





DeleteCommand::DeleteCommand(Editor* editor, const std::string& deleteStr){
    m_editor = editor;
    m_deleteStr = deleteStr;
}


void DeleteCommand::Execute(){
    m_editor->deleteStr(m_deleteStr);
}