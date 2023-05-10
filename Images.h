//
// Created by vince on 2/14/2023.
//

#ifndef SFML_PROJECTS_IMAGES_H
#define SFML_PROJECTS_IMAGES_H
#include <vector>
#include "suitENUM.h"
#include <SFML/Graphics.hpp>
#include <string>
class Images
{
private:
    static std::vector<sf::Texture> images;
    static std::string getPath(suitENUM suit);
    static void loadFile(suitENUM suit);
public:
    static sf::Texture& getImage(suitENUM suit);
};


#endif //SFML_PROJECTS_IMAGES_H
