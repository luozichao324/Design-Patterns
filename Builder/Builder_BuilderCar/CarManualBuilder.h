///////////////////////////////////////////////////////////
//  CarManualBuilder.h
//  Implementation of the Class CarManualBuilder
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_176163EA_D2BA_4d4c_9BFE_4140F4F6D542__INCLUDED_)
#define EA_176163EA_D2BA_4d4c_9BFE_4140F4F6D542__INCLUDED_

#include "BuilderBase.h"
#include "CarProcess.h"

class CarManualBuilder : public BuilderBase
{

public:
	CarManualBuilder();
	virtual ~CarManualBuilder();
	CarProcess *m_CarProcess;

	CarProcess* getResult();
	virtual void reset();
	virtual void setEngine(std::string disctription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

};
#endif // !defined(EA_176163EA_D2BA_4d4c_9BFE_4140F4F6D542__INCLUDED_)
