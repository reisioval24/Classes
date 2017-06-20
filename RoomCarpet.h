#ifndef ROOMCARPET_H
#define ROOMCARPET_H
#include "FeetInches.h"
#include "RoomDimension.h"

#include <iostream>
using namespace std;

class RoomCarpet
{
    private:
        RoomDimension roomDimensions;
        double carpetCost;

    public:
        RoomCarpet (const RoomDimension& dim, double cost);

        double getCost()
        {
           return carpetCost * roomDimensions.getArea;
        }


};

#endif // ROOMCARPET_H
