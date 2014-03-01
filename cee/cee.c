#include <stdlib.h>
#include <stdio.h>
#include "player.h"
#include "game_state.h"
#include "player_report.h"


/* Application */

int main()
{
	GameState *level = new_game_state();

	add_player (level, new_player("mizu"));
	add_player (level, new_player("zeroeth"));
	add_player (level, new_player("haiiro"));
	add_player (level, new_player("takeshi"));

	player_report (level);
}
