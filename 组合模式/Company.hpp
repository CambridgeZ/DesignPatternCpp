#ifndef COMPANY_HPP
#define COMPANY_HPP

#include <memory>
#include <string>

using std::string;
using std::shared_ptr;

class Company {
protected:
    string name;
public:
    Company(string name) : name(name) {}
    virtual void add(shared_ptr<Company> company) = 0;
    virtual void remove(shared_ptr<Company> company) = 0;
    virtual void display(int depth) = 0;
    virtual void lineOfDuty() = 0;
};

#endif // COMPANY_HPP