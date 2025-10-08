#include <Gameplay/Ball.h>
#include <oneapi/tbb/task_group.h>

namespace GamePlay{
	Ball::Ball() {
		loadTexture();
		initializeVariables();
	}

	void Ball::update(Paddle* paddle1, Paddle* paddle2) {
		move();
		onCollision(paddle1, paddle2);
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

	void Ball::reset() {
		pongBallSprite.setPosition(centerXPos, centerXPos);
		velocity = sf::Vector2f(ballSpeed, ballSpeed);
	}

	void Ball::onCollision(Paddle* paddle1, Paddle* paddle2) {
		handlePaddleCollision(paddle1, paddle2);
		handleBoundaryCollision();
		handelOutOfBoundCollision();
	}

	void Ball::handlePaddleCollision(Paddle* paddle1, Paddle* paddle2) {

		const sf::RectangleShape& paddle1Sprite = paddle1->getPaddleSprite();
		const sf::RectangleShape& paddle2Sprite = paddle2->getPaddleSprite();

		sf::FloatRect ballRect = pongBallSprite.getGlobalBounds();
		sf::FloatRect paddle1Rect = paddle1Sprite.getGlobalBounds();
		sf::FloatRect paddle2Rect = paddle2Sprite.getGlobalBounds();

		if ((ballRect.intersects(paddle1Rect) &&  velocity.x < 0) ||
			(ballRect.intersects(paddle2Rect) && velocity.x > 0)) {
			velocity.x *= -1;
		}
	}

	void Ball::handleBoundaryCollision() {
		sf::FloatRect ballRect = pongBallSprite.getGlobalBounds();

		if ((ballRect.top <= topBoundary && velocity.y < 0) ||
			(ballRect.top + ballRect.height >= bottomBoundary && velocity.y > 0)) {
			velocity.y *= -1;
		}
	}

	void Ball::handelOutOfBoundCollision() {
		sf::FloatRect ballRect = pongBallSprite.getGlobalBounds();

		if (ballRect.left <= leftBoundary) reset();
		else if (ballRect.left + ballRect.width >= rightBoundary) reset();
	}
}
