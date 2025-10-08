#pragma once

#include "SFML/Graphics.hpp"

namespace UI{
	class UIService {
	public:
		UIService();
		void render(sf::RenderWindow* window);
	private:
		void initialize();
		void loadFontTexture();
		void createLeftScoreText();
		void createRightScoreText();
	private:
		sf::Font font;
		sf::Text leftScoreText;
		sf::Text rightScoreText;

		std::string texturePath = "../../Assets/Fonts/Aloevera-OVoWO.ttf";

		int fontSize = 40;
		sf::Color fontColor = sf::Color::White;
		std::string initialScore = "00";

		float leftScoreXPos = 570.f;
		float leftScoreYPos = 30.f;

		float rightScoreXPos = 670.f;
		float rightScoreYPos = 30.f;

		int player1Score = 0;
		int player2Score = 0;
	};
} // UI