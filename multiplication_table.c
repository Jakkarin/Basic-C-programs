#include <stdio.h>

main()
{
	unsigned int row,x,z = 0;
	printf("Please enter number of row : ");
	scanf("%u", &row);
	for (int i = 0; i < row; ++i)
	{
		// ประกาศจำนวนแม่
		z += 12;
		x = 0;
		// รันเลขแม่สูตรคูณ
		for (int j = (z-11); j <= z; ++j)
			printf("\t%d", j);

		printf("\n\t--\t--\t--\t--\t--\t--\t--\t--\t--\t--\t--\t--\n");
		// ส่วนแสดงผลคูณ
		for (int a = 1; a <= 12; ++a)
		{
			// รันเลขตัวคูณ
			printf("%u\t", ++x);

			// รันเลขตัวคูณ
			for (unsigned int f = (z-11); f <= z; ++f)
				printf("%u\t", f*a);

			printf("\n");
		}
		printf("\n");
	}
}
