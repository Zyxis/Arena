#include "GameRules.h"



GameRules::GameRules()
{
}


GameRules::~GameRules()
{
}

int GameRules::Dice3()
{
	return rand()% 3+1;
}

int GameRules::Dice6()
{
	return rand()%6+1;
}

int GameRules::Dice20()
{
	return rand()%20+1;
}
