#ifndef MAN_HPP
#define MAN_HPP

#include "Person.hpp"
#include "Action.hpp"
#include <memory>


class Man: public Person {
public:
    void accept(std::shared_ptr<Action> visitor) override {
        visitor->getManConclusion(this);
    }
};


#endif //MAN_HPP