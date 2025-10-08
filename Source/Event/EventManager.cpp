#include <iostream>
#include <Event/EventManager.h>

namespace Event{
	void EventManager::pollEvents(sf::RenderWindow* gameWindow) {
		sf::Event event;
		while (gameWindow->pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				gameWindow->close();
			}

			if (isKeyPressed(sf::Keyboard::Escape)) {
				gameWindow->close();
			}

			if (isLeftMouseButtonClicked()) {
				sf::Vector2i mousePosition = sf::Mouse::getPosition(*gameWindow);
				std::cout << "Left mouse button pressed at: " << mousePosition.x << ", " << mousePosition.y << std::endl;
			}
		}
	}

	bool EventManager::isKeyPressed(sf::Keyboard::Key key) {
		return sf::Keyboard::isKeyPressed(key);
	}

	bool EventManager::isLeftMouseButtonClicked() {
		return sf::Mouse::isButtonPressed(sf::Mouse::Left);
	}
}
