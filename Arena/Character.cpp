#include "Character.h"



Character::Character()
{
}


Character::~Character()
{
}

void Character::UpdateStats()
{
	//TODO - definera alla base points först i funktionen - orningen viktig. 
	//TODO armor, intiativ och THACO är ej införda

	MaxHealth = BaseHealth + HealthBuff;
	Damage = BaseDamage + WeponDamage + DamageBuff;

}
