#include "game_state.h"


GameState::GameState()
{
	this->players = new PlayerList;
}


Player* GameState::add_player (Player *player)
{
	this->players->push_back (player);
	return player;
}

PlayerList* GameState::get_players ()
{
	return this->players;
}

