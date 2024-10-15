#include <iostream>

int main()
{
	double laptopPrice;
	std::cin >> laptopPrice;

	int usbPortCount;
	std::cin >> usbPortCount;

	int ramSize;
	std::cin >> ramSize;

	bool hasSSD;
	std::cin >> hasSSD;

	bool willBuy = false;

	if (usbPortCount >= 3 && ramSize >= 8 && hasSSD && (laptopPrice >= 1000 && laptopPrice <= 1500))
	{
		willBuy = true;
	}
	else if (!hasSSD && ramSize < 8 && laptopPrice <= 800)
	{
		willBuy = true;
	}

	std::cout << willBuy ? "He will buy the laptop." : "He won't buy the laptop.";
}