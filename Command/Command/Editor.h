///////////////////////////////////////////////////////////
//  Editor.h
//  Implementation of the Class Editor
//  Created on:      13-11��-2020 14:43:20
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_06279588_D77F_4686_815E_8373F639B78B__INCLUDED_)
#define EA_06279588_D77F_4686_815E_8373F639B78B__INCLUDED_

#include "Def.h"

class Editor
{

public:
	Editor();
	virtual ~Editor();

	void copy(const std::string& str);
	void deleteStr(const std::string str);
	void paste(const std::string& str);

private:
	std::string m_copyStr;
	std::string m_displayStr;

};
#endif // !defined(EA_06279588_D77F_4686_815E_8373F639B78B__INCLUDED_)
