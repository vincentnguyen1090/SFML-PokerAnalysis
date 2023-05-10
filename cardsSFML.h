//
// Created by vince on 3/29/2023.
//

#ifndef SFMLAPPLICATIONS_CARDSSFML_H
#define SFMLAPPLICATIONS_CARDSSFML_H
#include "Component.h"
#include "ranksENUM.h"
#include "suitENUM.h"
class cardsSFML : public Component
{
private:
    sf::Sprite background;
    sf::IntRect intRect;
    static sf::Texture texture;
    void updateCard(ranksENUM rank, suitENUM suit);
public:
    cardsSFML();
    cardsSFML(ranksENUM rank, suitENUM suit);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
    void setPosition(sf::Vector2f position);
    void setScale();
    sf::Sprite getBackground() const;
};


#endif //SFMLAPPLICATIONS_CARDSSFML_H
