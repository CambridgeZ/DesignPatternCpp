#include "GameRole.hpp"
#include <iostream>


GameRole::GameRole() {
    m_vitality = 100;
    m_attack = 100;
    m_defense = 100;
}

GameRole::~GameRole() {
}

void GameRole::SetVitality(int vitality) {
    m_vitality = vitality;
}

int GameRole::GetVitality() {
    return m_vitality;
}

void GameRole::SetAttack(int attack) {
    m_attack = attack;
}

int GameRole::GetAttack() {
    return m_attack;
}

void GameRole::SetDefense(int defense) {
    m_defense = defense;
}

int GameRole::GetDefense() {
    return m_defense;
}

void GameRole::StateDisplay() {
    std::cout << "角色当前状态：" << std::endl;
    std::cout << "体力：" << m_vitality << std::endl;
    std::cout << "攻击力：" << m_attack << std::endl;
    std::cout << "防御力：" << m_defense << std::endl;
}

void GameRole::Fight() {
    m_vitality = 0;
    m_attack = 0;
    m_defense = 0;
}

RoleStateMemento* GameRole::SaveState() {
    return new RoleStateMemento(m_vitality, m_attack, m_defense);
}

void GameRole::RecoveryState(RoleStateMemento* state) {
    m_vitality = state->GetVitality();
    m_attack = state->GetAttack();
    m_defense = state->GetDefense();
}