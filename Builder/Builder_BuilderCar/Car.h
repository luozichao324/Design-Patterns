///////////////////////////////////////////////////////////
//  Car.h
//  Implementation of the Class Car
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_3A702AFA_97BE_4024_A0E1_4DFF79F0C847__INCLUDED_)
#define EA_3A702AFA_97BE_4024_A0E1_4DFF79F0C847__INCLUDED_

#include "ProcessBase.h"

class Car : public ProcessBase
{

public:
	Car();
	virtual ~Car();

	virtual void setEngine(std::string discription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

};
#endif // !defined(EA_3A702AFA_97BE_4024_A0E1_4DFF79F0C847__INCLUDED_)
