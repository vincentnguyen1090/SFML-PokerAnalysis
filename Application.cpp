//
// Created by vince on 3/29/2023.
//

#include "Application.h"
#include <iostream>
sf::RenderWindow Application::window;
std::vector<Component*> Application::components;

void Application::run()
{
    window.create({1024, 720, 32}, "Poker");
    window.setFramerateLimit(60);
    while(window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        for(Component* item : components)
            window.draw(*item);
        window.display();
    }
}

void Application::addComponent(Component &component)
{
    components.push_back(&component);
}
