//Game.h

#ifndef GAME_H
#define GAME_H
#include "Player.h"
#include "Deck.h"
#include "House.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

class Game
{
public:
	Game(const vector<string>& names);

	~Game();

	//plays the game of blackjack    
	void Play();

private:
	Deck m_Deck;
	House m_House;
	vector<Player> m_Players;
};

#endif // GAME_H

