#include <iostream>
#include "EveningState.hpp"
#include "Work.hpp"
#include "SleepingState.hpp"
#include "RestState.hpp"

void EveningState::handle(Work* work){
    if (work->isFinish()) {
        work->setState(new RestState());
        work->handle();
    } else {
        if (work->getHour() < 21) {
            std::cout << "当前时间：" << work->getHour() << "点，加班哦，疲累至极" << std::endl;
        } else {
            work->setState(new SleepingState());
            work->handle();
        }
    }
}