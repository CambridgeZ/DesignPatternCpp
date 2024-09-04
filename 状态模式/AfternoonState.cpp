#include "AfternoonState.hpp"
#include <iostream>
#include "EveningState.hpp"
#include "Work.hpp"

void AfternoonState::handle(Work* work) {
    if (work->getHour() < 17) {
        std::cout << "当前时间：" << work->getHour() << "点，下午状态还不错，继续努力" << std::endl;
    } else {
        work->setState(new EveningState());
        work->handle();
    }
}

