#include <iostream>
#include <string.h>
using namespace std;

#ifndef CAT_H
#define CAT_H
#include "Animal.h"


class Cat : public Animal 
{
private:
    string Color;
	int PawSize;

public:
	Cat(string , int, string , int);
	virtual ~Cat();
	virtual void print();// cat overrides print()
	virtual string getOwnerOfClass() const;



};

#endif

