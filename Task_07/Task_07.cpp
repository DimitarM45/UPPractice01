#include <iostream>

int main()
{
	unsigned short number;
	std::cin >> number;

	short firstDigit = number / 1000 % 10;
	short secondDigit = number / 100 % 10;
	short thirdDigit = number / 10 % 10;
	short fourthDigit = number % 10;

	short largestDigit = 0;

	if (firstDigit >= secondDigit && firstDigit >= thirdDigit && firstDigit >= fourthDigit)
	{
		largestDigit = firstDigit;
	}
	else if (secondDigit >= firstDigit && secondDigit >= thirdDigit && secondDigit >= fourthDigit)
	{
		largestDigit = secondDigit;
	}
	else if (thirdDigit >= firstDigit && thirdDigit >= secondDigit && thirdDigit >= fourthDigit)
	{
		largestDigit = thirdDigit;
	}
	else
	{
		largestDigit = fourthDigit;
	}

	bool isOddAndLargestNum = false;

	if (firstDigit == largestDigit && firstDigit % 2 != 0)
	{
		isOddAndLargestNum = true;
	}

	std::cout << std::boolalpha << isOddAndLargestNum;
}