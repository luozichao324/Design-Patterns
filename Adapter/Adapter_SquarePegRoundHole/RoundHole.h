///////////////////////////////////////////////////////////
//  RoundHole.h
//  Implementation of the Class RoundHole
//  Created on:      10-11ÔÂ-2020 17:23:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_79E0AF4E_BA9D_4033_9F65_9C452220D70C__INCLUDED_)
#define EA_79E0AF4E_BA9D_4033_9F65_9C452220D70C__INCLUDED_

#include "RoundPeg.h"

/**
 * Ô²¿×
 */
class RoundHole
{

public:
	RoundHole();
	virtual ~RoundHole();
	RoundPeg *m_RoundPeg;

	RoundHole(int radius);
	void fits(RoundPeg roundPeg);
	int getRedius();

private:
	int m_radius;

};
#endif // !defined(EA_79E0AF4E_BA9D_4033_9F65_9C452220D70C__INCLUDED_)
