#pragma once
#include "C_BaseWeapon.h"
class C_ManualWeapon :
    public C_BaseWeapon
{
public:
	C_ManualWeapon()
	{
		this->damage = 60;
		this->strength = 70;
	}

	virtual void break_w() {

		this->protection();
		this->strength -= 5;
		std::cout << "strength: " << this->strength << "\n";
	}

	void protection() {
		std::cout << "yr weapon saved yr live!!!\n";
	}
};

