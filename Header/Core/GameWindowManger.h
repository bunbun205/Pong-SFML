#pragma once

#include <SFML/Graphics.hpp>

namespace Core{
	class GameWindowManager {
	public:
		void initialize();
		sf::RenderWindow* getGameWindow();
		bool isGameRunning();

		void clearGameWindow();
		void displayGameWindow();
	private:
		int gameWindowWidth = 1280;
		int gameWindowHeight = 720;
		std::string gameWindowTitle = "SFML Pong";

		sf::RenderWindow* gameWindow;

		void createGameWindow();
	};
}