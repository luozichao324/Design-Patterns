///////////////////////////////////////////////////////////
//  FlyweightFactory.cpp
//  Implementation of the Class FlyweightFactory
//  Created on:      11-11月-2020 18:18:44
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "FlyweightFactory.h"

//调用函数

void AddCarToPoliceDatabase(
    FlyweightFactory &ff, const std::string &plates, const std::string &owner,
    const std::string &brand, const std::string &model, const std::string &color)
{
    std::cout << "\nClient: Adding a car to database.\n";
    const Flyweight &flyweight = ff.GetFlyweight({brand, model, color});
    // The client code either stores or calculates extrinsic state and passes it
    // to the flyweight's methods.
    flyweight.Operation({plates, owner});
}


FlyweightFactory::FlyweightFactory(){

}



FlyweightFactory::~FlyweightFactory(){

}





FlyweightFactory::FlyweightFactory(std::list<SharedState> shareStatesList){
 for (const SharedState &ss : shareStatesList)
    {
        this->m_flyweightsMap.insert(std::make_pair<std::string, Flyweight>(this->GetKey(ss), Flyweight(&ss)));
    }
}


void FlyweightFactory::getFlyweight(const SharedState& sharedState){
	std::string key = this->GetKey(shared_state);
    if (this->m_flyweightsMap.find(key) == this->m_flyweightsMap.end())
    {
        std::cout << "FlyweightFactory: Can't find a flyweight, creating new one.\n";
        this->m_flyweightsMap.insert(std::make_pair(key, Flyweight(&shared_state)));
    }
    else
    {
        std::cout << "FlyweightFactory: Reusing existing flyweight.\n";
    }
    return this->m_flyweightsMap.at(key);
}


std::string FlyweightFactory::getKey(const SharedState& sharedState){

	return sharedState.brand_ + "_" + sharedState.model_ + "_" + sharedState.color_;
}


void FlyweightFactory::listFlyWeight(){
        size_t count = this->m_flyweightsMap.size();
        std::cout << "\nFlyweightFactory: I have " << count << " flyweights:\n";
        for (std::pair<std::string, Flyweight> pair : this->m_flyweightsMap)
        {
            std::cout << pair.first << "\n";
        }
}