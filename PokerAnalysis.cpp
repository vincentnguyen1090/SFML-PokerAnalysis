//
// Created by vince on 5/2/2023.
//

#include "PokerAnalysis.h"

PokerAnalysis::PokerAnalysis()
{
    RowOfCards rowOfCards;
    rowOfCards.addCard(cardsSFML(_TEN, HEARTS));
    rowOfCards.addCard(cardsSFML(_JACK, HEARTS));
    rowOfCards.addCard(cardsSFML(_QUEEN, HEARTS));
    rowOfCards.addCard(cardsSFML(_KING, HEARTS));
    rowOfCards.addCard(cardsSFML(_ACE, HEARTS));

    Application::addComponent(rowOfCards);
    Application::run();

    Deck deck;
    CardHand hands;
    PokerScore pokerScores;

    int count = 0;
    while(count < 650000 && PokerScore::royal_flush < 1)
    {
        deck.shuffle();

        for (int i = 0; i < 5; ++i)
        {
            hands.addCard(deck.dealCard());
        }

        CardHand::bubbleSort(hands);
        pokerScores = CardHandScorer::scorePokerHand(hands);
        pokerScores.incrementScore();
        hands.clearHand();

        std::cout << count << "\n";
        count++;
    }
    float num1 = count / PokerScore::royal_flush;
    //number of times i've run it / #of pokerscore found -> # : 1

}
