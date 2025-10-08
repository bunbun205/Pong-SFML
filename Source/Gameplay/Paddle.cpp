#include <Gameplay/Paddle.h>

namespace GamePlay{
	Paddle::Paddle(float xPos, float yPos) {
		paddleSprite.setSize(sf::Vector2f(paddleWidth, paddleHeight));
		paddleSprite.setPosition(xPos, yPos);
	}

	void Paddle::update(bool moveUpKeyPressed, bool moveDownKeyPressed) {
		movePaddle(moveUpKeyPressed, moveDownKeyPressed);
	}

	void Paddle::movePaddle(bool moveUpKeyPressed, bool moveDownKeyPressed) {
		if (moveUpKeyPressed)
			paddleSprite.move(0, -paddleSpeed);
		if (moveDownKeyPressed)
			paddleSprite.move(0, paddleSpeed);
	}

	void Paddle::render(sf::RenderWindow* window) {
		window->draw(paddleSprite);
	}
}
