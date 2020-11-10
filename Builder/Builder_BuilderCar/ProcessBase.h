///////////////////////////////////////////////////////////
//  ProcessBase.h
//  Implementation of the Class ProcessBase
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_A879251C_2B89_4942_AD39_B9B7A56F6569__INCLUDED_)
#define EA_A879251C_2B89_4942_AD39_B9B7A56F6569__INCLUDED_

#include "CarProcess.h"

class ProcessBase : public CarProcess
{

public:
	ProcessBase();
	virtual ~ProcessBase();

	virtual void setEngine(std::string discription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

};
#endif // !defined(EA_A879251C_2B89_4942_AD39_B9B7A56F6569__INCLUDED_)
