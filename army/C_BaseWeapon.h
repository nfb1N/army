#pragma once
#include<iostream>
class C_BaseWeapon
{
protected:
	int strength;
	int damage;
public:
	C_BaseWeapon()
	{
		this->damage = 0;
		this->strength = 0;
	}

	void attack() {
		std::cout << "damage: " << this->damage <<"\n";
	}
	void break_w() {
		std::cout << "strength: " << this->strength << "\n";
	}
};

