//
// Created by vince on 3/27/2023.
//

#include "SFMLrank.h"
SFMLrank::SFMLrank()
{
}
SFMLrank::SFMLrank(const std::string &rank)
:text(rank)
{
    initialize();
}

SFMLrank::SFMLrank(rankENUM rank)
{
    text = enumToString(rank);
    initialize();
}

void SFMLrank::initialize()
{
    rect.setSize(sf::Vector2f(300,500));
    top.setFont(Font::getFont());
    bottom.setFont(Font::getFont());
    top.setString(text);
    bottom.setString(text);
    const sf::FloatRect bounds  = rect.getLocalBounds();
    top.setOrigin(bounds.left + bounds.width / 2, bounds.top + bounds.height / 2);
    bottom.setOrigin(bounds.left + bounds.width / 2, bounds.top + bounds.height / 2);
    top.setPosition(400, 300);
    bottom.setPosition(400, 300);
    bottom.rotate(180);
    top.setFillColor(sf::Color::Black);
    bottom.setFillColor(sf::Color::Black);
}

std::string SFMLrank::enumToString(rankENUM rank)
{
    return arr[rank];
}

sf::Text SFMLrank::getTop()
{
    return top;
}

sf::Text SFMLrank::getBottom()
{
    return bottom;
}

sf::Text SFMLrank::setTop(sf::Text top)
{
    return this->top = top;
}

sf::Text SFMLrank::setBottom(sf::Text bottom)
{
    return this->bottom = bottom;
}

void SFMLrank::draw(sf::RenderTarget &window, sf::RenderStates states) const
{
    window.draw(top);
    window.draw(bottom);
}



