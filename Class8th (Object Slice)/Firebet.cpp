#include "Firebet.h"

void Firebet::Recovery()
{
	health = maxHP;

	cout << "Firebet HP : " << health << endl;
}

void Firebet::Damage(int damage)
{
	health -= damage;
}
