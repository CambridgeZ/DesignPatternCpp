#include "Resume.hpp"
#include <iostream>

using std::cout;
using std::endl;

Resume::Resume(const string& name, const string &sex, const string &age, const string &timeArea, const string &company):
    name(name),sex(sex),age(age),timeArea(timeArea),company(company) {}


Resume::Resume(const Resume &rhs):
    name(rhs.name),sex(rhs.sex),age(rhs.age),timeArea(rhs.timeArea),company(rhs.company) {}

Resume::~Resume() {}

Cloneable* Resume::clone() const {
    return new Resume(*this);
}

void Resume::setPersonalInfo(const string &sex, const string & age) {
    this->sex = sex;
    this->age = age;
}

void Resume::setWorkExperience(const string &timeArea, const string &company) {
    this->timeArea = timeArea;
    this->company = company;
}

void Resume::display() const {
    cout<<"Name: "<<name<<","<<endl;
    cout<<"Sex:"<< sex<<","<<endl;
    cout<<"Age:"<< age<<","<<endl;
    cout<<"Time Area:"<< timeArea<<","<<endl;
    cout<<"Company:"<< company<<endl;
}


