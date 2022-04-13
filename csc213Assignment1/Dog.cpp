#include <iostream>
#include <string.h>
using namespace std;

#include "Animal.h"
#include "Dog.h"


Dog::Dog(string name, int age, string breed) : Animal(name,age)
{
	cout << "Dog Created :\n" << endl;
	Breed = breed;
}

Dog :: ~Dog() {
	cout << "Dog Destroyed. " << endl;
}

void Dog :: print() {
	cout << "Class is Dog. " << endl;

}
string Dog::getOwnerOfClass() const { return "Owner of Dog. "; }