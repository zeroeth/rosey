#include <stdlib.h>
#include <stdio.h>


/* Player */

typedef struct Player
{
	char *name;

} Player;



/* Game State */

typedef struct GameState
{
	// Players
	Player *players[10];
	int player_position;
} GameState;


void add_player(GameState *game_state, Player *player)
{

}



/* Application */

int main()
{
	GameState *level = malloc(sizeof(GameState));

	Player *player1 = malloc(sizeof(Player));
	player1->name = "mizu";

	Player *player2 = malloc(sizeof(Player));
	player2->name = "zeroeth";

	level->players[0] = player1;
	level->players[1] = player2;

	printf("Player: %s\n", player1->name);
	printf("Player: %s\n", player2->name);
}
