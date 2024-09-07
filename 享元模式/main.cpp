#include "ConcreteFlyweight.hpp"
#include "FlyweightFactory.hpp"
#include "User.hpp"
#include <memory>

using std:: make_shared;

int main(){

    FlyweightFactory* factory = new FlyweightFactory();
    Flyweight* flyweight = factory->GetFlyweight('X');
    shared_ptr<User> user1 = make_shared<User>("User1");
    flyweight->Operation(user1);

    flyweight = factory->GetFlyweight('Y');
    shared_ptr<User> user2 = make_shared<User>("User2");
    flyweight->Operation(user2);

    flyweight = factory->GetFlyweight('Z');
    shared_ptr<User> user3 = make_shared<User>("User3");
    flyweight->Operation(user3);

    return 0;
    
}