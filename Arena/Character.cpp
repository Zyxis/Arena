#include "Character.h"



Character::Character()
{
}


Character::~Character()
{
}

void Character::UpdateStats()
{
	//TODO - definera alla base points f�rst i funktionen - orningen viktig. 
	//TODO armor, intiativ och THACO �r ej inf�rda

	MaxHealth = BaseHealth + HealthBuff;
	Damage = BaseDamage + WeponDamage + DamageBuff;

}
