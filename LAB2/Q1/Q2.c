// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>


	int foo(int num){

		int  count;
		int sum=0;

    for(count = 1; count <= num; count++)
    {
        sum += count;
    }
	return sum;
	}

	
int main()
{

    int num = 0;

    int sum = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);


    sum = foo(num);


    printf("Sum = %d", sum);

    return 0;
}
