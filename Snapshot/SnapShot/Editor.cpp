///////////////////////////////////////////////////////////
//  Editor.cpp
//  Implementation of the Class Editor
//  Created on:      24-12��-2020 18:41:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "Editor.h"



Editor::Editor(){

}



Editor::~Editor(){
	for(auto iter : vecSnapshot)
	{
		if(iter != nullptr)
		{
			delete iter;
			iter = nullptr;
		}
	}
	vecSnapshot.empty();
}


SnapShot* Editor::createSnapShot(){

	SnapShot* snapShot =  new SnapShot(this, m_curX, m_curY, m_text, m_selectionWidth)
	vecSnapshot.push_back(snapShot);
	return new SnapShot(this, m_curX, m_curY, m_text, m_selectionWidth) ;  //需要内存释放
}


void Editor::setCursor(int curX, int curY){
	m_curX = curX;
	m_curY = curY;
}


void Editor::setSelectionWidth(int selectionWidth){
	m_selectionWidth = selectionWidth;
}


void Editor::setText(std::string text){
	m_text = text;
}