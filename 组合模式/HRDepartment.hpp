#ifndef HRDEPARTMENT_HPP
#define HRDEPARTMENT_HPP

#include "Company.hpp"
#include <iostream>
#include <memory>

using std::shared_ptr;

class HRDepartment : public Company {
public:
    HRDepartment(string name) : Company(name) {}
    void add(shared_ptr<Company> company) override {}
    void remove(shared_ptr<Company> company) override {}
    void display(int depth) override {
        for (int i = 0; i < depth; ++i) {
            std::cout<< "-";
        }
        std::cout<< name << std::endl;
    }
    void lineOfDuty() override {
        std::cout<< name << " 员工招聘培训管理" << std::endl;
    }
};

#endif // HRDEPARTMENT_HPP