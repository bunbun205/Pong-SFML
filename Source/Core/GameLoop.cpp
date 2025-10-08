#include <Core/GameLoop.h>

#include "Sound/SoundManager.h"

namespace Core{
	void GameLoop::initialize() {
		gameWindowManager = new GameWindowManager();
		eventManager = new Event::EventManager();
		gameplayManager = new GamePlay::GameplayManager(eventManager);
		Sound::SoundManager::Initialize();
		Sound::SoundManager::PlayBackgroundMusic();
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
		gameplayManager->render(gameWindowManager->getGameWindow());
		gameWindowManager->displayGameWindow();
	}

	void GameLoop::update() {
		gameplayManager->update();
	}
}
