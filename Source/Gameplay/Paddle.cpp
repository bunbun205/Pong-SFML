#include <Gameplay/Paddle.h>

namespace GamePlay{
	Paddle::Paddle(float xPos, float yPos) {
		paddleSprite.setSize(sf::Vector2f(paddleWidth, paddleHeight));
		paddleSprite.setPosition(xPos, yPos);
	}

	void Paddle::update(bool moveUpKeyPressed, bool moveDownKeyPressed, Utility::TimeService* timeService) {
		movePaddle(moveUpKeyPressed, moveDownKeyPressed, timeService);
	}

	void Paddle::movePaddle(bool moveUpKeyPressed, bool moveDownKeyPressed, Utility::TimeService* timeService) {
		if (moveUpKeyPressed && paddleSprite.getPosition().y > topBoundary)
			paddleSprite.move(0, -paddleSpeed * timeService->getDeltaTime() * speedMultiplier);
		if (moveDownKeyPressed && paddleSprite.getPosition().y + paddleSprite.getSize().y < bottomBoundary)
			paddleSprite.move(0, paddleSpeed * timeService->getDeltaTime() * speedMultiplier);
	}

	void Paddle::render(sf::RenderWindow* window) {
		window->draw(paddleSprite);
	}

	sf::RectangleShape Paddle::getPaddleSprite() {
		return paddleSprite;
	}

	void Paddle::reset(float xPos, float yPos) {}
}
