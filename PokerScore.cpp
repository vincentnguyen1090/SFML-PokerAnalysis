//
// Created by vince on 3/27/2023.
//

#include "PokerScore.h"
int PokerScore::royal_flush = 0;
int PokerScore::straight_flush = 0;
int PokerScore::four_of_a_kind = 0;
int PokerScore::full_house = 0;
int PokerScore::flush = 0;
int PokerScore::straight = 0;
int PokerScore::three_of_a_kind = 0;
int PokerScore::two_pair = 0;
int PokerScore::pair = 0;
int PokerScore::high_card = 0;


PokerScore::PokerScore()
{

}

scoresENUM &PokerScore::operator[](unsigned int index)
{
    return scores[index];
}

std::ostream &operator<<(std::ostream &out, const PokerScore &score)
{
    for (int i = 0; i < score.scores.size(); ++i)
    {
        switch(score.scores[i]){
            case ROYAL_FLUSH:
                std::cout << "Royal flush" << std::endl;
                break;
            case STRAIGHT_FLUSH:
                std::cout << "Straight flush" << std::endl;
                break;
            case FOUR_OF_A_KIND:
                std::cout << "Four of a kind" << std::endl;
                break;
            case FULL_HOUSE:
                std::cout << "Full house" << std::endl;
                break;
            case FLUSH:
                std::cout << "Flush" << std::endl;
                break;
            case STRAIGHT:
                std::cout << "Straight" << std::endl;
                break;
            case THREE_OF_A_KIND:
                std::cout << "Three of a kind" << std::endl;
                break;
            case TWO_PAIR:
                std::cout << "Two pair" << std::endl;
                break;
            case ONE_PAIR:
                std::cout << "One pair" << std::endl;
                break;
            case HIGH_CARD:
                std::cout << "High card" << std::endl;
                break;
        }
    }
    return out;
}

void PokerScore::incrementScore()
{
    for (scoresENUM score : scores) {
        switch (score) {
            case ROYAL_FLUSH:
                royal_flush++;
                break;
            case STRAIGHT_FLUSH:
                straight_flush++;
                break;
            case FOUR_OF_A_KIND:
                four_of_a_kind++;
                break;
            case FULL_HOUSE:
                full_house++;
                break;
            case FLUSH:
                flush++;
                break;
            case STRAIGHT:
                straight++;
                break;
            case THREE_OF_A_KIND:
                three_of_a_kind++;
                break;
            case TWO_PAIR:
                two_pair++;
                break;
            case ONE_PAIR:
                pair++;
                break;
            case HIGH_CARD:
                high_card++;
                break;
        }
    }
}

int PokerScore::size() const
{
    return scores.size();
}

bool operator==(const PokerScore &p, scoresENUM score)
{
    for (int i = 0; i < p.size(); ++i)
    {
        if(p.scores[i] == score)
            return true;
    }
    return false;
}

void PokerScore::operator+=(const scoresENUM &score)
{
    scores.push_back(score);
}





