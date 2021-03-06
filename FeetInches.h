#ifndef FEETINCHES_H
#define FEETINCHES_H

#include <iostream>
using namespace std;

class FeetInches
{
    private:
        int feet;
        int inches;
        void simplify();

    public:
        FeetInches(int f = 0, int i = 0)
        { feet = f;
          inches = i;
          simplify(); }

        void setFeet(int f)
        { feet = f; }

        void setInches(int i)
        { inches = i;
          simplify(); }

        FeetInches multiply(FeetInches obj)
        { FeetInches temp;
          temp.feet = feet * obj.feet;
          temp.inches = inches * obj.inches;
          temp.simplify();
          return temp; }

        int getFeet() const
        { return feet; }

        int getInches() const
        { return inches; }

        FeetInches operator + (const FeetInches &);
        FeetInches operator - (const FeetInches &);
};

#endif
