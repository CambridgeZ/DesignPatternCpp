#ifndef MYSQLFACTORY_HPP
#define MYSQLFACTORY_HPP

#include "IFactory.hpp"
#include "MySQLUser.hpp"

class MySQLFactory: public IFactory{
public:
    IUser* createUser() override{
        return new MySQLUser();
    }
};

#endif

