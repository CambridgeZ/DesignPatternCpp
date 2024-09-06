#ifndef BAKECHICKENSWINGCOMMAND_HPP
#define BAKECHICKENSWINGCOMMAND_HPP

#include "Command.hpp"
#include "Reciever.hpp"

class BakeChickenSwingCommand : public Command {
public:
    BakeChickenSwingCommand(Reciever* reciever) : Command(reciever) {}

    void execute()  override {
        reciever->bakeChickenWing();
    }
};

#endif // BAKECHICKENSWINGCOMMAND_HPP