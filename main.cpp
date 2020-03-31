#include <iostream>
#include "Car.h"


int main()
{
 Car c;
 c.print();
 Car c1("Mercedes", 300, "red");

 c1.print();

 char n[25];
 c1.getmodel(n);
 cout << c1.getmodel(n) <<"\n"<<endl;

    cout << "gg" << endl;
    return 0;
}
