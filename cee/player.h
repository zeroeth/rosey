#ifndef CEE_PLAYER_H_H
#define CEE_PLAYER_H_H

#include <stdlib.h>


/* Player */

typedef struct Player
{
	char *name;

} Player;


/* Prototypes */

Player *new_player (char *);

#endif
