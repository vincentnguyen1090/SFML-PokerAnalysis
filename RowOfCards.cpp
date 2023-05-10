//
// Created by vince on 3/30/2023.
//

#include "RowOfCards.h"
int RowOfCards::position = 3;

void RowOfCards::addCard(cardsSFML c)
{
    if(cards.empty())
    {
        //c.setPosition(sf::Vector2f(10,10));
        cards.push_back(c);
    }
    else
    {
        c.setPosition
        (sf::Vector2f(cards.back().getBackground().getGlobalBounds().left +
         cards.back().getBackground().getGlobalBounds().width, cards.back().getBackground().getGlobalBounds().top));
        cards.push_back(c);
    }
}

void RowOfCards::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    for (int i = 0; i < 5; ++i) {
        target.draw(cards[i]);
    }
}










