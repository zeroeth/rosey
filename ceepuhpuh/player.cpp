#include "player.h"


/* Player Methods */

Player::Player(std::string in_name):
	name (in_name)
{
}


std::string Player::get_name()
{
	return this->name;
}
