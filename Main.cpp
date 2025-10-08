#include <Core/GameWindowManger.h>

int main() {
	Core::GameWindowManger gameWindowManger;

	gameWindowManger.initialize();

	while (gameWindowManger.isGameRunning()) {
		gameWindowManger.render();
	}

	return 0;
}