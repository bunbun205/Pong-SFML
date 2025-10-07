#pragma once

#include <SFML/Graphics.hpp>

namespace Event{
	class EventManager {
	public:
		void pollEvents(sf::RenderWindow* gameWindow);
		bool isKeyPressed(sf::Keyboard::Key key);
	};
}