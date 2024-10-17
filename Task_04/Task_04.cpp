#include <iostream>
#include <cmath>

int main()
{
	// solution for linear equations:

	int a, b;
	std::cin >> a;
	std::cin >> b;
	
	if (a != 0)
	{
		int x = (b * -1) / a;

		if (x == 0)
		{
			std::cout << "NO";

			return 0;
		}

		std::cout << x;
	}
	else if (a == 0 && b == 0)
	{
		std::cout << "INF";
	}
	else 
	{
		std::cout << "NO";
	}

	// (homework) solution for quadratic equations:

	/*
	int a, b, c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	int discriminant = b * b - (4 * a * c);

	int firstSolution = 0;

	if (discriminant > 0)
	{
		firstSolution = ((b * -1) + sqrt(discriminant)) / (2 * a);
		int secondSolution = ((b * -1) - sqrt(discriminant)) / (2 * a);

		std::cout << "Two real solutions exist:" << std::endl;
		std::cout << firstSolution << " " << secondSolution;
	}
	else if (discriminant == 0)
	{
		firstSolution = ((b * -1) + sqrt(discriminant)) / (2 * a);

		std::cout << "One real solution exists:" << std::endl;
		std::cout << firstSolution;
	}
	else
	{
		std::cout << "NO";
	} 
	*/
}