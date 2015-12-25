#include <stdio.h>

main()
{
	// 8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
	unsigned int number, factorial, count = 0;
	printf("Please enter number of factorial : ");
	scanf("%u", &number);
	if (number > 0)
	{
		factorial = number;
		for (count = (number - 1);count > 0;--count)
		{
			// factorial = factorial * count;
			factorial *= count;
		}
		printf("Factorial of %u is %u\n", number, factorial);
	}
}