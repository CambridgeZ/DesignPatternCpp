#include "GameRole.hpp"
#include "RoleStateCaretaker.hpp"
#include "GameRole.cpp"

int main() {
    GameRole* lixiaoyao = new GameRole();
    lixiaoyao->StateDisplay();
    
    RoleStateCaretaker* stateAdmin = new RoleStateCaretaker();
    stateAdmin->SetRoleStateMemento(lixiaoyao->SaveState());
    
    lixiaoyao->Fight();
    lixiaoyao->StateDisplay();
    
    lixiaoyao->RecoveryState(stateAdmin->GetRoleStateMemento());
    lixiaoyao->StateDisplay();
    
    delete lixiaoyao;
    delete stateAdmin;
    
    return 0;
}