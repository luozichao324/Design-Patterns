///////////////////////////////////////////////////////////
//  Editor.cpp
//  Implementation of the Class Editor
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Editor.h"


Editor::Editor(){

}



Editor::~Editor(){

}





void Editor::changedContext(std::string editorContext){
    m_eventManager.notify(editorContext);
}