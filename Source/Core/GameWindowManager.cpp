#include "Core/GameWindowManger.h"

namespace Core{
	void GameWindowManger::initialize() {
		gameWindow = new RenderWindow();
		createGameWindow();
	}

	void GameWindowManger::createGameWindow() {
		gameWindow->create(VideoMode(gameWindowWidth, gameWindowHeight), gameWindowTitle);
	}

	bool GameWindowManger::isGameRunning() {
		return gameWindow->isOpen();
	}

	void GameWindowManger::render() {

	}

	RenderWindow* GameWindowManger::getGameWindow() {
		return gameWindow;
	}
}