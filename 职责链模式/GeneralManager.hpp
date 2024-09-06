#ifndef GENERALMANAGER_HPP
#define GENERALMANAGER_HPP

#include <string>
#include <iostream>
#include "Manager.hpp"

using std::string;
using std::cout;
using std::endl;

class GeneralManager : public Manager {
public:
    GeneralManager(string name) : Manager(name) {}
    void handleRequest(int fee) {
        if (fee < 100000) {
            cout << "GeneralManager " << name << " approved the request." << endl;
        } else {
            cout << "GeneralManager " << name << " rejected the request." << endl;
        }
    }
};

#endif // GENERALMANAGER_HPP
