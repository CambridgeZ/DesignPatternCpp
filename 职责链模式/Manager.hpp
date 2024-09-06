#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Manager {

protected:
    Manager* successor;
    string name;
public:
    virtual void handleRequest(int fee) = 0;
    void setSuccessor(Manager* successor) {
        this->successor = successor;
    }
    Manager(string name): name(name) {}
};

#endif // MANAGER_HPP