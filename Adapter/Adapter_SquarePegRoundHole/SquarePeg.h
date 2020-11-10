///////////////////////////////////////////////////////////
//  SquarePeg.h
//  Implementation of the Class SquarePeg
//  Created on:      10-11ÔÂ-2020 17:23:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_39348D31_10AA_4379_864F_8058AD930F66__INCLUDED_)
#define EA_39348D31_10AA_4379_864F_8058AD930F66__INCLUDED_

/**
 * ·½¶¤
 */
class SquarePeg
{

public:
	SquarePeg();
	virtual ~SquarePeg();

	SquarePeg(int width);
	int getWidth();

private:
	int m_width;

};
#endif // !defined(EA_39348D31_10AA_4379_864F_8058AD930F66__INCLUDED_)
