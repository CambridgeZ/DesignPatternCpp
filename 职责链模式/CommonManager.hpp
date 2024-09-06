#ifndef COMMONMANAGER_HPP
#define COMMONMANAGER_HPP

#include <string>
#include "Manager.hpp"

class CommonManager : public Manager {
public:
    CommonManager(string name) : Manager(name) {}
    void handleRequest(int fee) {
        if (fee < 1000) {
            cout << "CommonManager " << name << " approved the request." << endl;
        } else if(successor != NULL) {
            successor->handleRequest(fee);
        }
    }
};

#endif // COMMONMANAGER_HPP