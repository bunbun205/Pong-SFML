#pragma once
#include "Gameplay/Ball.h"
#include "Gameplay/Paddle.h"

namespace GamePlay{
	class GameplayManager {
	public:
		GameplayManager();

	private:
		void initialize();

	public:
		void update();
		void render(sf::RenderWindow* window);

	private:
		Ball* ball;
		Paddle* paddle1;
		Paddle* paddle2;

		float player1XPos = 40.f;
		float player1YPos = 300.f;

		float player2XPos = 1210.f;
		float player2YPos = 300.f;
	};
} // GamePlay