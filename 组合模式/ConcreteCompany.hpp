#ifndef CONCRETECOMPANY_HPP
#define CONCRETECOMPANY_HPP

#include "Company.hpp"
#include <iostream>
#include <vector>
#include <memory>

using std::shared_ptr;
using std::vector;

class ConcreteCompany : public Company {
private:
    vector<shared_ptr<Company>> children;
public:
    ConcreteCompany(string name) : Company(name) {}
    void add(shared_ptr<Company> company) override {
        children.push_back(company);
    }
    void remove(shared_ptr<Company> company) override {
        for (auto it = children.begin(); it != children.end(); ++it) {
            if (*it == company) {
                children.erase(it);
                return;
            }
        }
    }
    void display(int depth) override {
        for (int i = 0; i < depth; ++i) {
            std::cout<< "-";
        }
        std::cout<< name << std::endl;
        for (auto child : children) {
            child->display(depth + 2);
        }
    }
    void lineOfDuty() override {
        for (auto child : children) {
            child->lineOfDuty();
        }
    }
};

#endif // CONCRETECOMPANY_HPP