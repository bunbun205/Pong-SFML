#pragma once
#include "Boundary.h"
#include "Event/EventManager.h"
#include "Gameplay/Ball.h"
#include "Gameplay/Paddle.h"
#include "UI/UIService.h"
#include "Utility/TimeService.h"

namespace GamePlay{
	class GameplayManager {
	public:
		GameplayManager(Event::EventManager* manager);

	private:
		void initialize();

	public:
		void update();
		void render(sf::RenderWindow* window);

	private:
		Event::EventManager* eventManager;
		Utility::TimeService* timeService;
		UI::UIService* uiService;
		Ball* ball;
		Paddle* paddle1;
		Paddle* paddle2;
		Boundary* boundary;

		float player1XPos = 40.f;
		float player1YPos = 300.f;

		float player2XPos = 1210.f;
		float player2YPos = 300.f;
	};
} // GamePlay