#include "Guard.hpp"
#include "Center.hpp"
#include "Forwards.hpp"
#include "Translator.hpp"

int main() {
    Player *b = new Guard("B");
    b->attack();
    b->defense();
    delete b;

    Player *m = new Center("M");
    m->attack();
    m->defense();
    delete m;

    Player *y = new Translator("Y");
    y->attack();
    y->defense();
    delete y;

    return 0;
}