#include <Gameplay/GameplayManager.h>

namespace GamePlay{
	GameplayManager::GameplayManager() {
		initialize();
	}

	void GameplayManager::initialize() {
		ball = new Ball();

		paddle1 = new Paddle(player1XPos, player1YPos);
		paddle2 = new Paddle(player2XPos, player2YPos);
	}

	void GameplayManager::update() {}

	void GameplayManager::render(sf::RenderWindow* window) {
		ball->render(window);
		paddle1->render(window);
		paddle2->render(window);
	}
} // GamePlay