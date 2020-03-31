#include "Car.h"

Car::Car():Car("model", 0, "color"){}

Car::Car(char *model, int speed, char *color)
{
   this->model = NULL;
   setmodel(model);
   this->speed = 0;
   setspeed(speed);
   this->color = NULL;
   setcolor(color);
}

Car::Car(Car &c):Car(c.model,c.speed,c.color){}

Car::~Car()
{
    delete [] model;
    delete [] color;
}
void Car :: print() const
{
    std::cout<<"model - "<< model <<", ";
    std::cout<<"speed - "<< speed <<", ";
    std::cout<<"color - "<< color <<"\n";
}

void Car :: setmodel(const char *model)
{
 delete[] this->model;
 int len = strlen(model)+1;
 this ->model = new char [len];
 strcpy(this->model, model);
}

void Car :: setspeed (int speed)
{
 if (speed>0){this->speed = speed;}
}

void Car :: setcolor (const char *color)
{
 delete[] this->color;
 int len = strlen(color)+1;
 this ->color = new char [len];
 strcpy(this->color, color);
}

char * Car :: getmodel(char *model) const
{
    strcpy(model, this->model);
    return model;
}

char Car :: getcolor(char *color) const
{
    strcpy(color, this->color);
    return *color;
}

int Car :: getspeed(int speed) const
{
    return speed;
}

bool Car::operator> (const Car & c) const
{
    return(speed > c.speed);
}

bool Car::operator< (const Car & c) const
{
    return(speed < c.speed);
}

bool Car::operator>= (const Car & c) const
{
    return !(*this < c);
}

bool Car::operator<= (const Car & c) const
{
    return !(*this > c);
}

bool Car::operator== (const Car & c) const
{
    return(speed == c.speed);
}

bool Car::operator!= (const Car & c) const
{
    return !(*this == c);
}

Car&Car::operator=(Car &c)
{
    this ->model = NULL;
    setmodel(c.model);
    this ->color = NULL;
    setcolor(c.color);
    this-> speed = c.speed;
    return *this;
}

void Car::operator++()
{
    this->speed ++;
}

void Car::operator--()
{
    this->speed --;
}

ostream& operator<< (ostream &out, const Car &c)
{
    out << " speed: " << c.speed << " model: " << c.model << " color: " << c.color;
    return out;
}

istream& operator>> (istream &in, Car &c)
{
    in >> c.model;
    in >> c.color;
    in >> c.speed;
    return  in;
}
