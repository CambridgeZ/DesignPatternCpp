#include <iostream>
#include "OperationFactory.hpp"

using std::cin;
using std::cout;
using std::endl;

int main(){
    double numberA, numberB;
    char operate;
    cout << "请输入数字A: ";
    cin >> numberA;
    cout << "请输入运算符: ";
    cin >> operate;
    cout << "请输入数字B: ";
    cin >> numberB;

    try{
        Operation* operation = OperationFactory::createOperation(operate);
        cout << "结果是: " << operation->getResult(numberA, numberB) << endl;
        delete operation;
    }catch(const char* msg){
        cout << msg << endl;
    }
    
    return 0;
}