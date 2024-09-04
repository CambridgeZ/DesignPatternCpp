#ifndef SQLSERVERUSER_HPP
#define SQLSERVERUSER_HPP

#include <iostream>
#include "User.hpp"
#include "IUser.hpp"

using std::cout;
using std::endl;

class SqlServerUser: public IUser{
public:
    void insert(User user) override{
        cout << "在SQL Server中给User表增加一条记录" << endl;
    }
    User getUser(int id) override{
        cout << "在SQL Server中根据ID得到User表一条记录" << endl;
        return User(1, "张三");
    }
};


#endif