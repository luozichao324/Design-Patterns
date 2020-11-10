///////////////////////////////////////////////////////////
//  BuilderBase.h
//  Implementation of the Class BuilderBase
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B67D0687_66B9_4d40_9825_49EBBBC9F6CC__INCLUDED_)
#define EA_B67D0687_66B9_4d40_9825_49EBBBC9F6CC__INCLUDED_

#include "Builder.h"

class BuilderBase : public Builder
{

public:
	BuilderBase();
	virtual ~BuilderBase();

	CarProcess* getResult();
	virtual void reset();
	virtual void setEngine(std::string disctription);
	virtual void setGPS();
	virtual void setSeats(int number);
	virtual void setTripComputer();

private:
	CarProcess* m_CarProcess;

};
#endif // !defined(EA_B67D0687_66B9_4d40_9825_49EBBBC9F6CC__INCLUDED_)
