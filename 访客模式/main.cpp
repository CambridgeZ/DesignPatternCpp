#include "ObjectStructure.hpp"
#include "Action.hpp"
#include "Man.hpp"
#include "Woman.hpp"
#include "Success.hpp"
#include "Fail.hpp"

int main() {
    auto o = std::make_shared<ObjectStructure>();
    o->attach(std::make_shared<Man>());
    o->attach(std::make_shared<Woman>());

    auto s = std::make_shared<Success>();
    o->display(s);

    auto f = std::make_shared<Fail>();
    o->display(f);

    return 0;
}