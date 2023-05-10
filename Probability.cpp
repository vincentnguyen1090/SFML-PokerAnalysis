//
// Created by vince on 4/20/2023.
//

#include "Probability.h"


Probability::Probability()
{
    if (!font.loadFromFile("Images/OpenSans-Bold.ttf"))
    {
        std::cout << "Hello";
        exit(1);
    }

    sf::Text text("Hello, World!", font, 30);
    text.setFillColor(sf::Color::Black);
    text.setPosition(100, 100);
}

void Probability::setFont()
{
    text.setFont(font);
    text.setString("Odds Against: #");
}

void Probability::setProbability()
{

}
