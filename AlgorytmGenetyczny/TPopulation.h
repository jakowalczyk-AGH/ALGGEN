#pragma once
#include <vector>
#include "TCandidate.h"

class TPopulation
{
	static unsigned int population_count;
	static unsigned int _id;
	unsigned int candidated_count;
	std::vector<TCandidate*> candidates;
	double best_val = 0;

public:
	TPopulation(unsigned int cands_count = 10);
	void calculate();
	TCandidate* get_best_candidate() const;

	unsigned int get_id() const { return _id; }
	unsigned int get_candidates_count() const { return candidated_count; }
	unsigned int get_best_val() const { return best_val; }

	void info();

private:
	const TCandidate* get_candidate_wsk(int _id) const;
};