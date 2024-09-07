#ifndef MAN_HPP
#define MAN_HPP

#include "Person.hpp"
#include "Action.hpp"


class Man: public Person {
public:
    void accept(std::shared_ptr<Action> visitor) override {
        visitor->getManConclusion(std::shared_ptr<Man>(this));
    }
};


#endif //MAN_HPP