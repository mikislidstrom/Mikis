#ifndef INTERFACE_H_
#define INTERFACE_H_

#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>

namespace {
	const unsigned int windowWidth{ 800 }, windowHeight{ 600 };
}

class Interface
{
public:
	Interface();
	sf::RenderWindow mWindow;
	sf::Texture background;
	sf::Sprite backgroundSprite;	
};

#endif // INTERFACE_H_
