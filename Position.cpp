//
// Created by vince on 2/15/2023.
//

#ifndef SFML_CARDS_POSITION_CPP
#define SFML_CARDS_POSITION_CPP
#include "Position.h"

template <typename T, typename S>
//constObj is windows
void Position::center(const T& constObj, S& obj)
{
   sf::FloatRect bounds = constObj.getGlobalBounds();
    obj.setPosition({
        bounds.left + bounds.width/2 - obj.getGlobalBounds().width/2,
        bounds.top + bounds.height/2 - obj.getGlobalBounds().height/2
    });

}

#endif