#include <iostream>
#include "Player.h"

int main()
{
	// ÀÎ½ºÅÏ½º/°´Ã¼.
	Player player1;
	player1.Move(5, 2);

	// Èü.
	Player* player2 = new Player();
	player2->Move(3, 1);
	//(*player2).Move(3, 1);
	delete player2;
	player2 = nullptr;

	std::cin.get();
}