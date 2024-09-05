#ifndef ROLESTATEMEMENTO_HPP
#define ROLESTATEMEMENTO_HPP

class RoleStateMemento {
private:
    int m_vitality;
    int m_attack;
    int m_defense;
public:
    RoleStateMemento(int vitality, int attack, int defense): m_vitality(vitality), m_attack(attack), m_defense(defense) {}
    int GetVitality(){
        return m_vitality;
    }
    void SetVitality(int vitality){
        m_vitality = vitality;
    }
    int GetAttack(){
        return m_attack;
    }
    void SetAttack(int attack){
        m_attack = attack;
    }
    int GetDefense(){
        return m_defense;
    }
    void SetDefense(int defense){
        m_defense = defense;
    }
};

#endif // ROLESTATEMEMENTO_HPP