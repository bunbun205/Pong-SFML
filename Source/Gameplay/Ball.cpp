#include <Gameplay/Ball.h>

namespace GamePlay{
	Ball::Ball() {
		ballSprite.setRadius(radius);
		ballSprite.setPosition(xPos, yPos);
	}

	void Ball::update() {}

	void Ball::render(sf::RenderWindow* window) {
		window->draw(ballSprite);
	}
}
