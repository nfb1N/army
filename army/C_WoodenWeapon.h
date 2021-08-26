#pragma once
#include "C_BaseWeapon.h"
class C_WoodenWeapon :
    public C_BaseWeapon
{
public:
	C_WoodenWeapon()
	{
		this->damage = 15;
		this->strength = 30;
	}

	virtual void break_w() {

		this->fire();
		this->strength -= 5;
		std::cout << "strength: " << this->strength << "\n";
	}

	void fire() {
		std::cout << "ur weaopn is fierd!!!\n";
	}
};

