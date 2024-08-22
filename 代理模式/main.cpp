#include "SchoolGirl.hpp"
#include "Proxy.hpp"
#include <iostream>

int main()
{
    SchoolGirl jiaojiao("Jiaojiao");
    Proxy daili(jiaojiao);

    daili.GiveDolls();
    daili.GiveFlowers();
    daili.GiveChocolate();

    return 0;
}