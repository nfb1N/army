#pragma once
#include "C_BaseWeapon.h"
#include<thread>
class C_Rifle :
    public C_BaseWeapon
{
	C_Rifle()
	{
		this->damage = 30;
		this->strength = 50;
	}

	virtual void attack() {
		this->charg();
		std::cout << "damage: " << this->damage << "\n";
	}

	void charg() {
		std::cout << "charger...\n";
		std::this_thread::sleep_for(std::chrono::microseconds(2000));
	}
};

