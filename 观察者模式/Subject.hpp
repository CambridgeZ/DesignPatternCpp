#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <string>
#include <vector>
#include "Observer.hpp"

// class Observer;

using std::string;
using std::vector;

class Subject{
private:
    vector<Observer*> observers;
    int count;
    string action;
    string name;

public:
    Subject(string name):name(name){
        count = 0;
    }
    void attach(Observer* observer){
        observers.push_back(observer);
        count++;
    }
    void detach(Observer* observer){
        for(int i = 0; i < count; i++){
            if(observers[i] == observer){
                observers.erase(observers.begin() + i);
                count--;
                break;
            }
        }
    }
    void notify(string message){
        for(int i = 0; i < count; i++){
            observers[i]->update(message);
        }
    }

    string getAction(){
        return action;
    }
};

#endif

