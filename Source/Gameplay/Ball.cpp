#include <Gameplay/Ball.h>

namespace GamePlay{
	Ball::Ball() {
		loadTexture();
		initializeVariables();
	}

	void Ball::update() {
		move();
	}

	void Ball::render(sf::RenderWindow* window) {
		window->draw(pongBallSprite);
	}

	void Ball::loadTexture() {
		if (!pongBallTexture.loadFromFile(texturePath)) {
			throw std::runtime_error("Failed to load ball texture");
		}
	}

	void Ball::initializeVariables() {
		pongBallSprite.setTexture(pongBallTexture);
		pongBallSprite.setScale(scaleX, scaleY);
		pongBallSprite.setPosition(xPos, yPos);
	}

	void Ball::move() {
		pongBallSprite.move(velocity);
	}
}
