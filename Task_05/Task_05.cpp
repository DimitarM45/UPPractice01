#include <iostream>

int main()
{
	short month;
	std::cin >> month;

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

    short daysInMonth;

	switch (month)
	{
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            daysInMonth = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            daysInMonth = 30;
            break;

        case 2:
            daysInMonth = isLeapYear ? 29 : 28;
            break;

	    default:
            std::cout << "Invalid month!";
            return 0;
	}

    std::cout << daysInMonth;
}