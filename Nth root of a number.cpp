#include <iostream>
#include <iomanip>

double squareRoot(double x, double epsilon = 1e-7)
{
    if (x < 0)
    {
        return -1.0;
    }

    if (x == 0 || x == 1)
    {
        return x;
    }

    double left = 0.0;
    double right = x;
    double guess = (left + right) / 2.0;

    while (std::abs(guess * guess - x) > epsilon)
    {
        if (guess * guess < x)
        {
            left = guess;
        }
        else
        {
            right = guess;
        }
        guess = (left + right) / 2.0;
    }

    return guess;
}

int main()
{
    double number;
    std::cout << "Enter a number: ";
    std::cin >> number;

    double result = squareRoot(number);

    if (result != -1.0)
    {
        std::cout << "Square root of " << number << " is approximately " << std::setprecision(8) << result << std::endl;
    }
    else
    {
        std::cerr << "Error: Cannot calculate the square root of a negative number." << std::endl;
    }

    return 0;
}
