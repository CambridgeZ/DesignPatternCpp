#include "ConcreteCompany.hpp"
#include "HRDepartment.hpp"
#include <memory>

int main(){
    ConcreteCompany root("北京总公司");
    root.add(std::make_shared<HRDepartment>("总公司人力资源部"));

    ConcreteCompany comp("上海华东分公司");
    comp.add(std::make_shared<HRDepartment>("华东分公司人力资源部"));
    comp.add(std::make_shared<HRDepartment>("华东分公司财务部"));
    root.add(std::make_shared<ConcreteCompany>(comp));

    ConcreteCompany comp1("南京办事处");
    comp1.add(std::make_shared<HRDepartment>("南京办事处人力资源部"));
    comp1.add(std::make_shared<HRDepartment>("南京办事处财务部"));
    comp.add(std::make_shared<ConcreteCompany>(comp1));

    ConcreteCompany comp2("杭州办事处");
    comp2.add(std::make_shared<HRDepartment>("杭州办事处人力资源部"));
    comp2.add(std::make_shared<HRDepartment>("杭州办事处财务部"));
    comp.add(std::make_shared<ConcreteCompany>(comp2));

    root.display(1);
    root.lineOfDuty();

    return 0;
}