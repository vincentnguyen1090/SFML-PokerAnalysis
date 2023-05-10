//
// Created by vince on 3/27/2023.
//

#ifndef POKER_ANALYSIS_POKERSCORE_H
#define POKER_ANALYSIS_POKERSCORE_H
#include "scoresENUM.h"
#include <vector>
#include <iostream>
class PokerScore
{
public:
    std::vector<scoresENUM> scores;
    static int royal_flush, straight_flush, four_of_a_kind, full_house, flush, straight,
                three_of_a_kind, two_pair, pair, high_card;

    PokerScore();
    void incrementScore();
    int size() const;
    friend bool operator==(const PokerScore& p, scoresENUM score);
    void operator+=(const scoresENUM& score);
    friend std::ostream& operator<<(std::ostream& out, const PokerScore& score);
    scoresENUM& operator[](unsigned int index);
};


#endif //POKER_ANALYSIS_POKERSCORE_H
