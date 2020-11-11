///////////////////////////////////////////////////////////
//  Flyweight.h
//  Implementation of the Class Flyweight
//  Created on:      11-11ÔÂ-2020 18:18:44
//  Original author: luozc
///////////////////////////////////////////////////////////

#if !defined(EA_FCBC16BE_837A_49c4_86E7_AEE954836A73__INCLUDED_)
#define EA_FCBC16BE_837A_49c4_86E7_AEE954836A73__INCLUDED_


struct SharedState
{
	std::string m_brand;
	std::string m_color;
	std::string m_model;
};

struct UniqueState
{
	std::string m_owner;
	std::string m_plates;
};

class Flyweight
{

public:
	Flyweight();
	virtual ~Flyweight();

	Flyweight(const SharedState& sharedStatePtr);
	void Flyweight(const Flyweight& other);
	void Operation(const UniqueState& uniqueState);

private:
	SharedState* m_sharedState;

};
#endif // !defined(EA_FCBC16BE_837A_49c4_86E7_AEE954836A73__INCLUDED_)
