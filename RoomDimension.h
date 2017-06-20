#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H
#include "FeetInches.h"

#include <iostream>
using namespace std;

class RoomDimension
{
    private:
        FeetInches length;
        FeetInches width;

    public:
        RoomDimension()
        {
            length = 0;
            width = 0;
        }
        RoomDimension(double len, double w)
        {
            length = len;
            width = w;
        }

        void setLength(double l)
        {
            length = l;
        }
        void setWidth (double w)
        {
            width = w;
        }
        double getLength()
        {
            return length;
        }
        double getWidth()
        {
            return width;
        }
        double getArea()
        {
            return  length * width;
        }
};

#endif // ROOMDIMENSION_H
