#pragma once
#include <iostream>
#include "Pokemon.h"

class JigglyPuff : public Pokemon {

public:
	JigglyPuff();

	Pokemon* actionMenu(Pokemon& opponent) override;
	void basicAttack(Pokemon& opponent) override;

};