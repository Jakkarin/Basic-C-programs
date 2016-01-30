#include <stdio.h>
#include <string.h>

main()
{
	int position[3] = {0, 0, 0}, x, y[2], temp;
	char code[25];
	printf("ใส่ตำแหน่งลูกบอล \"1, 2 or 3\" : ");
	scanf("%d", &x);
	printf("ใส่โค้ดการสลับ \"Ex. ABCAACCBB\"");
	scanf("%s", code);
	position[x-1] = 1;
	for(int i = 0;i < strlen(code);++i)
	{
		switch(code[i])
		{
			case 'A':
				y[0] = 0;
				y[1] = 1;
				break;
			case 'B':
				y[0] = 1;
				y[1] = 2;
				break;
			case 'C':
				y[0] = 2;
				y[1] = 0;
				break;
		}
		temp = position[y[1]];
		position[y[1]] = position[y[0]];
		position[y[0]] = temp;
	}
	for(int i = 0;i < 3;++i)
	{
		if (position[i] == 1) {
			printf("%d\n", i+1);
			break;
		}
	}
}
