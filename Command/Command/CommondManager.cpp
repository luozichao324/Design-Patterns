///////////////////////////////////////////////////////////
//  CommondManager.cpp
//  Implementation of the Class CommondManager
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "CommondManager.h"
#include "DeleteCommand.h"
#include "CopyCommand.h"
#include "PasterCommand.h"



CommondManager::CommondManager(){

}



CommondManager::~CommondManager(){

}



void CommondManager::setEditor(Editor* editor)
{
    m_editor.reset(editor);
}


void CommondManager::copy(std::string copyStr){
    if(m_commandVec.size() == MAX_COMMAND_COUNT)
    {
        m_commandMaxCount--;
        m_commandVec.erase(m_commandVec.begin());      //去除头部数据
    }
    if(m_editor.get() != nullptr)
    {
        std::shared_ptr<Command> command =  make_shared<CopyCommand>(m_editor.get(), copyStr);
        m_commandVec.push_back(command);
        command->Execute();
    }
}


void CommondManager::deleteStr(std::string deleteStr){
    if(m_commandMaxCount == MAX_COMMAND_COUNT)
    {
        m_commandMaxCount--;
        m_commandVec.pop_back();    
    }
    if(m_editor.get() != nullptr)
    {
        std::shared_ptr<Command> command =  make_shared<DeleteCommand>(m_editor.get(), deleteStr);
        m_commandVec.push_back(command);
        command->Execute();
    }
}


void CommondManager::paste(std::string pasterStr){
    if(m_commandVec.size() == MAX_COMMAND_COUNT)
    {
        m_commandMaxCount--;
        m_commandVec.erase(m_commandVec.begin());      //去除头部数据
    }
    if(m_editor.get() != nullptr)
    {
        std::shared_ptr<Command> command =  make_shared<CopyCommand>(m_editor.get(), pasterStr);
        m_commandVec.push_back(command);
        command->Execute();
    }
}