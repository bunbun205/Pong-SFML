#pragma once
#include <chrono>

namespace Utility{
	class TimeService {
	public:
		void initialize();
		void update();
		float getDeltaTime();

	private:
		void updateDeltaTime();
		float calculateDeltaTime();
		void updateStartTime();

	private:
		std::chrono::steady_clock::time_point startTime;
		float deltaTime;
	};
} // Utility