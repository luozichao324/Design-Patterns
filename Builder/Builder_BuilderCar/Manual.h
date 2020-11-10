///////////////////////////////////////////////////////////
//  Manual.h
//  Implementation of the Class Manual
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_0691F9B1_C022_4621_84E9_0033A43CA001__INCLUDED_)
#define EA_0691F9B1_C022_4621_84E9_0033A43CA001__INCLUDED_

#include "ProcessBase.h"

class Manual : public ProcessBase
{

public:
	Manual();
	virtual ~Manual();

	virtual void setEngine(std::string discription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

};
#endif // !defined(EA_0691F9B1_C022_4621_84E9_0033A43CA001__INCLUDED_)
