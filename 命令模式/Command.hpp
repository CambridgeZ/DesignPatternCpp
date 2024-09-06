#ifndef COMMAND_HPP
#define COMMAND_HPP

class Reciever;

class Command {
protected:
    Reciever* reciever;
public: 
    Command(Reciever* reciever) : reciever(reciever) {}
    virtual void execute() = 0;
};

#endif // COMMAND_HPP