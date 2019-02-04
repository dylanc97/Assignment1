#include <string>
#include "Weapon.h"
#include <cstdlib>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon{
	public:
	CrazyRandomSword() : Weapon("Crazy random sword", (rand()%(100 - 7 + 1) + 7)){
	}
	
	virtual ~CrazyRandomSword(){};
	virtual double hit(double armor);
};

#endif