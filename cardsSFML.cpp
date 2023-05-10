//
// Created by vince on 3/29/2023.
//

#include "cardsSFML.h"

sf::Texture cardsSFML::texture;

void cardsSFML::draw(sf::RenderTarget &target, sf::RenderStates states) const
{
    target.draw(background);
}

cardsSFML::cardsSFML()
{

}

cardsSFML::cardsSFML(ranksENUM rank, suitENUM suit)
{
    texture.loadFromFile("Images/cardsprite.png");
    background.setTexture(texture);
    intRect.width = 2925/13;
    intRect.height = 1260/4;
    updateCard(rank, suit);
    setScale();
}


void cardsSFML::updateCard(ranksENUM rank, suitENUM suit)
{
    intRect.left = rank * intRect.width;
    intRect.top = suit * intRect.height;
    background.setTextureRect(intRect);
}

void cardsSFML::setPosition(sf::Vector2f position)
{
    background.setPosition(position);
}

sf::Sprite cardsSFML::getBackground() const {
    return background;
}

void cardsSFML::setScale()
{
    background.setScale(sf::Vector2f(0.5, 0.5));
}
