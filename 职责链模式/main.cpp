#include "CommonManager.hpp"
#include "GeneralManager.hpp"
#include "Director.hpp"

int main() {
    Manager *commonManager = new CommonManager("Alice");
    Manager *generalManager = new GeneralManager("Bob");
    Manager *director = new Director("Charlie");

    commonManager->setSuccessor(generalManager);
    generalManager->setSuccessor(director);

    commonManager->handleRequest(1000);
    commonManager->handleRequest(10000);
    commonManager->handleRequest(100000);

    delete commonManager;
    delete generalManager;
    delete director;

    return 0;
}