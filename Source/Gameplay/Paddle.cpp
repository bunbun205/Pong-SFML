#include <Gameplay/Paddle.h>

namespace GamePlay{
	Paddle::Paddle(float xPos, float yPos) {
		paddleSprite.setSize(sf::Vector2f(paddleWidth, paddleHeight));
		paddleSprite.setPosition(xPos, yPos);
	}

	void Paddle::update() {}

	void Paddle::render(sf::RenderWindow* window) {
		window->draw(paddleSprite);
	}
}
