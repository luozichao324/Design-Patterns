///////////////////////////////////////////////////////////
//  ComponentWithSetDisplayer.h
//  Implementation of the Interface ComponentWithSetDisplayer
//  Created on:      12-11ÔÂ-2020 11:20:31
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_2EE40769_8BC6_438b_B5FB_D559B2432C54__INCLUDED_)
#define EA_2EE40769_8BC6_438b_B5FB_D559B2432C54__INCLUDED_

class ComponentWithSetDisplayer
{

public:
	ComponentWithSetDisplayer() {

	}

	virtual ~ComponentWithSetDisplayer() {

	}

	virtual void display(std::string code) =0;

};
#endif // !defined(EA_2EE40769_8BC6_438b_B5FB_D559B2432C54__INCLUDED_)
