#pragma once
#include "SFML/Graphics.hpp"

namespace GamePlay{
	class Ball {
	public:
		Ball();

		void update();
		void render(sf::RenderWindow* window);
	private:
		sf::CircleShape ballSprite;
		const float radius = 10.f;
		const float xPos = 615.f;
		const float yPos = 335.f;
	};
}
