#include <iostream>
#include <string.h>
using namespace std;
#include "Animal.h"



Animal::Animal(string name, int age)
{
	cout << "Animal Created : " << endl;
	Name = name;
	Age = (age ? age > 0 : 1); // check validity of age
}
Animal:: ~Animal()
{
	cout << "Animal Destroyed. \n" << endl;
}

void Animal::print()
{
	cout << "Class is Animal. " << endl;
}