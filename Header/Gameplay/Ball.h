#pragma once
#include "Paddle.h"
#include "SFML/Graphics.hpp"

namespace GamePlay{
	enum class BallState {
		Idle,
		Moving
	};
	class Ball {
	public:
		Ball();

		void update(Paddle* paddle1, Paddle* paddle2, Utility::TimeService* timeService);
		void render(sf::RenderWindow* window);

		bool isLeftCollisionOccured();
		void updateLeftCollisionState(bool value);

		bool isRightCollisionOccured();
		void updateRightCollisionState(bool value);
	private:
		void loadTexture();
		void initializeVariables();
		void move(Utility::TimeService* timeService);
		void updateDelayTime(float deltaTime);
		void reset();
		void onCollision(Paddle* paddle1, Paddle* paddle2);
		void handlePaddleCollision(Paddle* paddle1, Paddle* paddle2);
		void handleBoundaryCollision();
		void handelOutOfBoundCollision();

	private:
		bool hadLeftCollision = false;
		bool hadRightCollision = false;

		float delayDuration = 1.f;
		float elapsedTime = 0.f;

		BallState currentState;

		float speedMultiplier = 150.f;
		float ballSpeed = 2.f;
		sf::Vector2f velocity = sf::Vector2f(ballSpeed, ballSpeed);

		sf::Texture pongBallTexture;
		sf::Sprite pongBallSprite;
		const std::string texturePath = "../../Assets/Textures/Ball.png";

		const float scaleX = 0.06f;
		const float scaleY = 0.06f;

		sf::CircleShape ballSprite;
		const float radius = 10.f;
		const float xPos = 615.f;
		const float yPos = 335.f;

		const float topBoundary = 20.f;
		const float bottomBoundary = 700.f;

		const float leftBoundary = 0.f;
		const float rightBoundary = 1280.f;

		const float centerXPos = 615.f;
		const float centerYPos = 325.f;
	};
}
