#include <iostream>
#include <string.h>
using namespace std;

#ifndef ANIMAL_H
#define ANIMAL_H


class Animal {
private :
	string Name;
	int Age;

public:
	
	Animal(string, int);
	virtual ~Animal();
	virtual void print();// virtual method, may or may not be overridden by derived clsses

	virtual string getOwnerOfClass() const = 0; //pure virtual method, should be overridden by all derived classes


};


#endif 
