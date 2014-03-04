#ifndef CEPP_GAMESTATE_H
#define CEPP_GAMESTATE_H

#include <vector>
#include "player.h"


typedef std::vector<Player *> PlayerList;

/* TODO try single file class with methods embedded */

class GameState {

public:

	GameState ();

	Player* add_player (Player*);

	PlayerList* get_players ();


private:

	PlayerList *players;
};

#endif
