#include "Card.h"

using namespace std;

Card::Card() {}

Card::Card(string suit, string value)
{
	this->suit = suit;
	this->value = value;
}

Card::~Card()
{
}

string Card::getSuit() const
{
	return this->suit;
}

string Card::getValue() const
{
	return this->value;
}