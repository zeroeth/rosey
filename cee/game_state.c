#include "game_state.h"


GameState *new_game_state ()
{
	GameState *game_state = malloc(sizeof(GameState));
	game_state->player_position = 0;
	return game_state;
}

void add_player (GameState *game_state, Player *player)
{
	game_state->players[game_state->player_position] = player;
	game_state->player_position++;
}
