///////////////////////////////////////////////////////////
//  Editor.h
//  Implementation of the Class Editor
//  Created on:      24-12��-2020 18:41:34
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_DC0BDEF8_3024_450f_9488_F6421A710DCD__INCLUDED_)
#define EA_DC0BDEF8_3024_450f_9488_F6421A710DCD__INCLUDED_

#include "SnapShot.h"
#include "def.h"
#include  <vector>

class Editor
{

public:
	Editor();
	virtual ~Editor();

	SnapShot* createSnapShot();
	void setCursor(int curX, int curY);
	void setSelectionWidth(int selectionWidth);
	void setText(std::string text);

private:
	int m_curX;
	int m_curY;
	int m_selectionWidth;
	std::string m_text;
	std::vector<SnapShot*> vecSnapshot;

};
#endif // !defined(EA_DC0BDEF8_3024_450f_9488_F6421A710DCD__INCLUDED_)
