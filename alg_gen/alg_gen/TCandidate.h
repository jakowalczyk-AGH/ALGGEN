#pragma once
#include "TParam.h"
#include "TCandidate.h"

#define GENS_COUNT 2

class TCandidate
{
	TParam genotype[GENS_COUNT] =
	{
		TParam("x1", 0, 10, 1),
		TParam("x2", 0, 10, 1)
	};

	double mark;

public:
	TCandidate();

	double get_mark();
	void rate();

	void info();

private:
	void rand_gens_val();

};