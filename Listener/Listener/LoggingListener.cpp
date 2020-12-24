///////////////////////////////////////////////////////////
//  LoggingListener.cpp
//  Implementation of the Class LoggingListener
//  Created on:      24-12��-2020 15:15:36
//  Original author: luozc
///////////////////////////////////////////////////////////

#include "LoggingListener.h"


LoggingListener::LoggingListener(){

}



LoggingListener::~LoggingListener(){

}





void LoggingListener::update(std::string context){
    std::cout<< "输入文本到log文件:" ;
    std::cout <<  context << endl;
}