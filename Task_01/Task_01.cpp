#include <iostream>

int main()
{
    std::cout << "Enter a year:" << std::endl;

    int year;
    std::cin >> year;

    bool isLeapYear = false;

    if (year % 4 == 0)
    {
        short lastTwoDigits = year % 100;

        if (lastTwoDigits == 0)
        {
            if (year % 400 == 0)
            {
                isLeapYear = true;
            }
        }
        else 
        {
            isLeapYear = true;
        }
    }

    if (isLeapYear)
    {
        std::cout << year << " is leap year.";
    }
    else
    {
        std::cout << year << " is not a leap year.";
    }
}