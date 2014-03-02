#include "player.h"


Player *new_player(char *name)
{
	Player *player = malloc(sizeof(Player));
	player->name = name;
	return player;
}
