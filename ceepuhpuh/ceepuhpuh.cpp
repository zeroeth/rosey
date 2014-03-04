#include "player.h"
#include "game_state.h"
#include "player_report.h"

int main()
{
	GameState *level = new GameState;

	level->add_player (new Player ("zeroeth"));
	level->add_player (new Player ("mizu"   ));
	level->add_player (new Player ("takeshi"));
	level->add_player (new Player ("haiiro" ));

	PlayerReport::about (level);

	/* TODO cleanup */

	return 0;
}
