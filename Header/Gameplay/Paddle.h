#pragma once
#include "SFML/Graphics/RectangleShape.hpp"
#include "SFML/Graphics/RenderWindow.hpp"
#include "Utility/TimeService.h"

namespace GamePlay{
	class Paddle {
	public:
		Paddle(float xPos, float yPos);

		void update(bool moveUpKeyPressed, bool moveDownKeyPressed, Utility::TimeService* timeService);
		void render(sf::RenderWindow* window);

		sf::RectangleShape getPaddleSprite();
		void reset(float xPos, float yPos);

	private:
		void movePaddle(bool moveUpKeyPressed, bool moveDownKeyPressed, Utility::TimeService* timeService);

	private:
		float speedMultiplier = 200.f;
		const float paddleSpeed = 2.f;

		sf::RectangleShape paddleSprite;
		const float paddleWidth = 20.f;
		const float paddleHeight = 140.f;

		const float topBoundary = 20.f;
		const float bottomBoundary = 700.f;
	};
}
