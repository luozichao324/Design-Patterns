///////////////////////////////////////////////////////////
//  CarBuilder.h
//  Implementation of the Class CarBuilder
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_9CA0C9C0_70E3_461d_A1D2_7DEDB8996F93__INCLUDED_)
#define EA_9CA0C9C0_70E3_461d_A1D2_7DEDB8996F93__INCLUDED_

#include "BuilderBase.h"
#include "CarProcess.h"

class CarBuilder : public BuilderBase
{

public:
	CarBuilder();
	virtual ~CarBuilder();
	CarProcess *m_CarProcess;

	CarProcess* getResult();
	virtual void reset();
	virtual void setEngine(std::string disctription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

};
#endif // !defined(EA_9CA0C9C0_70E3_461d_A1D2_7DEDB8996F93__INCLUDED_)
