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

	void GameWindowManager::render() {
		gameWindow->clear(sf::Color(200, 50, 50, 255));

		gameWindow->display();
	}

	sf::RenderWindow* GameWindowManager::getGameWindow() {
		return gameWindow;
	}
}