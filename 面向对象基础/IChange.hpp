#ifndef ICHANGE_HPP
#define ICHANGE_HPP

#include <string>

using std::string;

class IChange{
    public:
        virtual string change(const string &s) const= 0;
        virtual ~IChange(){}
};

#endif