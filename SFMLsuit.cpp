//
// Created by vince on 2/14/2023.
//

#include "SFMLsuit.h"

SFMLsuit::SFMLsuit() {}
SFMLsuit::SFMLsuit(suitENUM suit)
:suit(suit)
{
    setTexture(Images::getImage(suit));
}
suitENUM SFMLsuit::getSuit()
{
    return suit;
}
