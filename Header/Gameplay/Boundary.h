#pragma once
#include "SFML/Graphics.hpp"

namespace GamePlay{
	class Boundary {
	public:
		Boundary();
		void render(sf::RenderWindow* window);

	private:
		void createTopBoundary();
		void createBottomBoundary();
		void createLeftBoundary();
		void createRightBoundary();
		void createCenterLine();

	private:
		const sf::Color boundaryColor = sf::Color::Blue;
		const sf::Color centerLineColor = sf::Color::White;

		sf::RectangleShape topBoundary;
		sf::RectangleShape bottomBoundary;
		sf::RectangleShape leftBoundary;
		sf::RectangleShape rightBoundary;
		sf::RectangleShape centerLine;

		const float horizontalBoundaryWidth = 1280.f;
		const float horizontalBoundaryHeight = 20.f;

		const float verticalBoundaryWidth = 20.f;
		const float verticalBoundaryHeight = 720.f;

		const float centerLineWidth = 10.f;
		const float centerLineHeight = 680.f;

		const float topXPos = 0.f;
		const float topYPos = 0.f;

		const float bottomXPos = 0.f;
		const float bottomYPos = 700.f;

		const float leftXPos = 0.f;
		const float leftYPos = 0.f;

		const float rightXPos = 1260.f;
		const float rightYPos = 0.f;

		const float centerLineXPos = 640.f;
		const float centerLineYPos = 20.f;
	};
} // GamePlay