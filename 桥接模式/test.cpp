#include "HandSetBrandM.hpp"
#include "HandsetGame.hpp"
#include "HandsetBrand.hpp"
#include "HandsetSoftware.hpp"

int main(){
    HandsetBrand *brand = new HandSetBrandM();
    brand->setHandsetSoft(new HandsetGame());
    brand->run();
    return 0;
}