#pragma once
#include <iostream>
#include <string>
using namespace std;
class Armor {
private:
	int armorHealth;				//armor health attributes
	int armorMagicPoints;			//armor magic points
	int armorLevel;					//armor level
	int armorSpeed;
	int armorAgility;
	int armorAttack;
	int armorJob;

public:
	//Setup armor health
	void setaArmorHealth(int armorHP) {
		armorHealth = armorHP;
	}

	//get armor health *getter
	int getArmorHealth()
	{
		return armorHealth;
	}
	//setup armor magic points
	void setaArmorMagicPoints(int armorMP) {
		armorMagicPoints = armorMP;
	}
	// get armor magic points
	int getArmorMagicPoints() {
		return armorMagicPoints;
	}
	//setup armor level
	void setaArmorLevel(int alvl) {
		armorLevel = alvl;
	}
	//get armor level
	int getArmorLevel() {
		return armorLevel;
	}
	//setup armor job
	void setaArmorJob(int ajob) {
		armorJob = ajob;
	}
	//get armor job
	int getArmorJob() {
		return armorJob;
	}
	Armor(
		int aHP = 0,
		int aMP = 0,
		int aLvl = 0,
		int aSPD = 0,
		int aAGI = 0,
		int aATT = 0
	)
	{
		armorHealth = aHP;
		armorMagicPoints = aMP;
		armorLevel = aLvl;
		armorSpeed = aSPD;
		armorAgility = aAGI;
		armorAttack = aATT;

	}
	Armor operator + (Armor const& obj) {
		Armor arm;
		arm.armorHealth = armorHealth + obj.armorHealth;
		arm.armorMagicPoints = armorMagicPoints + obj.armorMagicPoints;
		arm.armorLevel = armorLevel + obj.armorLevel;
		arm.armorSpeed = armorSpeed + obj.armorSpeed;
		arm.armorAgility = armorAgility + obj.armorAgility;
		arm.armorAttack = armorAttack + obj.armorAttack;
		return arm;
	}
	void releaseArmorInformation() {
		std::cout << "Armor HP " << armorHealth << std::endl;
		std::cout << "Armor MP " << armorMagicPoints << std::endl;
		std::cout << "ArmorLVL " << armorLevel << std::endl;
		std::cout << "Armor SPD " << armorSpeed << std::endl;
		std::cout << "Armor AGI " << armorAgility << std::endl;
		std::cout << "Armor ATT " << armorAttack << std::endl;

	}
};