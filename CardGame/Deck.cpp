#include "Deck.h"
#include <iostream>

using namespace std;

Deck::Deck()
{
	this->deck = new vector<Card>();

	for (int i = 0; i < this->size; i++)
	{
		Card card = Card(this->suits[i % 13], this->values[i / 13]);
		(*deck)[i] = card;
	}
}


Deck::~Deck()
{
}

void Deck::drawCard()
{
	cout << 
}

void Deck::shuffle()
{
	vector<Card> tempDeck();
}

void Deck::printDeck()
{

}