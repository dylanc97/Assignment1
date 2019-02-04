// NeedleSword.cpp
#include "NeedleSword.h"

double NeedleSword::hit(double armor){
	double damage;
	// ignores half the armor if its hitpoints is less than the armor
	if(hitPoints <= armor){
		damage = hitPoints - (armor * 0.5);
	}
	
	// ignores half armor if armor is less than hitpoints
	else{
		damage = hitPoints - armor;
	}
	
	// Make sure no negative values are returned
	if (damage < 0)
		return 0;
	
	return damage;
	
}