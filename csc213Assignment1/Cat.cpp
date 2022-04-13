#include <iostream>
#include <string.h>
using namespace std;

#include "Animal.h"
#include "Cat.h"


Cat ::Cat(string name, int age, string color, int pawSize ) : Animal(name , age) // call animal constructor
{
	cout << "Cat Created : \n" << endl;
	Color = color;
	PawSize = (pawSize ? pawSize > 0 : 1);
}

Cat :: ~Cat() {
	cout << "Cat Destroyed. " << endl;
}

void Cat::print() {
	cout << "Class is Cat. " << endl;

}
string Cat::getOwnerOfClass() const { return "Owner of Cat. "; }