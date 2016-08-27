//
// Created by had on 8/27/16.
//

#ifndef THREAD_POOL_BASE_EVENT_H
#define THREAD_POOL_BASE_EVENT_H


#include <iostream>

class base_event {
public:
    base_event(){}
    virtual ~base_event(){}
    static void process(){ std::cout << "base_event process!" << std::endl;}
};


#endif //THREAD_POOL_BASE_EVENT_H
