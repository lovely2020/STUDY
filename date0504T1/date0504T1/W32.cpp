#include"pch.h"
#include"W32.h"

int F1::factorial(int n){
	if (n > 10)
		return 10000;
	else if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else return n * factorial(n - 1);
}