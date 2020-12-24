///////////////////////////////////////////////////////////
//  CloudListener.cpp
//  Implementation of the Class CloudListener
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "CloudListener.h"


CloudListener::CloudListener(){

}



CloudListener::~CloudListener(){

}





void CloudListener::update(std::string context){
    std::cout << "将变更的文本反馈给云端："<<endl;
    std::cout << context <<endl;
}