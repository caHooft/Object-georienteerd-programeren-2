//house.cpp

#include "Card.h"
#include "Deck.h"
#include "Game.h"
#include "GenericPlayer.h"
#include "Hand.h"
#include "House.h"
#include "Player.h"

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

House::House(const string& name) :
	GenericPlayer(name)
{}

House::~House()
{}

bool House::IsHitting() const
{
	return (GetTotal() <= 16);
}

void House::FlipFirstCard()
{
	if (!(m_Cards.empty()))
	{
		m_Cards[0]->Flip();
	}
	else
	{
		cout << "No card to flip!\n";
	}
}