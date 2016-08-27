#include <iostream>
#include <zconf.h>
#include "threadpool.h"
#include "base_event.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    threadpool<base_event> pool = threadpool<base_event>();

    base_event *event = new base_event();

    if(pool.append(event) == true) {
        pause();
    }
    return 0;
}