#ifndef USER_HPP
#define USER_HPP

#include <string>

using std::string;
class User{
private:
    int _id;
    string _name;
public:
    User(int id, string name):_id(id), _name(name){}
    int getId() const {return _id;}
    string getName() const {return _name;}
    void setId(int id) {_id = id;}
    void setName(string name) {_name = name;}
};

#endif