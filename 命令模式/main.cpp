#include "Invoker.hpp"
#include "Reciever.hpp"
#include "BakeMuttonCommand.hpp"
#include "BakeChickenSwingCommand.hpp"

int main(){
    Reciever* reciever = new Reciever();
    Command* command1 = new BakeMuttonCommand(reciever);
    Command* command2 = new BakeChickenSwingCommand(reciever);
    Command* command3 = new BakeMuttonCommand(reciever);
    Invoker* invoker = new Invoker();
    invoker->setCommand(command1);
    invoker->setCommand(command2);
    invoker->setCommand(command3);
    
    invoker->CancelOrder(command1);
    invoker->setCommand(command1);

    invoker->executeCommand();

    return 0;
}