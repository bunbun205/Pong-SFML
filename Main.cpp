#include <Core/GameWindowManger.h>

#include <Event/EventManager.h>

int main() {
	Core::GameWindowManager gameWindowManager;
	Event::EventManager eventManager;

	gameWindowManager.initialize();

	while (gameWindowManager.isGameRunning()) {
		eventManager.pollEvents(gameWindowManager.getGameWindow());
		gameWindowManager.render();
	}

	return 0;
}
