//
// Created by vince on 2/15/2023.
//

#ifndef SFML_CARDS_POSITION_H
#define SFML_CARDS_POSITION_H

#include <SFML/Graphics.hpp>
class Position
{
public:
    template <typename T, typename S>
    static void center(const T& constObj, S& object);
};

#include "Position.cpp"
#endif //SFML_CARDS_POSITION_H
