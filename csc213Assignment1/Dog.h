#include <iostream>
#include <string.h>
using namespace std;

#ifndef DOG_H
#define DOG_H
#include "Animal.h"


class Dog : public Animal // dog inherits from animal
{
private:
	string Breed;


public :
	Dog(string, int, string);
	virtual ~Dog();
	virtual void print(); // dog overrides print()
	virtual string getOwnerOfClass() const;



};









#endif
