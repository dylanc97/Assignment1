// NeedleSword.h
#include "Weapon.h"
#ifndef NEEDLESWORD_H
#define NEEDLESWORD_H

class NeedleSword : public Weapon{
public:
	
	NeedleSword() : Weapon("Needle Sword", 40){
	}
	
	virtual ~NeedleSword(){};
	
	virtual double hit(double armor);
};

#endif