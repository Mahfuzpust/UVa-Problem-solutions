#include <stdio.h>
int main() {
	int n, f, a;

	scanf("%d", &n);
	while (n--)
		scanf("%d\n%d", &a, &f);

		for (int i = 0; i < f; i++) {
			for (int j = 1; j <= a; j++) {
				for (int k = 0; k < j; k++) {
					printf("%d", j);
				}
				printf("\n");
			}
			for (int j = a - 1; j >= 1; j--) {
				for (int k = 0; k < j; k++) {
					printf("%d", j);
				}
				printf("\n");
			}
			if (i != f - 1)
				printf("\n");
		}
		if (n)
			printf("\n");
	}

	return 0;
}
