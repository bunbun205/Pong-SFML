#include "UI/UIService.h"

namespace UI{
	UIService::UIService() {
		initialize();
	}

	void UIService::update() {
		leftScoreText.setString(formatScore(player1Score));
		rightScoreText.setString(formatScore(player2Score));
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

	std::string UIService::formatScore(int score) {
		return (score < 10 ? "0" : "") + std::to_string(score);
	}

	void UIService::incrementPlayer1Score() {
		player1Score++;
	}

	void UIService::incrementPlayer2Score() {
		player2Score++;
	}
} // UI