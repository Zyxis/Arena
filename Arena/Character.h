#pragma once
class Character
{
public:
	Character();
	~Character();


public:

	//Variabler

	//Hp
	int MaxHealth;
	int CurrentHealth;
	int BaseHealth; //Borde = level x hp f�r en specifik klass, b�r g�lla f�r samtliga base funktioner.
	float HealthBuff;

	//Defence
	int Armour;
	int MagicRessictence;

	//Damage
	int Damage;
	int BaseDamage;
	int WeponDamage;
	float DamageBuff;

	//
	int THAC0;
	int Initiativ;

	//Funktioner
	void UpdateStats();


};

