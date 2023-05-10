//
// Created by vince on 3/31/2023.
//

#include "test_rf_straight.h"
void test_rf_straight()
{
    CardHand ch;
    ch.addCard(Card(SPADES,ACE));
    ch.addCard(Card(SPADES,KING));
    ch.addCard(Card(SPADES,QUEEN));
    ch.addCard(Card(SPADES,JACK));
    ch.addCard(Card(SPADES,TEN));
    CardHand::bubbleSort(ch);
/*    CardHand::bubbleSort(ch);
    std::cout << ch << "\n";
    if(CardHand::checkForStraight(ch) || CardHand::checkForSameSuit(ch))
        std::cout << "it's a straight or same suit";
    else
        std::cout << "it's not a straight";*/


    std::cout << ch << "\n";
    std::cout << "rankNUM: " << ch[0].getRankNum() << "\n";
    if(CardHand::checkForStraight(ch) && (ch[0].getRankNum() == 10) && CardHand::checkForSameSuit(ch))
        std::cout << "it's a royal flush";
    else
        std::cout << "it's not a straight";
}
