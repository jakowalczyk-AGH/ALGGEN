#pragma once

#include "TCandidate.h"

class TCandidate_Zad3 : public TCandidate
{
public:
	TCandidate_Zad3() : TCandidate()
	{
		init_vector();
	}

	TCandidate_Zad3(const TCandidate_Zad3& oryginal) : TCandidate(oryginal) {};

	void rate()
	{
		double x1 = genotype[0].get_val();
		double x2 = genotype[1].get_val();
		double x3 = genotype[2].get_val();
		mark = 100 * x1 + 10 * x2 + x3;
	}

protected:
	void init_vector();
};

void TCandidate_Zad3::init_vector()
{
	genotype.clear();
	// default two parameters x1 and x2 with range [0,10] step 1
	genotype.push_back(TParam("x1", 0, 10, 1));
	genotype.push_back(TParam("x2", 0, 10, 1));
	genotype.push_back(TParam("x3", 0, 10, 1));
	gens_count = genotype.size();
}