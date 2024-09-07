#include "Note.hpp"
#include "Scale.hpp"
#include "PlayContext.hpp"

int main() {
    shared_ptr<PlayContext> context = std::make_shared<PlayContext>();
    context -> setPlayText("O 2 E 0.5 G 0.5 A 3 ");
    shared_ptr<Expression> expression;
    while(context -> getPlayText().length() > 0){
        string str = context -> getPlayText().substr(0, 1);
        if(str == "O"){
            expression = std::make_shared<Scale>();
        }
        else {
            expression = std::make_shared<Note>();
        }
        expression -> interpret(context);
    }
    return 0;
}