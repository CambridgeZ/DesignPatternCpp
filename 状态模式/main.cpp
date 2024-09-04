#include "Work.hpp"

int main() {
    Work* work = new Work();
    work->setHour(9);
    work->handle();
    work->setHour(12);
    work->handle();
    work->setHour(13);
    work->handle();
    work->setHour(14);
    work->handle();
    work->setHour(17);
    work->handle();
    work->setHour(19);
    work->handle();
    work->setHour(22);
    work->handle();
    delete work;
    return 0;
}