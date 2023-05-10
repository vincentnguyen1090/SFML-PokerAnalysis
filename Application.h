//
// Created by vince on 3/29/2023.
//

#ifndef SFMLAPPLICATIONS_APPLICATION_H
#define SFMLAPPLICATIONS_APPLICATION_H
#include <SFML/Graphics.hpp>
#include "Component.h"
#include <vector>
class Application
{
private:
     static sf::RenderWindow window;
     static std::vector<Component*> components;
public:
    static void run();
    static void addComponent(Component &component);
};


#endif //SFMLAPPLICATIONS_APPLICATION_H
