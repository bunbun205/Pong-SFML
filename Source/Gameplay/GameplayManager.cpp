#include <Gameplay/GameplayManager.h>

namespace GamePlay{
	GameplayManager::GameplayManager(Event::EventManager* manager) {
		eventManager = manager;
		timeService = new Utility::TimeService();
		timeService->initialize();
		uiService = new UI::UIService();
		initialize();
	}

	void GameplayManager::initialize() {
		ball = new Ball();
		paddle1 = new Paddle(player1XPos, player1YPos);
		paddle2 = new Paddle(player2XPos, player2YPos);
		boundary = new Boundary();
	}

	void GameplayManager::updateScore() {
		if (ball->isLeftCollisionOccured()) {
			uiService->incrementPlayer2Score();
			ball->updateLeftCollisionState(false);
			resetPlayers();
		}

		if (ball->isRightCollisionOccured()) {
			uiService->incrementPlayer1Score();
			ball->updateRightCollisionState(false);
			resetPlayers();
		}
	}

	void GameplayManager::resetPlayers() {
		paddle1->reset(player1XPos, player1YPos);
		paddle2->reset(player2XPos, player2YPos);
	}

	void GameplayManager::update() {
		timeService->update();
		ball->update(paddle1, paddle2, timeService);

		paddle1->update(eventManager->isKeyPressed(sf::Keyboard::W), eventManager->isKeyPressed(sf::Keyboard::S), timeService);
		paddle2->update(eventManager->isKeyPressed(sf::Keyboard::Up), eventManager->isKeyPressed(sf::Keyboard::Down), timeService);

		updateScore();
		uiService->update();
	}

	void GameplayManager::render(sf::RenderWindow* window) {
		boundary->render(window);
		ball->render(window);
		paddle1->render(window);
		paddle2->render(window);
		uiService->render(window);
	}
} // GamePlay