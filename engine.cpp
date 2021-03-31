
#include "engine.h"
/*#include "string"
#include "cstring"
#include "ctime"
#include <cstddef>*/
#include <iostream>
#include "base_state.h"
#include "blue_state.h"
#include "gameBoard.h"

using namespace std;

engine::engine()
{
    window.create(sf::VideoMode(400, 400), "Tic-Tac-Toe"); //Creates window.
    isRunning = true;

    //base_state state;
    game_board * temp;

    temp = new game_board;

    state_stack.push_back(temp);

    while (window.isOpen())
    {
        while(isRunning)
        {
            state_stack.back()->events(this);   //Keyboard events
            state_stack.back()->update(this);   //Updating each object on the screen
            state_stack.back()->render(this);   //Updates the display
        }
        window.close();
    }
    return;
}

void engine::changeState(base_state * state)
{
    if (! state_stack.empty())
    {
        state_stack.pop_back();
    }

    state_stack.push_back(state);
}


