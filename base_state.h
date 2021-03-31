#ifndef BASE_STATE_H_INCLUDED
#define BASE_STATE_H_INCLUDED

#include "engine.h"


class base_state
{
private:
    static base_state m_base_state;
public:

    virtual void events(engine * gEngine)
    {
        sf::Event event;
        while (gEngine->window.pollEvent(event)) //When an event happens, like the resizing of the window or a keyboard type
        {
            switch (event.type) //We are going to make changes based on what kind of event it is.
            {
                case sf::Event::Closed:
                    gEngine->window.close();
                    break;
                case sf::Event::MouseButtonPressed:
                    break;
                case sf::Event::MouseMoved:
                    break;
                case sf::Event::MouseButtonReleased:
                    break;
                default:
                    break;
            }
        }
        return;
    }
    virtual void update(engine * gEngine)
    {


    }
    virtual void render(engine * gEngine)
    {
        gEngine->window.clear(sf::Color(255, 255, 255));   //Fill the prospective screen with purple
        gEngine->window.display();
    }
    virtual void changeState(engine * gEngine, base_state* state)
    {
        gEngine->changeState(state);
    }




};

#endif // BASE_STATE_H_INCLUDED
