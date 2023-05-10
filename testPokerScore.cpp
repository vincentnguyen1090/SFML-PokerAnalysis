//
// Created by vince on 3/31/2023.
//

#include "testPokerScore.h"
void testPokerScore()
{
    CardHand ch;
    ch.addCard(Card(SPADES,TEN));
    ch.addCard(Card(SPADES,ACE));
    ch.addCard(Card(SPADES,KING));
    ch.addCard(Card(SPADES, QUEEN));
    ch.addCard(Card(SPADES,JACK));
    CardHand::bubbleSort(ch);

    PokerScore pokerScore = CardHandScorer::scorePokerHand(ch);
    pokerScore.incrementScore();
    std::cout << pokerScore;
}
