#ifndef NOTE_HPP
#define NOTE_HPP

#include "Expression.hpp"

class Note: public Expression {
public:
    void excute(string key, double value) override {
        string note;
        switch (key[0]) {
            case 'C':
                note = "1";
                break;
            case 'D':
                note = "2";
                break;
            case 'E':
                note = "3";
                break;
            case 'F':
                note = "4";
                break;
            case 'G':
                note = "5";
                break;
            case 'A':
                note = "6";
                break;
            case 'B':
                note = "7";
                break;
        }
        cout << note << " ";
    }

};


#endif // NOTE_HPP