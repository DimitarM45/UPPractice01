#include <iostream>

int main()
{
	int tomatoCount, pepperCount, carrotCount, oliveCount, potatoCount, condimentVolume;
	std::cin >> tomatoCount;
	std::cin >> pepperCount;
	std::cin >> carrotCount;
	std::cin >> oliveCount;
	std::cin >> potatoCount;
	std::cin >> condimentVolume;

	bool hasFriend;
	std::cin >> hasFriend;

	bool willEat = false;

	bool hasEnoughForSalad = tomatoCount == 1 && pepperCount == 2 &&
						     carrotCount == 4 && oliveCount == 3 &&
							 potatoCount == 3 && condimentVolume == 150;

	bool hasEnoughForSoup = tomatoCount == 2 && pepperCount == 3 &&
						    carrotCount == 5 && oliveCount == 6 &&
						    potatoCount == 10 && condimentVolume == 200 &&
							hasFriend;

	bool hasEnoughForStew = tomatoCount == 5 && pepperCount == 6 &&
						    carrotCount == 12 && oliveCount == 7 &&
							potatoCount == 12 && condimentVolume == 300 &&
							hasFriend;

	if (hasEnoughForSalad || hasEnoughForSoup || hasEnoughForStew)
	{
		willEat = true;
	}

	std::cout << std::boolalpha << willEat;
}