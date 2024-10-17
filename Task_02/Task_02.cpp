#include <iostream>

int main()
{
	std::cout << "Enter symbol:";

	char symbol;
	std::cin >> symbol;

	const short lowerUpperDifference = 32;
	
	if (symbol >= 'A' && symbol <= 'Z')
	{
		std::cout << "The lower case character corresponding to is " << (char)(symbol + lowerUpperDifference);
	}
	else if (symbol >= 'a' && symbol <= 'z')
	{
		std::cout << "The upper case character corresponding to is " << (char)(symbol - lowerUpperDifference);
	}
	else
	{
		std::cout << symbol << " is not a letter";
	}
}