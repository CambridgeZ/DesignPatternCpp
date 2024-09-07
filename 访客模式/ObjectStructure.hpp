#ifndef OBJECTSTRUCTURE_HPP
#define OBJECTSTRUCTURE_HPP

#include <vector>
#include <memory>
#include "Person.hpp"

using std::vector;
using std::shared_ptr;

class ObjectStructure {
private:
    vector<shared_ptr<Person>> elements;
public:
    void attach(shared_ptr<Person> element) {
        elements.push_back(element);
    }
    void detach(shared_ptr<Person> element) {
        for (auto it = elements.begin(); it != elements.end(); ++it) {
            if (*it == element) {
                elements.erase(it);
                break;
            }
        }
    }
    void display(shared_ptr<Action> visitor) {
        for (auto &element : elements) {
            element->accept(visitor);
        }
    }
};

#endif // OBJECTSTRUCTURE_HPP
