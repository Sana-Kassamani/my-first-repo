#include <iostream>
#include<string.h>
using namespace std;

#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Fish.h"


void printTheClass(Animal* AnimalPtr); 

int main() {

	Dog d("Max", 4 , "German Shephard");
	Cat c("Milo", 2, "White", 4);
	Fish f("Bubbles", 3, 5, 3);

	Animal* AnimalArray[3];

	AnimalArray[0] = &d;
	AnimalArray[1] = &c;
	AnimalArray[2] = &f;
	 
	for (int i = 0 ; i < 3 ; i++)
	{ 
		printTheClass(AnimalArray[i]); // call function print by animal ptr that points to object of derived class
		// print() specific to derived class, if exists, executes
		cout << endl;
	}

	cout << c.getOwnerOfClass() << endl << endl;


}

void printTheClass(Animal* AnimalPtr) 
{
	AnimalPtr->print();

}
