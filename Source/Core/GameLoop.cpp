#include <Core/GameLoop.h>

namespace Core{
	void GameLoop::initialize() {
		gameWindowManager = new GameWindowManager();
		eventManager = new Event::EventManager();
		gameWindowManager->initialize();
	}

	bool GameLoop::isGameRunning() {
		return gameWindowManager->isGameRunning();
	}

	void GameLoop::pollEvents() {
		eventManager->pollEvents(gameWindowManager->getGameWindow());
	}

	void GameLoop::render() {
		gameWindowManager->clearGameWindow();
		gameWindowManager->displayGameWindow();
	}

	void GameLoop::update() {

	}
}
