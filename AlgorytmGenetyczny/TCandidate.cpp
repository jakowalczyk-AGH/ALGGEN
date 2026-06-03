#include <iostream>
#include "math.h"
#include "TCandidate.h"
//#include "TParam.h"

using namespace std;

TCandidate::TCandidate()
{
	//init_vector();
	gens_count = genotype.size();

	mark = 0;
	rand_gens_val();
}

//void TCandidate::init_vector()
//{
//	genotype.clear();
//	// default two parameters x1 and x2 with range [0,10] step 1
//	genotype.push_back(TParam("x1", 0, 10, 1));
//	genotype.push_back(TParam("x2", 0, 10, 1));
//}

TCandidate::TCandidate(const TCandidate& original)
{
    // Use vector/TParam copy constructor to copy genotype safely
	mark = original.get_mark();
	genotype = original.genotype;
	gens_count = genotype.size();
}
//
//void TCandidate::rate()
//{
//	double x1 = genotype[0].get_val();
//	double x2 = genotype[1].get_val();
//
//	mark = pow(x1, 2) + x2;
//}

void TCandidate::rand_gens_val()
{
	for (int i = 0; i < gens_count; i++)
	{
		genotype[i].set_rand_val();
	}
}

void TCandidate::info() const
{
	cout << "\n\n";
	cout << "======================\n";
	cout << "==\n";
	cout << "== gens count: " << gens_count << "\n";

	for (int i = 0; i < gens_count; i++)
	{
		cout << "== \"" << genotype[i].get_name()
			<< "\" value: " << genotype[i].get_val() << "\n";
	}

	cout << "==\n";
	cout << "== rate: " << mark << "\n";
	cout << "======================\n";
}