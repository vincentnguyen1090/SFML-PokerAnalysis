//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_CARD_H
#define SFML_PROJECTS_CARD_H
#include "Position.h"
#include "SFMLrank.h"
#include "SFMLsuit.h"
#include <SFML/Graphics.hpp>
class SFMLcard : public sf::Drawable, sf::Transformable
{
private:
    sf::RectangleShape rect;
    SFMLrank rank;
    SFMLsuit suit;
public:
    SFMLcard();
    SFMLcard(SFMLrank rank, SFMLsuit suit);

    void fillRankColor();
    sf::Color fillColorRed();
    sf::Color fillColorBlack();

    void formBackground();
    virtual void draw(sf::RenderTarget& window, sf::RenderStates states) const;
};



#endif //SFML_PROJECTS_CARD_H
