#include <string>
#include "MathUtil.h"

bool MathUtil::isPrime(int number)
{
	// ignore negative sign
	number = abs(number);

	// 0 and 1 are no prime numbers
	if (number == 0 || number == 1) {
		return false;
	}

	// find divisor that divides without a remainder
	int divisor;
	for (divisor = number / 2; number%divisor != 0; --divisor) {
		;
	}

	// if no divisor greater than 1 is found, it is a prime number
	return divisor == 1;
}

