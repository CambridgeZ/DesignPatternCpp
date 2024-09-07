#ifndef FLWEIGHTFACTORY_HPP
#define FLWEIGHTFACTORY_HPP

#include "Flyweight.hpp"
#include "ConcreteFlyweight.hpp"
#include <map>

using std::map;

class FlyweightFactory{
private:
    map<char, Flyweight*> flyweights;

public:
    FlyweightFactory(){
        flyweights['X'] = new ConcreteFlyweight();
        flyweights['Y'] = new ConcreteFlyweight();
        flyweights['Z'] = new ConcreteFlyweight();
    }

    Flyweight* GetFlyweight(char key){
        if(flyweights.find(key) != flyweights.end()){
            return flyweights[key];
        }
        else {
            return nullptr;
        }
    }
};

#endif