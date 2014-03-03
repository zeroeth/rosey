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
	return name;
}

//typedef vector<Player *> PlayerList;

int main()
{
	Player *player1 = new Player ("zeroeth");
	Player *player2 = new Player ("mizu"   );
	Player *player3 = new Player ("haiiro" );
	Player *player4 = new Player ("takeshi");

	std::vector<Player*> *players = new std::vector<Player*>;

	players->push_back(player1);
	players->push_back(player2);
	players->push_back(player3);
	players->push_back(player4);

	for (std::vector<Player*>::iterator iterator = players->begin(); iterator != players->end(); iterator++)
	{
		std::cout << (*iterator)->get_name() << std::endl;
	}

	return 0;
}
