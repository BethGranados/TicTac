#ifndef GAMETILE_H_INCLUDED
#define GAMETILE_H_INCLUDED

#include <map>
#include <SFML/Graphics.hpp>

class tile
{
private:
    char state;
    std::map<char, sf::Sprite*> tile_sprites;
    sf::Vector2f coordinates;
    sf::Vector2f size;

public:

    tile()
    {
        state = ' ';

        load_num_sprite(' ', 0, 0, 120,120, &tile_sprites);


    }

    void load_num_sprite(char c, int x_cord, int y_cord, int width, int height, std::map<char, sf::Sprite*> * sprite_map)
    {
        static int called = 0;
        static sf::Texture texture;

        if (called == 0)
        {
            texture.loadFromFile("B.png");
            called++;
        }
        sf::Sprite * temp;
        temp = new sf::Sprite(texture);
        //temp->setTexture;
        temp->setTextureRect(sf::IntRect(x_cord, y_cord, width, height));
        sprite_map['c']=temp;
    }

    void update()
    {


    }

    sf::Sprite display()
    {
        return *tile_sprites[state];

    }


};

#endif // GAMETILE_H_INCLUDED
