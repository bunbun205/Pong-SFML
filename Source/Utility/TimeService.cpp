#include "Utility/TimeService.h"

namespace Utility{
	void TimeService::initialize() {
		startTime = std::chrono::steady_clock::now();
		deltaTime = 0.0f;
	}

	void TimeService::update() {
		updateDeltaTime();
	}

	float TimeService::getDeltaTime() {
		return deltaTime;
	}

	void TimeService::updateDeltaTime() {
		deltaTime = calculateDeltaTime();
		updateStartTime();
	}

	float TimeService::calculateDeltaTime() {
		int delta = std::chrono::duration_cast<std::chrono::microseconds>(std::chrono::steady_clock::now() - startTime).count();

		return static_cast<float>(delta) / 1000000.0f;
	}
	void TimeService::updateStartTime() {
		startTime = std::chrono::steady_clock::now();
	}
} // Utility