///////////////////////////////////////////////////////////
//  client.h
//  Implementation of the Class client
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_58DA79F9_6E5A_4b83_AB91_F1F900755EB9__INCLUDED_)
#define EA_58DA79F9_6E5A_4b83_AB91_F1F900755EB9__INCLUDED_

#include "Director.h"
#include "CarBuilder.h"

class client
{

public:
	client();
	virtual ~client();
	CarBuilder *m_CarBuilder;

	void buildCar();

private:
	Car* m_car;
	Manual* m_carManual;

};
#endif // !defined(EA_58DA79F9_6E5A_4b83_AB91_F1F900755EB9__INCLUDED_)
