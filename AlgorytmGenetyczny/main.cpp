#include <iostream>
#include <cstdlib>
#include <time.h>
#include <vector>

#include "TParam.h"
#include "TCandidate.h"
#include "TPopulation.h"
#include "TKlasa.h"
#include "TAlgorithm.h"
#include "TCandidate_Zad1.h"
#include "TCandidate_Zad2.h"
#include "TCandidate_Zad3.h"

using namespace std;

int main()
{
	srand(time(0));

	TCandidate_Zad1 os_zad1{};
	os_zad1.rate();
	os_zad1.info();


	TCandidate_Zad2 os_zad2{};
	os_zad2.rate();
	os_zad2.info();

	TCandidate_Zad3 os_zad3{};
	os_zad3.rate();
	os_zad3.info();

	std::cout << "\n\n\n";
	return 0;

	//vector<TCandidate*> candidates;

	//candidates.push_back(new TCandidate{});
	//candidates.push_back(new TCandidate_Zad1{});
	//candidates.push_back(new TCandidate_Zad2{});

	//for (int i = 0; i < candidates.size(); i++)
	//{
	//	candidates[i]->rate();
	//	candidates[i]->info();
	//}

	//for (int i = 0; i < candidates.size(); i++)
	//{
	//	delete candidates[i];
	//}

	//std::cout << "\n\n\n";
	//return 0;

	//TCandidate* os = new TCandidate_Zad1{};
	//os->rate();
	//os->info();
	//delete os;

	//os = new TCandidate_Zad2{};
	//os->rate();
	//os->info();
	//delete os;

	//std::cout << "\n\n\n";
	//return 0;

	//TCandidate_Zad2 os_zad2{};
	//os_zad2.rate();
	//os_zad2.info();
	//
	//TCandidate_Zad2 os_zad2_copy{ os_zad2 };
	//os_zad2_copy.rate();
	//os_zad2_copy.info();

	//TCandidate os_org{};
	//os_org.rate();
	//os_org.info();
	//
	//TCandidate_Zad1 os_zad1{};
	//os_zad1.rate();
	//os_zad1.info();

	//std::cout << "\n\n\n";

	//TParam gen{ "gen1", 0, 10, 0.1 };
	//gen.info();

	//TParam gen_copy(gen);
	//gen_copy.info();

	//std::cout << "\n\n";

	//TCandidate os1{};
	//os1.rate();
	//os1.info();

	//TCandidate os_copy{ os1 };
	//os_copy.info();


	//std::cout << "\n\n";

	//TPopulation pop1{ 5 };
	//pop1.calculate();
	//pop1.info();

	//TPopulation pop_copy{ pop1 };
	//pop_copy.info();

	//std::cout << "\n\n\n";
	//return 0;
	//cout << "\n\n\n";
	//return 0;

	//unsigned int candidates_count = 5;
	//unsigned int max_population_count = 20;
	//unsigned int min_improvement_proc = 2;

	//TAlgorithm task{ candidates_count, max_population_count, min_improvement_proc };
	//task.run();

	//TKlasa* wsk_obiekt1 = new TKlasa(-3);
	//TKlasa* wsk_obiekt2 = new TKlasa(0);
	//TKlasa* wsk_obiekt3 = new TKlasa(5);
	//TKlasa obiekt4{ -3 };
	//TKlasa obiekt5{ 2 };

	//wsk_obiekt1->info();
	//(*wsk_obiekt2).info();
	//wsk_obiekt3->info();
	//obiekt4.info();
	//obiekt5.info();

	//cout << "\n=========================================\n\n\n";

	//delete wsk_obiekt1;
	//delete wsk_obiekt2;
	//delete wsk_obiekt3;

	//vector <TKlasa> obiekty;

	//unsigned int count;
	//cout << "Podaj liczbe obiektow do utworzenia: ";
	//cin >> count;
	//cout << "\n";

	//for (int i = 0; i < count; i++)
	//{
	//	obiekty.push_back({ i });
	//}

	//for (int i = 0; i < count; i++)
	//{
	//	obiekty[i].info();
	//}

	//TKlasa obiekt1{ -3 };
	//TKlasa obiekt2{ 0 };
	//TKlasa obiekt3{ 5 };

	//obiekt1.info();
	//obiekt2.info();
	//obiekt3.info();

	//TPopulation pop(10);
	//cout << "Zaraz po utworzeniu obiektu klasy TPopulation";
	//pop.info();
	//cout << "\n\n";

	//cout << "Po wykonanych obliczeniach";
	//pop.calculate();
	//pop.info();
	//cout << "\n\n";

	//cout << "Najlepszy osobnik:";
	//pop.get_best_candidate().info();
	//
	//TCandidate os1{};
	//os1.rate();
	//os1.info();

	//TParam param1{ 1, 4, 1, 2 };
	//TParam param2{ 10, 20, 3 };
	//TParam param3{ 0, 10, 0.5, 3.3 };

	//// ////////////////////////////////////////

	//cout << "param1";
	//param1.info();

	//cout << "param2";
	//param2.info();

	//cout << "param3";
	//param3.info();

	//// ////////////////////////////////////////

	//param2.set_val(100);
	//param3.set_val(7.5);

	//cout << "===============\n";
	//cout << "AFTER\n";
	//cout << "===============\n\n";

	//cout << "param2";
	//param2.info();

	//cout << "param3";
	//param3.info();

	//// ////////////////////////////////////////

	//return 0;

}