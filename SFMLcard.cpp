//
// Created by vince on 2/14/2023.
//

#include "SFMLcard.h"
#include <iostream>
SFMLcard::SFMLcard()
{}
SFMLcard::SFMLcard(SFMLrank rank, SFMLsuit suit)
:rank(rank), suit(suit)
{
    formBackground();
    //fillRankColor();
    this->suit.setScale(0.3,0.3);
    Position::center(rect, this->suit);
}
void SFMLcard::formBackground()
{
    rect.setSize(sf::Vector2f(300, 500));
    rect.setFillColor(sf::Color::White);
    sf::FloatRect bounds = rect.getGlobalBounds();
    rect.setOrigin(bounds.width/2, bounds.height/2);
    rect.setPosition(400,300);
}

void SFMLcard::fillRankColor()
{
    if(suit.getSuit() == SPADES || suit.getSuit() == CLUBS){
        rank.getTop().setFillColor(fillColorBlack());
        rank.getBottom().setFillColor(fillColorBlack());
    }
    else
    {
        rank.getTop().setFillColor(fillColorRed());
        rank.getBottom().setFillColor(fillColorRed());
    }
}

void SFMLcard::draw(sf::RenderTarget& window, sf::RenderStates states) const
{
    window.draw(rect);
    window.draw(rank);
    window.draw(suit);
}

sf::Color SFMLcard::fillColorRed()
{
    return sf::Color::Red;
}

sf::Color SFMLcard::fillColorBlack()
{
    return sf::Color::Black;
}



