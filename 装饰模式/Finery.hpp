#ifndef FINERY_HPP
#define FINERY_HPP

#include "ICharacter.hpp"

class Finery : public ICharacter{
protected:
    ICharacter* component;
public:
    void decorate(ICharacter* component){
        this->component = component;
    }
    void show(){
        if(component != nullptr){
            component->show(); 
        }
    }
};

#endif // FINERY_HPP