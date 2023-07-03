
#include "Ex7.h"

void Test1(unsigned long n1, unsigned long n2, int expected, int dec)
{
	int result = FindCommonDigit(n1, n2);

	if (result != expected)
	{
		printf("FindCommonDigit => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}


void Test2(unsigned long n, long expected, int dec)
{
	long result = GetReverse(n);

	if (result != expected)
	{
		printf("GetReverse => Your Output is %ld, Expected: %ld (-%d)\n", result, expected, dec);
	}
}


void Test3(char str[], char expected[], int dec)
{
	char *result = dupCapStringRec(str);

	if (strcmp(result, expected) != 0)
	{
		printf("dupCapStringRec => Your Output is %s, Expected: %s (-%d)\n", result, expected, dec);
	}
}

void Test4(int a[],int size, int expected, int dec)
{
	int result = isArrAsc(a, size);

	if (result != expected)
	{
		printf("isArrAsc => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}

void Test5(int a[], int size, unsigned int k, int expected, int dec)
{
	int result = isSubsetSumExist(a, size, k);
	if (result != expected)
	{
		printf("isSubsetSumExist => Your Output is %d, Expected: %d (-%d)\n", result, expected, dec);
	}
}


int main(){
	Test1(113557999, 22246688, -1, 4);
	Test1(1135577, 223446689, 3, 4);
	Test1(112233445, 112233445, 5, 4);

	Test2(123456789, 987654321, 4);
	Test2(111222333, 333222111, 4);
	Test2(1234321, 1234321, 4);


	Test3("123321", "123321", 4);
	Test3("abBba", "ABBBA", 4);
	Test3("ab$cd", "AB$CD", 4);
	int a[] = { 1,4,6,8 };
	int b[] = { 1,2,-3,4,5 };
	int c[] = { -5,-4, 1, 2,3 };
	Test4(a, 4, 1, 4);
	Test4(b, 5, 0, 4);
	Test4(c, 5, 1, 4);

	//Test5(a, 4, 15, 1, 4);
	//Test5(b, 5, 9, 1, 4);
	//Test5(c, 5, 7, 0, 4);

	printf("done");
	return 0;
}
