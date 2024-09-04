#ifndef MYSQLDEPARTMENT_HPP
#define MYSQLDEPARTMENT_HPP

#include "IDepartment.hpp"
#include <iostream>

class MySQLDepartment: public IDepartment{
public:
    void insert() override{
        std::cout << "Insert a department into MySQL" << std::endl;
    }

    void getDepartment() override{
        std::cout << "Get a department from MySQL" << std::endl;
    }
};

#endif