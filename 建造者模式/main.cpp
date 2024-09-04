#include "Director.hpp"
#include "Product.hpp" 
#include "ConcreteBuilder1.hpp"

int main(){
    ConcreteBuilder1* builder1 = new ConcreteBuilder1();
    // ConcreteBuilder2* builder2 = new ConcreteBuilder2();
    Director director1(builder1);
    // Director director2(builder2);
    director1.construct();
    // director2.construct();
    Product* product1 = builder1->getResult();
    // Product* product2 = builder2->getResult();
    product1->show();
    // product2->show();
    delete builder1;
    // delete builder2;
    delete product1;
    // delete product2;
    return 0;
}