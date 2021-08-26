
#include"C_Alebadra.h"
#include"C_Arbalet.h"
#include"C_Arch.h"
#include"C_Saber.h"
#include"C_Spear.h"
#include"C_Sword.h"
int main(){
	C_Alebadra aleb;
	aleb.attack();
	aleb.break_w();

	std::cout << "\n";

	C_Arbalet arb;
	arb.attack();
	arb.break_w();

	std::cout << "\n";

	C_Arch arch;
	arch.attack();
	arch.break_w();

	std::cout << "\n";

	C_Saber saber;
	saber.attack();
	saber.break_w();

	std::cout << "\n";

	C_Spear spear;
	spear.attack();
	spear.break_w();

	std::cout << "\n";

	C_Sword sword;
	sword.attack();
	sword.break_w();
} 