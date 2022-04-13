#include <iostream>
#include <string.h>
using namespace std;


#ifndef FISH_H
#define FISH_H
#include "Animal.h"

class Fish : public Animal
{
private:
	int GillCapacity;
	int SwimSpeed;

public:
	Fish(string, int, int ,int);
	virtual ~Fish();
	// fish does not override print()
	virtual string getOwnerOfClass() const;



};

#endif
