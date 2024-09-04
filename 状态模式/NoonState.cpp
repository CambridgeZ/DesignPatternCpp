#include "NoonState.hpp"
#include <iostream>
#include "Work.hpp"
#include "AfternoonState.hpp"

void NoonState::handle(Work* work){
    if (work->getHour() < 13) {
        std::cout << "当前时间：" << work->getHour() << "点，饿了，午饭；犯困，午休" << std::endl;
    } else {
        work->setState(new AfternoonState());
        work->handle();
    }
}

