#include <string>

class Card
{
public:
	Card();
	Card(std::string, std::string);
	~Card();
	std::string getSuit() const;
	std::string getValue() const;
private:
	std::string suit;
	std::string value;
};

