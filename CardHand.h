//
// Created by vince on 3/27/2023.
//

#ifndef POKER_ANALYSIS_CARDHAND_H
#define POKER_ANALYSIS_CARDHAND_H
#include <vector>
#include "Deck.h"
class CardHand
{
private:
    std::vector<Card> hand;
    int count = 1;
    int freq[5];
public:
    int getCount();
    int getFreq();

    void clearHand();
    void addCard(const Card &card);
    static void bubbleSort(CardHand &cardHand);
    static void swap(Card &card1, Card &card2);
    friend std::ostream& operator<<(std::ostream& out, const CardHand& card);
    friend bool operator>(const Card &lCard, const Card &rCard);
    friend bool operator>=(const Card &lCard, const Card &rCard);
    friend bool operator!=(const Card &lCard, const Card &rCard);
    friend bool operator==(const Card &lCard, const Card &rCard);
    Card& operator[](unsigned int index);
    static bool checkForStraight(CardHand &ch);
    static bool checkForSameSuit(CardHand &ch);
    static bool checkForSameRank(CardHand &ch);
    static bool checkForFH(CardHand &ch);
};


#endif //POKER_ANALYSIS_CARDHAND_H
