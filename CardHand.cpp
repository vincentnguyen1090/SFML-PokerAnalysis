//
// Created by vince on 3/27/2023.
//

#include "CardHand.h"

void CardHand::addCard(const Card &card)
{
    hand.push_back(card);
}

std::ostream &operator<<(std::ostream &out, const CardHand &card)
{
    for (int i = 0; i < card.hand.size(); ++i) {
        out << card.hand[i].getStrRank()
        << " of " << card.hand[i].getStrSuit() << "\n";
    }
    return out;
}

Card& CardHand::operator[](unsigned int index)
{
    return hand[index];
}

bool operator>(const Card &lCard, const Card &rCard)
{
    return lCard.getRankNum() > rCard.getRankNum();
}

bool operator>=(const Card &lCard, const Card &rCard)
{
    return lCard.getRankNum() >= rCard.getRankNum();
}

bool operator!=(const Card &lCard, const Card &rCard)
{
    return lCard.getRankNum() != rCard.getRankNum() - 1;

}

bool operator==(const Card &lCard, const Card &rCard)
{
    return lCard.getStrSuit() == rCard.getStrSuit();
}

bool compareCardRank(const Card &lCard, const Card &rCard)
{
    return lCard.getRankNum() == rCard.getRankNum(); // compares rank only
}

void CardHand::bubbleSort(CardHand &cardHand)
{
    int i, j;
    for (i = 0; i < 5 - 1; i++)
        // Last i elements are already
        // in place
        for (j = 0; j < 5 - i - 1; j++)
            if (cardHand[j] > cardHand[j+1])
                swap(cardHand[j], cardHand[j+1]);
}

void CardHand::swap(Card &card1, Card &card2)
{
    Card temp = card1;
    card1 = card2;
    card2 = temp;
}

bool CardHand::checkForStraight(CardHand &ch)
{
    //# of cards
    int n = 5;

    for (int i = 1; i < n; i++)

        // Unsorted pair found
        if (ch[i - 1] != ch[i])
            return false;

    // No unsorted pair found
    return true;
}

bool CardHand::checkForSameSuit(CardHand &ch)
{
    for (int i = 1; i < 5; ++i) {
        if(ch[i - 1] == ch[i])
            continue;
        else
            return false;
    }
    return true;
}

bool CardHand::checkForSameRank(CardHand &ch)
{
    for (int i = 0; i < 5; ++i) {
        ch.count = 1;
        for (int j = i + 1; j < 5; ++j) {
            if(compareCardRank(ch[i], ch[j]))
                ch.count++;
        }
        ch.freq[i] = ch.count;
    }
    if(ch.getFreq() > 0)
        return true;
    return false;
}

int CardHand::getCount()
{
    return count;
}

int CardHand::getFreq()
{
    int count = 0;
    for (int i = 0; i < 5; ++i) {
        if(freq[i] == 2)
            count++;
        else if(freq[i] == 3)
        {
            count = 3;
            break;
        }
        else if(freq[i] == 4)
        {
            count = 4;
            break;
        }
    }
    return count;
}

bool CardHand::checkForFH(CardHand &ch)
{
    int count = 0;
    for (int i = 0; i < 5; ++i) {
        if(ch.freq[i] == 2)
            count++;
    }
    if(count == 1)
        return false;
    return true;
}

void CardHand::clearHand()
{
    hand.clear();
}











