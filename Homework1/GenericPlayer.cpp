//GenericPlayer.cpp

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

GenericPlayer::GenericPlayer(const string& name) :
	m_Name(name)
{}

GenericPlayer::~GenericPlayer()
{}

bool GenericPlayer::IsBusted() const
{
	return (GetTotal() > 21);
}

void GenericPlayer::Bust() const
{
	cout << m_Name << " busts.\n";
}