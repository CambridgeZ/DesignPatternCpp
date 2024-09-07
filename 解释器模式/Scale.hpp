#ifndef SCALE_HPP
#define SCALE_HPP

#include "Expression.hpp"

class Scale: public Expression {
public:
    void excute(string key, double value) override {
        string scale;
        switch (int(value)) {
            case 1:
                scale = "低音";
                break;
            case 2:
                scale = "中音";
                break;
            case 3:
                scale = "高音";
                break;
        }
        cout << scale << " ";
    }
};


#endif // SCALE_HPP