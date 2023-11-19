#include <vector>
#include "Card.h"
using namespace std;

struct Deck {
    vector<Card> cards;

    int find_card(const Card card) const;

    Deck(int n);
    Deck();
};

Deck::Deck(int size)
{
    vector<Card> temp(size);
    cards = temp;
}

Deck::Deck()
{
    vector<Card> temp(52);
    cards = temp;
    int i = 0;
    for (Suit suit = CLUBS; suit <= SPADES; suit = Suit(suit+1)) {
        for (Rank rank = ACE; rank <= KING; rank = Rank(rank+1)) {
            cards[i].suit = suit;
            cards[i].rank = rank;
            i++;
        }
    }
}

int Deck::find_card(const Card card) const
{
    for (int i = 0; i < cards.size(); i++) {
        if (cards[i].equals(card)) return i;
    }
    return -1;
}