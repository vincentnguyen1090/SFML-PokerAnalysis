//
// Created by vince on 4/20/2023.
//

#include "pokerSFML.h"

pokerSFML::pokerSFML()
{
    if (!texture.loadFromFile("Images/pokerHandRanking.jpg"))
    {
        exit(1);
    }
    sprite = sf::Sprite(texture);
}

void pokerSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(sprite);
}



