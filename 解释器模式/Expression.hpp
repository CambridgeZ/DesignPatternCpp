#ifndef EXPRESSION_HPP
#define EXPRESSION_HPP

#include "PlayContext.hpp"
#include <memory>
#include <string>
#include <iostream>

using std::shared_ptr;
using std::string;
using std::cout;
using std::endl;

class Expression {
public:
    virtual void excute(string key, double value) =0;
    void interpret(shared_ptr<PlayContext> context){
        if(context->getPlayText().length() == 0){
            return ;
        }
        else {
            string playKey = context -> getPlayText().substr(0, 1);
            context -> setPlayText(context -> getPlayText().substr(2));
            double playValue = std::stod(context -> getPlayText().substr(0, context -> getPlayText().find(" ")));
            context -> setPlayText(context -> getPlayText().substr(context -> getPlayText().find(" ") + 1));
            excute(playKey, playValue);
        }
    }
};

#endif // EXPRESSION_HPP