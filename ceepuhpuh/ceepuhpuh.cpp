#include <iostream>
#include <string>
#include <vector>


class Player {

public:

	/* Variables */
	std::string name;

	/* Constructor */
	Player (std::string);

	/* Methods */
	std::string get_name();
};


/* Player Methods */

Player::Player(std::string in_name):
	name (in_name)
{
}

std::string Player::get_name()
{
	return this->name;
}

typedef std::vector<Player *> PlayerList;

int main()
{
	Player *player1 = new Player ("zeroeth");
	Player *player2 = new Player ("mizu"   );
	Player *player3 = new Player ("haiiro" );
	Player *player4 = new Player ("takeshi");


	PlayerList *players = new PlayerList;

	players->push_back(player1);
	players->push_back(player2);
	players->push_back(player3);
	players->push_back(player4);


	PlayerList::iterator player_iterator;

	for (player_iterator = players->begin();  player_iterator != players->end();  player_iterator++)
	{
		std::cout << (*player_iterator)->get_name() << std::endl;
	}

	return 0;
}
