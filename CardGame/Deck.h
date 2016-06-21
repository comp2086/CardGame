#include "Card.h"
#include <vector>

class Deck
{
public:
	Deck();
	~Deck();
	void drawCard();
	void shuffle();
	void printDeck();

private:
	const int size = 52;
	const std::string suits[4] = { "H", "D", "S", "C" };
	const std::string values[13] = { "A", "2", "3", "4", "5",
	"6", "7", "8", "9", "10", "J", "Q", "K" };

	Card currentCard;
	std::vector<Card> *deck;
	
};

