#include<stdio.h>
int sumofdigits(int num);
int main()
{
	int num, sum;
	printf("Enter a number to find sum of digits: ");
	scanf("%d", &num);
	sum=sumofdigits(num);
	printf("sum of digits of %d = %d", num, sum);
	return 0;
}
int sumofdigits(int num)
{
	if(num==0)
	return 0;
	return((num % 10) + sumofdigits(num/10));
}
