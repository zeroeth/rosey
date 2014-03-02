#ifndef CEE_GAME_STATE_H
#define CEE_GAME_STATE_H

#include <stdlib.h>
#include "player.h"


/* Game State */

typedef struct GameState
{
	/* Simple 'dynamic' Array */
	Player *players[10];
	int player_position;

} GameState;


/* Prototypes */

GameState *new_game_state ();
void       add_player (GameState *, Player *);

#endif
