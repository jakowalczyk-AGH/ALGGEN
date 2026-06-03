#include <iostream>
#include <algorithm>
#include "TPopulation.h"

using namespace std;

unsigned int TPopulation::_id = 0;

TPopulation::TPopulation(const TPopulation& original)
{
	_id = population_count;
	population_count++;

	candidated_count = original.candidated_count;
	best_val = original.get_best_val();

	for (int i = 0; i < candidated_count; i++)
	{
		const TCandidate* wsk_os_org = original.get_candidate_wsk(i);
		TCandidate copy{ *wsk_os_org };
		candidates.push_back(copy);
	}

	cout << "liczba osobnikow: " << candidates.size() << endl;
}

void TPopulation::calculate()
{
	double best_val = 0.0;

	for (int i = 0; i < candidated_count; i++)
	{
		candidates[i].rate();
		double val = candidates[i].get_mark();

		if (i == 0) best_val = val;
		else best_val = max(best_val, val);
	}

	this->best_val = best_val;
}

TCandidate TPopulation::get_best_candidate() const
{
	int i = 0;

	while (candidates[i].get_mark() != best_val) i++;

	return candidates[i];
}

void TPopulation::info() const
{
	cout << "\n\n";
	cout << "===== POPULATION #" << _id << " =====\n";
	for (int i = 0; i < candidated_count; i++)
	{
		cout << "== candidate #" << i << ": " << candidates[i].get_mark() << "\n";
	}

	cout << "===================================\n\n";
}