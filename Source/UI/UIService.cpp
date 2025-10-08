#include "UI/UIService.h"

namespace UI{
	UIService::UIService() {
		initialize();
	}
	void UIService::initialize() {
		loadFontTexture();
		createLeftScoreText();
		createRightScoreText();
	}

	void UIService::render(sf::RenderWindow* window) {
		window->draw(leftScoreText);
		window->draw(rightScoreText);
	}

	void UIService::loadFontTexture() {
		font.loadFromFile(texturePath);
	}

	void UIService::createLeftScoreText() {
		leftScoreText.setFont(font);
		leftScoreText.setString(initialScore);
		leftScoreText.setCharacterSize(fontSize);
		leftScoreText.setFillColor(fontColor);
		leftScoreText.setPosition(leftScoreXPos, leftScoreYPos);
	}

	void UIService::createRightScoreText() {
		rightScoreText.setFont(font);
		rightScoreText.setString(initialScore);
		rightScoreText.setCharacterSize(fontSize);
		rightScoreText.setFillColor(fontColor);
		rightScoreText.setPosition(rightScoreXPos, rightScoreYPos);
	}
} // UI