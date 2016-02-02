#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/* รูปแบบข้อมูล
codingv1 1 2
codingv2 2 3
codingv3 3 2
codingv4 4 2
codingv5 5 2
codingv6 6 2
codingv7 7 2
codingv8 8 2
codingv9 9 2
codingv10 10 2
codingv11 11 2
codingv12 12 2
codingv13 13 2
codingv14 14 2
codingv15 15 2
codingv16 16 25
codingv17 17 2
codingv18 18 20
codingv19 19 2
codingv20 20 1
*/

void check_vote(int void_id);

struct member {
	char name[50];
	int id;
	int vote;
};

struct member lists[20] = {"\0", 0, 0};

void main(void)
{
	int i, id, vote_id = 0;
	char name[50];

	FILE *fp;
	// เปลี่ยน lists.txt ให้เป็นที่อยู่ของไฟล์ที่จะใช้
	fp = fopen("lists.txt", "r");
	while ((fscanf(fp, "%s %d %d", name, &id, &vote_id)) != EOF)
	{
		strcpy(lists[i].name, name);
		lists[i].id = id;
		check_vote(vote_id);
		++i;
	}
	i = 0;
	struct member cache;
	while (i < 20)
	{
		int j = 0;
		while(j < 20)
		{
			if (lists[i].vote > lists[j].vote) {
				cache = lists[j];
				lists[j] = lists[i];
				lists[i] = cache;
			} ++j;
		} ++i;
	}
	printf("[%d] %s\t%d\n", lists[0].id, lists[0].name, lists[0].vote);
	printf("[%d] %s\t%d\n", lists[1].id, lists[1].name, lists[1].vote);
}

void check_vote(int void_id)
{
	int i = 0;
	while (i < 20)
	{
		if (lists[i].id == void_id)
			lists[i].vote += 1;
		++i;
	}
}
