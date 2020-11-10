///////////////////////////////////////////////////////////
//  RoundPeg.h
//  Implementation of the Class RoundPeg
//  Created on:      10-11ÔÂ-2020 17:23:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B459EFB2_7547_44c3_BBB1_57EA974A848E__INCLUDED_)
#define EA_B459EFB2_7547_44c3_BBB1_57EA974A848E__INCLUDED_

/**
 * Ô²¶¤
 */
class RoundPeg
{

public:
	RoundPeg();
	virtual ~RoundPeg();

	RoundPeg(int radius);
	int getRedius();

private:
	int radius;

};
#endif // !defined(EA_B459EFB2_7547_44c3_BBB1_57EA974A848E__INCLUDED_)
