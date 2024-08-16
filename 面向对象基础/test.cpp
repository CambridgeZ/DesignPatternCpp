// #include "Cat.hpp"
// #include "Dog.hpp"
// #include "Animal.hpp"
#include <iostream>
#include <vector>

#include "MachineCat.hpp"
#include "IChange.hpp"

using std::cout;
using std::endl;
using std::vector;

int main(){
    //test1
    // vector<Animal*> animals;
    // animals.push_back(new Dog("旺财"));
    // animals.push_back(new Cat("咪咪"));
    // for(auto animal : animals){
    //     cout << animal->getName() << "叫了" << animal->shout() << endl;
    // }
    // for(auto animal : animals){
    //     delete animal;
    // }

    //test2
    MachineCat machineCat("哆啦A梦");
    IChange *iChange = &machineCat;
    cout<<iChange->change("小叮当")<<endl;
    return 0;
}