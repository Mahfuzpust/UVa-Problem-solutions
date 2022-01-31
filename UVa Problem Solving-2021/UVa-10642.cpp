#include<stdio.h>

typedef long long LL;
int main()
{
	int Case;
	scanf("%d", &Case);

	int i, x1, y1, x2, y2;
	for (i = 1; i <= Case; i++)
	{
		scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
		LL step1 = (LL)x1 + (LL)((x1 + y1)*(1 + x1 + y1) / 2);
		LL step2 = (LL)x2 + (LL)((x2 + y2)*(1 + x2 + y2) / 2);

		if (step1 > step2)
			printf("Case %d: %lld\n", i, step1 - step2);
		else
			printf("Case %d: %lld\n", i, step2 - step1);
	}

	return 0;
}
