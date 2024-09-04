#ifndef SQLSERVERFACTORY_HPP
#define SQLSERVERFACTORY_HPP

#include "IUser.hpp"
#include "IDepartment.hpp"
#include "IFactory.hpp"
#include "SqlServerUser.hpp"
#include "SqlServerDepartment.hpp"

class SqlServerFactory: public IFactory{
public:
    IUser* createUser() override{
        return new SqlServerUser();
    }

    IDepartment* createDepartment() override{
        return new SqlServerDepartment();
    }
};

#endif