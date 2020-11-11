///////////////////////////////////////////////////////////
//  FlyweightFactory.h
//  Implementation of the Class FlyweightFactory
//  Created on:      11-11ÔÂ-2020 18:18:44
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_31C81F80_A83C_49bc_8B60_F8C299362AB3__INCLUDED_)
#define EA_31C81F80_A83C_49bc_8B60_F8C299362AB3__INCLUDED_

#include "Flyweight.h"

class FlyweightFactory
{

public:
	FlyweightFactory();
	virtual ~FlyweightFactory();
	Flyweight *m_Flyweight;

	FlyweightFactory(std::list<SharedState> shareStatesList);
	void getFlyweight(const SharedState& sharedState);
	std::string getKey(const SharedState& sharedState);
	void listFlyWeight();

private:
	std::map m_flyweightsMap;

};
#endif // !defined(EA_31C81F80_A83C_49bc_8B60_F8C299362AB3__INCLUDED_)
