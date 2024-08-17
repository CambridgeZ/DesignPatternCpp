#include "CashContext.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main(){
    double price = 0.0;
    int num = 0;
    int type = 0;
    cout << "Input the price: ";
    cin >> price;
    cout << "Input the number: ";
    cin >> num;
    cout << "Input the type(1 for normal, 2 for 80% discount, 3 for 300-100): ";
    cin >> type;
    CashContext cc(type);
    cout << "The result is: " << cc.GetResult(price, num) << endl;
    return 0;
}