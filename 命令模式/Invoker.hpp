#ifndef INVOKER_HPP
#define INVOKER_HPP

#include "Command.hpp"
#include "BakeMuttonCommand.hpp"
#include "BakeChickenSwingCommand.hpp"
#include <vector>
#include <typeinfo>
#include <iostream>
#include <time.h>

using std::vector;
using std::cout;
using std::endl;

class Invoker{
private:
    vector<Command*> commandList;
public:
    void executeCommand(){
        for(auto command: commandList){
            command -> execute();
        }
    }
    void setCommand(Command* command){
        if(typeid(*command) == typeid(BakeChickenSwingCommand)){
            cout<<"Sorry, we don't have chicken wing "<<endl;
        }
        else {
            commandList.push_back(command);
            cout<<"Command added "<< typeid(*command).name()<<endl;
        }
    }

    void CancelOrder(Command* command){
        for(auto it = commandList.begin(); it != commandList.end(); it++){
            if(typeid(**it) == typeid(*command)){
                commandList.erase(it);
                cout<<"Command canceled "<< typeid(*command).name()<<endl;
                break;
            }
        }
    }
};

#endif // INVOKER_HPP