#ifndef PURSUIT_HPP
#define PURSUIT_HPP

#include "IGiveGift.hpp"
#include "SchoolGirl.hpp"
#include <iostream>

class Pursuit : public IGiveGift
{
public:
    Pursuit(SchoolGirl mm);
    void GiveDolls() override;
    void GiveFlowers() override;
    void GiveChocolate() override;

private:
    SchoolGirl m_mm;
};

Pursuit::Pursuit(SchoolGirl mm): m_mm(mm)
{
}

void Pursuit::GiveDolls()
{
    std::cout << m_mm.GetName() << ", give you dolls" << std::endl;
}

void Pursuit::GiveFlowers()
{
    std::cout << m_mm.GetName() << ", give you flowers" << std::endl;
}

void Pursuit::GiveChocolate()
{
    std::cout << m_mm.GetName() << ", give you chocolate" << std::endl;
}

#endif // PURSUIT_HPP