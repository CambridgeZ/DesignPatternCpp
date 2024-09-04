#ifndef SQLSERVERDEPARTMENT_HPP
#define SQLSERVERDEPARTMENT_HPP

#include "IDepartment.hpp"
#include <iostream>

class SqlServerDepartment: public IDepartment{
public:
    void insert() override{
        std::cout << "Insert a department into SqlServer" << std::endl;
    }

    void getDepartment() override{
        std::cout << "Get a department from SqlServer" << std::endl;
    }
};

#endif