#ifndef CEEPP_PLAYER_H
#define CEEPP_PLAYER_H

#include <string>


/* Player Class */

class Player {

public:

	/* Constructor */
	Player (std::string);

	/* Methods */
	std::string get_name();


private:
	/* Variables */
	std::string name;
};

#endif
