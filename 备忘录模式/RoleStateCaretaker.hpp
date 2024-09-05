#ifndef ROLESTATECARETAKER_HPP
#define ROLESTATECARETAKER_HPP

#include "RoleStateMemento.hpp"

class RoleStateCaretaker {
public:
    RoleStateMemento* GetRoleStateMemento() {
        return m_memento;
    }
    void SetRoleStateMemento(RoleStateMemento* memento) {
        m_memento = memento;
    }
private:
    RoleStateMemento* m_memento;
};

#endif // ROLESTATECARETAKER_HPP