#pragma once

#include <SFML/Graphics.hpp>

using namespace sf;

namespace Core{
	class GameWindowManger {
	public:
		void initialize();
		RenderWindow* getGameWindow();
		bool isGameRunning();
		void render();
	private:
		int gameWindowWidth = 1280;
		int gameWindowHeight = 720;
		std::string gameWindowTitle = "SFML Pong";

		RenderWindow* gameWindow;

		void createGameWindow();
	};
}