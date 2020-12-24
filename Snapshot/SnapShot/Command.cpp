///////////////////////////////////////////////////////////
//  Command.cpp
//  Implementation of the Class Command
//  Created on:      24-12��-2020 18:41:34
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Command.h"


Command::Command(){

}



Command::~Command(){

}





void Command::makeBackup(){
    SnapShot* snapShot = m_editor->createSnapShot();
    m_snapShotStack.push(snapShot);
}


void Command::restore(){
    if(m_snapShotStack.size() != 0)
    {
        SnapShot* snapShot = m_snapShotStack.top();
        snapShot->restore();
        m_snapShotStack.pop();
    }  
}

void Command::init(){
    m_editor = new Editor();
}