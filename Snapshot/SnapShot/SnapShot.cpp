///////////////////////////////////////////////////////////
//  SnapShot.cpp
//  Implementation of the Class SnapShot
//  Created on:      24-12��-2020 18:41:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "SnapShot.h"
#include "def.h"


SnapShot::SnapShot(){

}



SnapShot::~SnapShot(){

}





SnapShot::SnapShot(Editor* editorPtr, int curX, int curY, std::string text, int selectionWidth){
    m_editorPtr = editorPtr;
    m_curY = curY;
    m_curX = curX;
    m_text = text;
    m_selectionWidth = selectionWidth;

}


void SnapShot::restore(){
    m_editorPtr->setCursor(m_curX, m_curY);
    m_editorPtr->setSelectionWidth(m_selectionWidth);
    m_editorPtr->setText(m_text);
}