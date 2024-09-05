#ifndef GAMEROLE_HPP
#define GAMEROLE_HPP

#include "RoleStateMemento.hpp"

class GameRole {
public:
    GameRole();
    ~GameRole();
    void SetVitality(int vitality);
    int GetVitality();
    void SetAttack(int attack);
    int GetAttack();
    void SetDefense(int defense);
    int GetDefense();
    void StateDisplay();
    void Fight();
    RoleStateMemento* SaveState();
    void RecoveryState(RoleStateMemento* state);
private:
    int m_vitality;
    int m_attack;
    int m_defense;
};

#endif // GAMEROLE_HPP