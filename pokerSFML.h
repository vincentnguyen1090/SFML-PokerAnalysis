//
// Created by vince on 4/20/2023.
//

#ifndef POKER_ANALYSIS_POKERSFML_H
#define POKER_ANALYSIS_POKERSFML_H
#include "RowOfCards.h"
#include "Component.h"
// when we create this object and pass it components, it will draw the entire poker display
class pokerSFML : public Component
{
private:
    sf::Sprite sprite;
    sf::Texture texture;
public:
    pokerSFML();

    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;

};


#endif //POKER_ANALYSIS_POKERSFML_H
