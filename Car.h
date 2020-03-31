#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED
#include<cstring>
#include <iostream>
#include <math.h>
using namespace std;

class Car
{
    char * model;
    int speed;
    char * color;

public:
    Car();
    Car(char *model, int speed, char *color);
    ~Car();
    Car(Car &c);
    void print() const;
    char * getmodel(char *model) const;
    int getspeed(int speed) const;
    char getcolor(char *color) const;
    void setmodel(const char *model);
    void setspeed (int speed);
    void setcolor(const char *color);

    bool operator> (const Car & c) const;
    bool operator< (const Car & c) const;
    bool operator>= (const Car & c) const;
    bool operator<= (const Car & c) const;
    bool operator== (const Car & c) const;
    bool operator!= (const Car & c) const;
    Car &operator=(Car &c);
    void operator++();
    void operator--();
    friend ostream& operator<< (ostream &out, const Car &c);
    friend istream& operator>> (istream &in, Car &c);
};

#endif // CAR_H_INCLUDED
