#ifndef USER_HPP
#define USER_HPP
#include <string>

using std::string;

class User{
private:
    string name;
public:
    User(string name): name(name){}
    string getName(){
        return name;
    }
};

#endif