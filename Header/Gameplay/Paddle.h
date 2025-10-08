#pragma once
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"

namespace GamePlay{
	class Paddle {
	public:
		Paddle(float xPos, float yPos);

		void update(bool moveUpKeyPressed, bool moveDownKeyPressed);
		void render(sf::RenderWindow* window);

		sf::RectangleShape getPaddleSprite();
		void reset(float xPos, float yPos);

	private:
		void movePaddle(bool moveUpKeyPressed, bool moveDownKeyPressed);

	private:
		const float paddleSpeed = 0.5f;

		sf::RectangleShape paddleSprite;
		const float paddleWidth = 20.f;
		const float paddleHeight = 140.f;

		const float topBoundary = 20.f;
		const float bottomBoundary = 700.f;
	};
}
