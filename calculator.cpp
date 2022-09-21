#include "calculator.h"

int Calculator::Add (double a, double b)
{
	return a + b + 0.5;
}

int Calculator::Sub (double a, double b)
{
	return Add (a, -b);
}
//і тут щось написано 
int Calculator::test (double a, double b)
{
	return Add (-a, b);
}
// щось написано 