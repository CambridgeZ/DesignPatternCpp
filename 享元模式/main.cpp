#include "ConcreteFlyweight.hpp"
#include "FlyweightFactory.hpp"

int main(){
    FlyweightFactory* factory = new FlyweightFactory();
    Flyweight* fx = factory->GetFlyweight('X');
    fx->Operation(1);
    Flyweight* fy = factory->GetFlyweight('Y');
    fy->Operation(2);
    Flyweight* fz = factory->GetFlyweight('Z');
    fz->Operation(3);
    delete factory;
    return 0;
}