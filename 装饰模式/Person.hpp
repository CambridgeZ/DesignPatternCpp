#ifndef PERSON_HPP
#define PERSON_HPP
#include "ICharacter.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Person : public ICharacter{
private:
    string name;
public:
    Person(string name):name(name){}
    void show(){
        cout<<"人物形象："<<name<<endl;
    }
};

#endif // PERSON_HPP