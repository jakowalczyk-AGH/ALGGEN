#pragma once

#include "TCandidate.h"

class TCandidate_Zad2 : public TCandidate
{
public:
	TCandidate_Zad2() : TCandidate()
	{
        init_vector();
	}

	TCandidate_Zad2(const TCandidate_Zad2& oryginal) : TCandidate(oryginal) {};

	void rate()
	{
		double x1 = genotype[0].get_val();
		double x2 = genotype[1].get_val();

		mark = 100 * x1 + x2;
	}

protected:
	void init_vector();

};

void TCandidate_Zad2::init_vector()
{
	genotype.clear();
	// default two parameters x1 and x2 with range [0,10] step 1
	genotype.push_back(TParam("x1", 0, 10, 1));
	genotype.push_back(TParam("x2", 11, 20, 2));
	gens_count = genotype.size();
}
