#ifndef PROXY_HPP
#define PROXY_HPP

#include "IGiveGift.hpp"
#include "Pursuit.hpp"

class Proxy : public IGiveGift
{
public:
    Proxy(SchoolGirl mm);
    void GiveDolls() override;
    void GiveFlowers() override;
    void GiveChocolate() override;

private:
    Pursuit m_pursuit;
};


Proxy::Proxy(SchoolGirl mm) : m_pursuit(mm)
{
}

void Proxy::GiveDolls()
{
    m_pursuit.GiveDolls();
}

void Proxy::GiveFlowers()
{
    m_pursuit.GiveFlowers();
}

void Proxy::GiveChocolate()
{
    m_pursuit.GiveChocolate();
}

#endif // PROXY_HPP