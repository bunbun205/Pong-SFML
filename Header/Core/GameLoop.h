#pragma once
#include "Core/GameWindowManger.h"
#include "Event/EventManager.h"
#include "Gameplay/GameplayManager.h"

namespace Core{
	class GameLoop {
	public:
		void initialize();
		bool isGameRunning();
		void pollEvents();
		void render();
		void update();
	private:
		GameWindowManager* gameWindowManager;
		Event::EventManager* eventManager;
		GamePlay::GameplayManager* gameplayManager;
	};
}
