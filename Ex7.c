#include "Ex7.h"

int FindCommonDigit(unsigned long n1, unsigned long n2)
{
	/*
	* I will solve with backtracking
	*/
	/*
	* if n1==0==n2, means we exhausted all options, yet found no matching digits.
	* return -1;
	*/
	if (n1 == 0 || n2 == 0) {
		return -1;
	}
	int digit = n1 % 10;
	if (n2 % 10 == digit) {
		return digit;
	}
	int res1 = FindCommonDigit(n1 / 10, n2);
	int res2 = FindCommonDigit(n1, n2 / 10);
	/*
	* Now, since we know that the numbers are ordered,
	* in case of more then 1 match, returning the larger digit will yield the rightmost equal digit
	*/
	return max(res1, res2);
}


long GetReverse(unsigned long n)
{
	
}




char* dupCapStringRec(char str[])
{

}


int isArrAsc(int a[], int size)
{

}

int isSubsetSumExist(int a[], int size, int k)
{

}