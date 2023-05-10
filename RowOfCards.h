//
// Created by vince on 3/30/2023.
//

#ifndef SFMLAPPLICATIONS_ROWOFCARDS_H
#define SFMLAPPLICATIONS_ROWOFCARDS_H
#include <vector>
#include "Component.h"
#include "cardsSFML.h"
class RowOfCards : public Component
{
private:
    std::vector<cardsSFML> cards;
    static int position;
public:
    void addCard(cardsSFML c);
    void draw(sf::RenderTarget &target, sf::RenderStates states) const override;
};


#endif //SFMLAPPLICATIONS_ROWOFCARDS_H
