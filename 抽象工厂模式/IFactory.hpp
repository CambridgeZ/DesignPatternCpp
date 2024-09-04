#ifndef IFACOTRY_HPP
#define IFACOTRY_HPP

#include "IUser.hpp"
#include "IDepartment.hpp"

class IFactory{
public:
    virtual IUser* createUser() = 0;
    virtual IDepartment* createDepartment() = 0;
};

#endif