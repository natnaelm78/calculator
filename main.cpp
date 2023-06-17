#include "calculator.h"

using namespace std;

int main()
{
	double result = 0;
	result = add(4, 9);
	cout << "Sum: " << result << endl;
	result = sub(21, 2);
	cout << "Sub: " << result << endl;
	result = mul(8, 9);
	cout << "Mul: " << result << endl;
	result = div(24, 6);
	cout << "Div: " << result << endl;
	
	return (0);
}

/**
 * add - add to numbers
 * x - number
 * y - number
 * Return: sum of two numbers
 */
double add(double x, double y)
{
	double result = x + y;
	return (result);
}

/**
 * sub - subtract to numbers
 * x - number
 * y - number
 * Return: difference of two numbers
 */
double sub(double x, double y)
{
		double result = x - y;
		return (result);
}

/**
 * mul - multiply to numbers
 * x - number
 * y - number
 * Return: product of two numbers
 */
double mul(double x, double y)
{
		return (0);
}

/**
 * div - divide to numbers
 * x - number
 * y - number

