#pragma once
class Terran
{
protected:
	int maxHP;
	int health;

public:
	Terran();

	void Recovery();
	void Damage(int damage);
};

