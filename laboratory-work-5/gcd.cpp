#include "gcd.h"

int gcd_1(int a, int b)
{
	int r, last_r;
	r = a % b;
	if (r == 0)
	{
		return b;
	}
	while (r != 0)
	{
		last_r = r;
		r = b % r;
	}
	return last_r;
}

int gcd_2(int a, int b)
{
	int r;
	r = a % b;
	if (r == 0)
	{
		return b;
	}
	else
	{
		return gcd_2(b, r);
	}
}