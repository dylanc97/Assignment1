#include "SimpleHammer.h"

double SimpleHammer::hit(double armor){
	double damage;
	
	// ignores all armor if armors less than 30
	if(armor <30){
		damage = hitPoints;
	}
	else 
		damage = hitPoints - armor;
	
	// Make sure no negative values are returned
	if (damage < 0)
		return 0;
	
	return damage;

}