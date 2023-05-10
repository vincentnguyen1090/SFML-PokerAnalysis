//
// Created by vince on 4/20/2023.
//

#ifndef POKER_ANALYSIS_PROBABILITY_H
#define POKER_ANALYSIS_PROBABILITY_H
#include "scoresENUM.h"
#include "PokerScore.h"
#include "Component.h"
class Probability : public Component
{
private:
    sf::Font font;
    sf::Text text;
    int num1, num2;
public:
    Probability();
    void setFont();
    void setProbability();
    void numToString();
};


#endif //POKER_ANALYSIS_PROBABILITY_H
