#pragma once
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"

namespace GamePlay{
	class Paddle {
	public:
		Paddle(float xPos, float yPos);

		void update();
		void render(sf::RenderWindow* window);
	private:
		sf::RectangleShape paddleSprite;
		const float paddleWidth = 20.f;
		const float paddleHeight = 140.f;
	};
}
