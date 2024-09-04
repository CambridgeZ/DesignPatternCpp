#ifndef PRODUCT_HPP
#define PRODUCT_HPP

#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::vector;
using std::string;

class Product{
private:
    vector<string> parts;
public:
    void addPart(const string& part){
        parts.push_back(part);
    }

    void show(){
        for(auto& part : parts){
            cout << part << endl;
        }
    }
};

#endif