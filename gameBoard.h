#ifndef GAMEBOARD_H_INCLUDED
#define GAMEBOARD_H_INCLUDED

class game_board : public base_state
{
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


#endif // GAMEBOARD_H_INCLUDED
