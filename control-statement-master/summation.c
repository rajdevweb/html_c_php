// C program to compute
// sum of digits in number.
#include <stdio.h>

int summation(int no)
{
	if (no == 0) {
		return 0;
	}

	return (no % 10) + summation(no / 10);
}

// Driver code
int main()
{
	// Function call
	printf("%d", summation(1234));
	return 0;
}
