///////////////////////////////////////////////////////////
//  SnapShot.h
//  Implementation of the Class SnapShot
//  Created on:      24-12ÔÂ-2020 18:41:35
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_ACF422C0_6245_471b_8AD1_FE467768FC18__INCLUDED_)
#define EA_ACF422C0_6245_471b_8AD1_FE467768FC18__INCLUDED_

#include "Editor.h"

class SnapShot
{

public:
	SnapShot();
	virtual ~SnapShot();
	Editor *m_Editor;

	SnapShot(Editor* editorPtr, int curX, int curY, std::string text, int selectionWidth);
	void restore();

private:
	int m_curX;
	int m_curY;
	Editor* m_editorPtr;
	int m_selectionWidth;
	std::string m_text;

};
#endif // !defined(EA_ACF422C0_6245_471b_8AD1_FE467768FC18__INCLUDED_)
