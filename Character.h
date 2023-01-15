#include <iostream>
#include <string>


//template <class T>
class Character {
private:
	//Character Attributes
	int characterHealth;
	int characterMagicPoints;
	int characterLevel;
	int characterSpeed;
	int characterAgility;
	int characterAttack;
	int characterJob;
	bool headArmorEquipped;
	bool bodyArmorEqipped;
	bool handArmorEquipped;
	bool legArmorEquipped;

	//armorAttributes
public:
	//Setup character health
	void setaCharacterHealth(int hp) { 
		characterHealth = hp;
	}

	//get character health *getter
	int getCharacterHealth()
	{
		return characterHealth;
	}
	//setup character magic points
	void setaCharacterMagicPoints(int mp) {
		characterMagicPoints = mp;
	}
	// get character magic points
	int getCharacterMagicPoints() {
		return characterMagicPoints;
	}
	//setup character level
	void setaCharacterLevel(int lvl) {
		characterLevel = lvl;
	}
	//get character level
	int getCharacterLevel() {
		return characterLevel;
	}
	//setup character job
	void setaCharacterJob(int job) {
		characterJob = job;
	}
	//get character job
	int getCharacterJob() {
		return characterJob;
	}
	Character(
		int cHP = 0,
		int cMP = 0,
		int cLvl = 0,
		int cSPD = 0,
		int cAGI = 0,
		int cATT = 0
			)
	{
		 characterHealth=cHP;
		 characterMagicPoints=cMP;
		 characterLevel=cLvl;
		 characterSpeed=cSPD;
		 characterAgility=cAGI;
		 characterAttack=cATT;
		
	}
		Character operator + (Character const& obj) {
			Character c;
			c.characterHealth=characterHealth + obj.characterHealth;
			c.characterMagicPoints= characterMagicPoints + obj.characterMagicPoints;
			c.characterLevel=characterLevel + obj.characterLevel;
			c.characterSpeed=characterSpeed + obj.characterSpeed;
			c.characterAgility=characterAgility + obj.characterAgility;
			c.characterAttack=characterAttack + obj.characterAttack;
			return c;
		}
		void releaseCharacterInformation() {
			std::cout <<"HP " << characterHealth << std::endl;
			std::cout <<"MP " << characterMagicPoints << std::endl;
			std::cout <<"LVL " << characterLevel << std::endl;
			std::cout <<"SPD " << characterSpeed << std::endl;
			std::cout <<"AGI " << characterAgility << std::endl;
			std::cout <<"ATT " << characterAttack << std::endl;
				
		}
};