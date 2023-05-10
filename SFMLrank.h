//
// Created by vince on 3/27/2023.
//

#ifndef POKER_ANALYSIS_SFMLRANK_H
#define POKER_ANALYSIS_SFMLRANK_H
#include <SFML/Graphics.hpp>
#include "Font.h"
#include "rankENUM.h"
class SFMLrank : public sf::Drawable, public sf::Transformable
{
    sf::Text top, bottom;
    rankENUM rank;
    std::string text;
    sf::RectangleShape rect;
    std::string arr[13] = {"A", "2", "3", "4", "5", "6",
                           "7", "8", "9", "10", "J", "Q", "K"};
public:
    SFMLrank();
    SFMLrank(const std::string &rank);
    SFMLrank(rankENUM rank);
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
    void initialize();

    std::string enumToString(rankENUM rank);

    sf::Text getTop();
    sf::Text getBottom();
    sf::Text setTop(sf::Text top);
    sf::Text setBottom(sf::Text bottom);

};


#endif //POKER_ANALYSIS_SFMLRANK_H
