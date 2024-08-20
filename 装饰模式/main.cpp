#include <iostream>
#include "Person.hpp"
#include "TShirt.hpp"
#include "BigTrouser.hpp"

using std::cout;
using std::endl;

int main(){
    Person xc = Person("小菜");
    cout<<"第一种装扮："<<endl;
    
    BigTrouser kk = BigTrouser();
    kk.decorate(&xc);

    TShirt dtx = TShirt();
    dtx.decorate(&kk);
    dtx.show();

    return 0;
}