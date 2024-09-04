#ifndef RESUME_HPP
#define RESUME_HPP

#include <string>

using std::string;

class Resume : public Cloneable {
public:
    Resume(const string& name, const string &sex, const string &age, const string &timeArea, const string &company);
    Resume(const Resume &rhs);
    virtual ~Resume();
    virtual Cloneable* clone() const;
    void setPersonalInfo(const string &sex, const string &age);
    void setWorkExperience(const string &timeArea, const string &company);
    void display() const;
private:
    string name;
    string sex;
    string age;
    string timeArea;
    string company;
};

#endif

