#include "player_report.h"


void PlayerReport::about(GameState *game_state)
{
	PlayerList::iterator player_iterator;

	for (player_iterator = game_state->get_players()->begin();  player_iterator != game_state->get_players()->end();  player_iterator++)
	{
		std::cout << (*player_iterator)->get_name() << std::endl;
	}
}

