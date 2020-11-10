///////////////////////////////////////////////////////////
//  CarProcess.h
//  Implementation of the Interface CarProcess
//  Created on:      09-11ÔÂ-2020 15:38:27
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_17A8BB6F_A050_4e58_87B6_A95620FD51B8__INCLUDED_)
#define EA_17A8BB6F_A050_4e58_87B6_A95620FD51B8__INCLUDED_

class CarProcess
{

public:
	CarProcess() {

	}

	virtual ~CarProcess() {

	}

	virtual void setEngine(std::string discription) =0;
	virtual void setGPS() =0;
	virtual void setSeats(int number) =0;
	virtual void setTripComputer() =0;

};

class CarProcess
{

public:
	CarProcess();
	virtual ~CarProcess();

};
#endif // !defined(EA_17A8BB6F_A050_4e58_87B6_A95620FD51B8__INCLUDED_)
