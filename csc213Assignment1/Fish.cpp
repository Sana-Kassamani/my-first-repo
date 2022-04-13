#include <iostream>
#include<string.h>
using namespace std;

#include "Animal.h"
#include "Fish.h"


Fish::Fish(string name,  int age, int gillCapacity, int swimSpeed) : Animal(name, age)
{
	cout << "Fish Created : \n" << endl;
	GillCapacity = (gillCapacity ? gillCapacity > 0 : 1);
	SwimSpeed = (swimSpeed ? swimSpeed > 0 : 1);
}

Fish :: ~Fish() {
	cout << "Fish Destroyed. " << endl;
}


string Fish::getOwnerOfClass() const { return "Owner of Fish. "; }