#ifndef ENGINE_H_INCLUDED
#define ENGINE_H_INCLUDED

#include <SFML/Graphics.hpp>
#include <fstream>

class base_state;

//Class where the main loop, input and such are. Might also be a GOD object. Will need to clean later.
class engine
{
private:
    bool isRunning;
    std::vector<base_state*> state_stack;
public:
    sf::RenderWindow window;
    //Put default values into the variables and runs the events(), update(), and render() in a loop.
    engine();

    //Takes in all keyboard events
    void events();

    //Does all things that must be done each frame
    void update();

    //Updates the display window.
    void render();

    void changeState(base_state * state);

};

#endif // ENGINE_H_INCLUDED
