#include "miscellaneous-utilities.h"

#include <iostream>

int main()
{
	std::cout << "Testing pickRandom() on the following list:" << std::endl;
	std::vector<int> list;
	list.push_back(1);
	std::cout << 1;
	for (int i = 2; i < 11; i++)
	{
		list.push_back(i);
		std::cout << ", " << i;
	}
	std::cout << std::endl;
	while (list.size() > 0)
	{
		std::cout << "Randomly selected " << pickRandom(list, true) << std::endl;
	}
	return 0;
}
