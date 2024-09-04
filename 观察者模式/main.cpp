#include "Boss.hpp"
#include "NBAObserver.hpp"
#include "StockObserver.hpp"
#include "Secretary.hpp"
#include "Subject.hpp"

int main(){
    Subject* boss = new Boss("胡汉三");
    Subject* secretary = new Secretary("李秘书");

    Observer* nba1 = new NBAObserver("王建国", boss);
    Observer* nba2 = new NBAObserver("李小亮", boss);
    Observer* stock1 = new StockObserver("张小强", secretary);
    Observer* stock2 = new StockObserver("李小刚", secretary);

    boss->attach(nba1);
    boss->attach(nba2);
    secretary->attach(stock1);
    secretary->attach(stock2);

    boss->notify("老板回来了");
    secretary->notify("老板回来了");

    boss->detach(nba1);
    boss->notify("老板回来了");

    return 0;
}