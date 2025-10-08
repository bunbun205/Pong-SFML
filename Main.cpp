#include "Core/GameLoop.h"

int main() {
	Core::GameLoop gameLoop;

	gameLoop.initialize();
	while (gameLoop.isGameRunning()) {
		gameLoop.pollEvents();
		gameLoop.update();
		gameLoop.render();
	}

	return 0;
}
