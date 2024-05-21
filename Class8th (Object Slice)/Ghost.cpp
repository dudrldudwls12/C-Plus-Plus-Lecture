#include "Ghost.h"

void Ghost::Recovery()
{
	health = 45;
	
	cout << "Ghost HP : " << health << endl;
}

void Ghost::Damage(int damage)
{
	health = maxHP;

	cout << "Ghost HP : " << health << endl;
}
