#include <stdio.h>
int main() {
	int n,i, sum, h, a[55], ans, count = 1;

	while (scanf("%d", &n), n) {
		sum = 0;
		for (i = 0; i < n; i++) {
			scanf("%d",&a[i]);
			sum =sum+  a[i];
		}
		h = sum / n;
		ans = 0;
		for (i=0; i<n; i++) {
			if (a[i] > h)
				ans += a[i]- h;
		}
		printf("Set #%d\nThe minimum number of moves is %d.\n\n", count++, ans);
	}

	return 0;
}
