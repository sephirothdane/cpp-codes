#include "Armor.h";
#include "Character.h";



int main()
{	
	Character c(33, 44, 55, 66, 77, 88);
	Armor arm(22, 33, 44, 55, 66, 77);
	arm.releaseArmorInformation();
	c.releaseCharacterInformation();
}