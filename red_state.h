#ifndef RED_STATE_H_INCLUDED
#define RED_STATE_H_INCLUDED

#include "base_state.h"
#include "blue_state.h"
#include "gameTile.h"

class red_state : public base_state
{
private:
    tile thing();
public:
    void events(engine * gEngine)
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
    void update(engine * gEngine)
    {


    }
    void render(engine * gEngine)
    {
        gEngine->window.clear(sf::Color(255, 0, 0));   //Fill the prospective screen with purple
        /*for(int x = 0; x < dice_list.size(); x++)
            window.draw(dice_list[x].display());
        for(int x = 0; x < button_list.size(); x++)
            window.draw(button_list[x].display());*/
        gEngine->window.display();                       //Put prospective screen into the display
    }



};

#endif // RED_STATE_H_INCLUDED
