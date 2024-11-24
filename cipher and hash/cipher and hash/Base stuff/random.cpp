#include "Random.h"
//takes a lower bound for first value and a higher bound for second value and returns a random number between the range
int Random::random(int a, int b){
	std::uniform_int_distribution<> distr(a, b);
	return distr(gen);
}