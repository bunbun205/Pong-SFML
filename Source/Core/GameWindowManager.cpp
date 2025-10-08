#include "Core/GameWindowManger.h"

namespace Core{
	void GameWindowManger::initialize() {
		gameWindow = new RenderWindow();
		createGameWindow();
	}

	void GameWindowManger::createGameWindow() {
		gameWindow->create(VideoMode::getDesktopMode(), gameWindowTitle, Style::Fullscreen);
	}

	bool GameWindowManger::isGameRunning() {
		return gameWindow->isOpen();
	}

	void GameWindowManger::render() {
		gameWindow->clear(Color(200, 50, 50, 255));

		gameWindow->display();
	}

	RenderWindow* GameWindowManger::getGameWindow() {
		return gameWindow;
	}
}