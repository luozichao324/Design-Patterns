///////////////////////////////////////////////////////////
//  ComponentBase.h
//  Implementation of the Class ComponentBase
//  Created on:      12-11ÔÂ-2020 11:20:30
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_C4EC8D8E_48A8_477f_A1A3_ACAA12860940__INCLUDED_)
#define EA_C4EC8D8E_48A8_477f_A1A3_ACAA12860940__INCLUDED_

#include "ComponentWithSetDisplayer.h"

class ComponentBase : public ComponentWithSetDisplayer
{

public:
	ComponentBase();
	virtual ~ComponentBase();
	ComponentWithSetDisplayer *m_ComponentWithSetDisplayer;

	virtual void display(std::string code);
	void setNetComponet(ComponentWithSetDisplayer* nextComponet);

private:
	ComponentWithSetDisplayer* m_nextComponent*;
	std::string m_recordInfo;

};
#endif // !defined(EA_C4EC8D8E_48A8_477f_A1A3_ACAA12860940__INCLUDED_)
