#include <iostream>

int Fibonacci(int number)
{
	// base case
	if (number == 0)
	{
		return 0;
	}
	else if (number == 1)
	{
		return 1;
	}

	// recursive case
	return Fibonacci(number - 1) + Fibonacci(number - 2);
}

int main()
{
	int number;

	std::cout << "피보나치 수열을 구할 값 : ";
	std::cin >> number;

	std::cout << number << " : " << Fibonacci(number) << std::endl;
}