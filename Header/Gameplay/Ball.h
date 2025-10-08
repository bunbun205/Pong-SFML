#pragma once
#include "SFML/Graphics.hpp"

namespace GamePlay{
	class Ball {
	public:
		Ball();

		void update();
		void render(sf::RenderWindow* window);
	private:
		void loadTexture();
		void initializeVariables();
	private:
		sf::Texture pongBallTexture;
		sf::Sprite pongBallSprite;
		const std::string texturePath = "../../Assets/Textures/Ball.png";

		const float scaleX = 0.06f;
		const float scaleY = 0.06f;

		sf::CircleShape ballSprite;
		const float radius = 10.f;
		const float xPos = 615.f;
		const float yPos = 335.f;
	};
}
