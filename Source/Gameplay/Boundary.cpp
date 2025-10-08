#include <Gameplay/Boundary.h>

namespace GamePlay{
	Boundary::Boundary() {
		createTopBoundary();
		createBottomBoundary();
		createLeftBoundary();
		createRightBoundary();
		createCenterLine();
	}

	void Boundary::render(sf::RenderWindow* window) {
		window->draw(topBoundary);
		window->draw(bottomBoundary);
		window->draw(leftBoundary);
		window->draw(rightBoundary);
		window->draw(centerLine);
	}

	void Boundary::createTopBoundary() {
		topBoundary.setSize(sf::Vector2f(horizontalBoundaryWidth, horizontalBoundaryHeight));
		topBoundary.setPosition(topXPos, topYPos);
		topBoundary.setFillColor(boundaryColor);
	}

	void Boundary::createBottomBoundary() {
		bottomBoundary.setSize(sf::Vector2f(horizontalBoundaryWidth, horizontalBoundaryHeight));
		bottomBoundary.setPosition(bottomXPos, bottomYPos);
		bottomBoundary.setFillColor(boundaryColor);
	}

	void Boundary::createLeftBoundary() {
		leftBoundary.setSize(sf::Vector2f(verticalBoundaryWidth, verticalBoundaryHeight));
		leftBoundary.setPosition(leftXPos, leftYPos);
		leftBoundary.setFillColor(boundaryColor);
	}

	void Boundary::createRightBoundary() {
		rightBoundary.setSize(sf::Vector2f(verticalBoundaryWidth, verticalBoundaryHeight));
		rightBoundary.setPosition(rightXPos, rightYPos);
		rightBoundary.setFillColor(boundaryColor);
	}

	void Boundary::createCenterLine() {
		centerLine.setSize(sf::Vector2f(centerLineWidth, centerLineHeight));
		centerLine.setPosition(centerLineXPos, centerLineYPos);
		centerLine.setFillColor(centerLineColor);
	}
} // GamePlay