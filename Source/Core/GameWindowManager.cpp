#include "Core/GameWindowManger.h"

namespace Core{
	void GameWindowManager::initialize() {
		gameWindow = new sf::RenderWindow();
		createGameWindow();
	}

	void GameWindowManager::createGameWindow() {
		gameWindow->create(sf::VideoMode::getDesktopMode(), gameWindowTitle, sf::Style::Default);
	}

	bool GameWindowManager::isGameRunning() {
		return gameWindow->isOpen();
	}

	void GameWindowManager::clearGameWindow() {
		gameWindow->clear();
	}

	void GameWindowManager::displayGameWindow() {
		gameWindow->display();
	}

	sf::RenderWindow* GameWindowManager::getGameWindow() {
		return gameWindow;
	}
}