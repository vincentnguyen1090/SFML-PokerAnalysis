//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_SUIT_H
#define SFML_PROJECTS_SUIT_H
#include <SFML/Graphics.hpp>
#include "suitENUM.h"
#include "Images.h"

class SFMLsuit : public sf::Sprite
{
private:
    suitENUM suit;
public:
    SFMLsuit();
    SFMLsuit(suitENUM suit);
    suitENUM getSuit();
};



#endif //SFML_PROJECTS_SUIT_H
