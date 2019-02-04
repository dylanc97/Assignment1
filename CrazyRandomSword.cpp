#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	// third is a yhird of the armor value for rand 
	int third = (int)armor/3;
	
	// Ignores random amount of armor up to a third of total armor
	double damage = hitPoints - (armor - (rand()%(third - 2 + 1) + 2)); 
	
	// Make sure no negative values are returned
	if (damage < 0)
		return 0;
	
	return damage;
}