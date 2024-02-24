#include "Plant.h"
#include "Flower.h"
#include "Tree.h"
#include "Bush.h"

void Growthrates(Plant &plant)
{
    for (int i = 1; i <= 30; i++)
        plant.grow();
    plant.displayHeight();
}
int main()
{
    Flower flower(0);
    Bush bush(0);
    Tree tree(0);
    Growthrates(flower);
    Growthrates(bush);
    Growthrates(tree);
}
