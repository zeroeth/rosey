/* Player */

typedef struct Player
{
	char *name;

} Player;


Player *new_player(char *name)
{
	Player *player = malloc(sizeof(Player));
	player->name = name;
	return player;
}

