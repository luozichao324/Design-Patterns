///////////////////////////////////////////////////////////
//  Builder.h
//  Implementation of the Interface Builder
//  Created on:      09-11ÔÂ-2020 15:38:26
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_B87F08A7_BF11_4223_8E50_2E32BEC87BB9__INCLUDED_)
#define EA_B87F08A7_BF11_4223_8E50_2E32BEC87BB9__INCLUDED_

class Builder
{

public:
	Builder() {

	}

	virtual ~Builder() {

	}

	virtual void reset() =0;
	virtual void setEngine(std::string disctription) =0;
	virtual void setGPS() =0;
	virtual void setSeats(int number) =0;
	virtual void setTripComputer() =0;

};
#endif // !defined(EA_B87F08A7_BF11_4223_8E50_2E32BEC87BB9__INCLUDED_)
