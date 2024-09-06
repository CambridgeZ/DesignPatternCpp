#ifndef BAKEMUUTONCOMMAND_HPP
#define BAKEMUUTONCOMMAND_HPP

#include "Command.hpp"
#include "Reciever.hpp"

class BakeMuttonCommand : public Command {
public:
    BakeMuttonCommand(Reciever* reciever) : Command(reciever) {}

    void execute()  override {
        reciever->bakeMutton();
    }
};

#endif // BAKEMUUTONCOMMAND_HPP
