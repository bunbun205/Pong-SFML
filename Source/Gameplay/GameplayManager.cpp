#include <Gameplay/GameplayManager.h>

namespace GamePlay{
	GameplayManager::GameplayManager(Event::EventManager* manager) {
		eventManager = manager;
		initialize();
	}

	void GameplayManager::initialize() {
		ball = new Ball();
		paddle1 = new Paddle(player1XPos, player1YPos);
		paddle2 = new Paddle(player2XPos, player2YPos);
		boundary = new Boundary();
	}

	void GameplayManager::update() {
		ball->update();

		paddle1->update(eventManager->isKeyPressed(sf::Keyboard::W), eventManager->isKeyPressed(sf::Keyboard::S));
		paddle2->update(eventManager->isKeyPressed(sf::Keyboard::Up), eventManager->isKeyPressed(sf::Keyboard::Down));
	}

	void GameplayManager::render(sf::RenderWindow* window) {
		boundary->render(window);
		ball->render(window);
		paddle1->render(window);
		paddle2->render(window);
	}
} // GamePlay