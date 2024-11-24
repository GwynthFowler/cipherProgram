#pragma once
#include <random>
namespace Random {
	static std::random_device rd;
	static std::mt19937 gen(rd());
	int random(int a, int b);
};