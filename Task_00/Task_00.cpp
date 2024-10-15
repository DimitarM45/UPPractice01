#include <iostream>

int main()
{
	double firstNumber;
	std::cin >> firstNumber;

	char operatorSymbol;
	std::cin >> operatorSymbol;

	double secondNumber;
	std::cin >> secondNumber;

	double result = 0;

	switch (operatorSymbol)
	{
		case '+':
			result = firstNumber + secondNumber;
			break;

		case '-':
			result = firstNumber - secondNumber;
			break;

		case '*':
			result = firstNumber * secondNumber;
			break;

		case '/':
			result = firstNumber / secondNumber;
			break;

		default:
			std::cout << "Invalid operator" << std::endl;
			return 0;
	}

	std::cout << result << std::endl;
}