/* Player Report */

void player_report(GameState *game_state)
{
	for(int i = 0; i < game_state->player_position; i++)
	{
		printf("Player: %s\n", game_state->players[i]->name);
	}
}

