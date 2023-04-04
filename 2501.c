#include <stdio.h>

int main() {
	int n, k;
	int i, j = 0;
    int size=0;
    scanf("%d %d", &n, &k);
	int num[n];
	for (i = 1; i <= n; i++) {
		if (n % i == 0) {
			num[j] = i;
			j++;
            size++;
		}
	}
	if (k>size)
		printf("0");
	else
		printf("%d", num[k - 1]);

	printf("\n");
	return 0;
}