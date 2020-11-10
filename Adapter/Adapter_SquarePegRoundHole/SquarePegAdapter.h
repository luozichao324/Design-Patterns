///////////////////////////////////////////////////////////
//  SquarePegAdapter.h
//  Implementation of the Class SquarePegAdapter
//  Created on:      10-11ÔÂ-2020 17:23:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_1EF27BA6_40B8_4423_91B6_B7857620F119__INCLUDED_)
#define EA_1EF27BA6_40B8_4423_91B6_B7857620F119__INCLUDED_

#include "SquarePeg.h"
#include "RoundPeg.h"

class SquarePegAdapter : public RoundPeg
{

public:
	SquarePegAdapter();
	virtual ~SquarePegAdapter();
	SquarePeg *m_SquarePeg;

	void SquarePegAdapter(SquarePeg peg);
	int getRedius();

private:
	SquarePeg m_peg;

};
#endif // !defined(EA_1EF27BA6_40B8_4423_91B6_B7857620F119__INCLUDED_)
