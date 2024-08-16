#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

using std::string;

class Animal{
    protected:
        int shoutNum = 3;
        string name = "";
        virtual string getShoutSound()=0;
    public:
        Animal(string name){
            this->name = name;
        }
        Animal(){
            this->name = "无名";
        }
        string getName(){
            return name;
        }
        string shout() {
            string res = "";
            string sound = getShoutSound();
            for(int i = 0; i < shoutNum; i++){
                res += sound;
            }
            return res;
        }
        virtual ~Animal(){}
};

#endif