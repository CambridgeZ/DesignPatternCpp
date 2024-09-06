#ifndef DIRECTOR_HPP
#define DIRECTOR_HPP

#include <string>

#include "Manager.hpp"

using std::string;

class Director : public Manager {
public:
    Director(string name) : Manager(name) {}
    void handleRequest(int fee) {
        if (fee < 10000) {
            cout << "Director " << name << " approved the request." << endl;
        } else if(successor != NULL) {
            successor->handleRequest(fee);
        }
    }
};

#endif // DIRECTOR_HPP