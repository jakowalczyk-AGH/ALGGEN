#pragma once
#include "TParam.h"
#include <vector>

//#define GENS_COUNT 2

class TCandidate
{
protected:
	//TParam genotype[GENS_COUNT] =
	//{
	//	TParam("x1", 0, 10, 1),
	//	TParam("x2", 0, 10, 1)
	//};

	int gens_count = 0;
	std::vector<TParam> genotype;

	double mark;

public:
	TCandidate();
	TCandidate(const TCandidate& original);
	TCandidate& operator=(const TCandidate& other) = default;

	virtual TCandidate* create() = 0;
	virtual TCandidate* create_copy() const = 0;

	double get_mark() const { return mark; };
	virtual void rate() = 0;

	void info() const;

protected:
	virtual void init_vector() = 0;
	void rand_gens_val();
	double get_gen_val(int gen_id) const { return genotype[gen_id].get_val(); }
};