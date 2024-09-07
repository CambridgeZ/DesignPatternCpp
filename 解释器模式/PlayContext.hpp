#ifndef PLAYCONTEXT_HPP
#define PLAYCONTEXT_HPP

#include <string>

using std::string;

class PlayContext {
private:
    string text;
public:
    string getPlayText(){
        return text;
    }
    void setPlayText(string text){
        this->text = text;
    }
};


#endif // PLAYCONTEXT_HPP